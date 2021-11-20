package main
import("fmt"
 	  "net/http"
	  )

type key struct{
	Name string
	Password string
	Nickname string
}

var num = make([]key, 0, 100)
var key01 key

func handler(w http.ResponseWriter, r *http.Request){
	key01.Name = r.FormValue("Name")
	key01.Password = r.FormValue("Password")
	key01.Nickname = r.FormValue("Nickname")

	var ok = true
	for _, value := range num{
		if value.Name == key01.Name{
			ok = false
		}
	}
	if ok {
		num = append(num, key01)
		cookies := http.Cookie{
			Name: key01.Name,
			Value: key01.Password,
			HttpOnly: true,
		}
		w.Header().Set("Set-Cookie", cookies.String())
		w.Write([]byte("注册成功"))
	}else{
		w.Write([]byte("该用户名已存在"))
	}
}

func show(p *key, w http.ResponseWriter, r *http.Request){
	fmt.Fprintln(w, "%+v", *p)
}

func edit(w http.ResponseWriter, r *http.Request){
	name := r.FormValue("Name")
	value := r.FormValue("Password")
	cookie, err := r.Cookie(name)

	if cookie != nil{
		for i := 0; i < len(num); i++ {
			if name==num[i].Name && num[i].Password==value{
				w.Write([]byte("你的信息如下：\n"))
				show(&num[i], w, r)
				num[i].Password = r.FormValue("password")
				num[i].Nickname = r.FormValue("Nickname")
				w.Write([]byte("修改后的信息如下：\n"))
				show(&num[i], w, r)
			}
		}
 	}else{
		 fmt.Fprintln(w, err)
	 }
}

func show_all(w http.ResponseWriter, r *http.Request){
	tmp := r.FormValue("Name")
	cookie, err := r.Cookie(tmp)
	if cookie != nil {
		if cookie.Name==tmp && cookie.Value==r.FormValue("Password"){
			for index, value := range num{
				fmt.Fprintln(w, "已经注册的第%d的人的信息：%+v\n", index+1, value)
			}
		}
	}else{
		fmt.Fprintln(w, err)
	}
}

func login(w http.ResponseWriter, r *http.Request){
	for _, value := range num {
		if value.Name==r.FormValue("name") && value.Password==r.FormValue("Passsword"){
			cookie := http.Cookie{
				Name: key01.Name,
				Value: key01.Password,
				HttpOnly: true,
			}
			w.Header().Set("Set-Cookie", cookie.String())
			w.Write([]byte("登陆成功"))
		}else{
			w.Write([]byte("用户名或密码错误"))
		}
	}
}

func main(){
	http.HandleFunc("/handler", handler)
	http.HandleFunc("/handler/edit", edit)
	http.HandleFunc("/handler/show", show_all)
	http.HandleFunc("/login", login)
	http.HandleFunc("/login/edit", edit)
	http.HandleFunc("/login/show", show_all)
}