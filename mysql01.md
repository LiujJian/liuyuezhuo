# MySQL基础

## 基础语句

### <font color=#0000FF>有关数据库</font>

**在数据库服务器中创建我们的数据库**

``create database tese;``

**使用数据库**

``use test;``

### <font color=#0000FF>有关数据表</font>

**创建一个数据表**

``create table biao(name varchar, age int);``

**查询数据库中的数据表**

``show tables;``

**查询数据表中的数据类型以及结构详情**

``describe biao;``

**查看数据表中的记录**

``select * from test;``

**向数据表中添加数据**

``insert into test values(name, age);``

## MySQL常用数据类型

MySQL支持多种类型，大致可以分为三类：**数值，日期/时间和字符串（字符）类型**。

### 数值：

![屏幕截图 2021-12-05 204833](C:\Users\lenovo\Desktop\图片\屏幕截图 2021-12-05 204833.png)

### 日期/时间

![屏幕截图 2021-12-05 205724](C:\Users\lenovo\Desktop\图片\屏幕截图 2021-12-05 205724.png)

### 字符串

![屏幕截图 2021-12-05 205952](C:\Users\lenovo\Desktop\图片\屏幕截图 2021-12-05 205952.png)

## 语句

**删除数据表中的数据**

``delete from test where name='***';``

``delete from test where  age=;``

*(以上均为选择性删除)*

**修改数据表中的数据**

``update test set age=** where name='';``

**显示表格的属性**

``desc user;``

## 总结

**增加** ：``insert``

**删除**：``delete``

**修改**：``update, alter``

**查询**：``select``



# 约束

## 主键约束

它能够唯一确定一张表中的一条记录，也就是我们**通过给某个字段添加约束，就可以使得该字段不重复且不为空**。

```mysql
create table user(
id int primary key,
name varchar(20)
)
```

*使用后如果提交数据对应部分重复或是空的，就会报错*

**如果说创建表的时候，忘记创建主键约束了**

```mysql
alter table user add primary key(id);
```

这样就在 id 后添加了主键约束。

**删除：**

```mysql
alter table user drop primary key;
```

这样就在id后删除了主键约束。



**通过修改字段的方式改变主键约束**

``alter table user modify id int primary key;``

### 联合主键

**用主键约束同时锁定多个数据表中的元素：**

```mysql
create table user(
id int,
name varchar(20)，
password varchar(20),
primary key(id, name)
);
```

此时**id、name**只要与已存在的信息**不完全相同就能录入**，如果全相同， 就会报错。

## 自增约束

```MySQL
create table user(
id int primary key auto_increment,
name varchar(20)
);
```

![屏幕截图 2021-12-05 220645](C:\Users\lenovo\Desktop\图片\屏幕截图 2021-12-05 220645.png)

<u>**主键约束与自增约束一起使用，可以管控id的自动增长**</u>



如果说创建表的时候，忘记创建主键约束了

```mysql
alter table user add primary key(id);
```

这样就在 id 后添加了主键约束。

删除：

```mysql
alter table user drop primary key;
```

这样就在id后删除了逐渐约束。



**通过修改字段的方式改变主键约束**

``alter table user modify id int primary key;``



## 唯一约束

**约束修饰的字段的值不可以重复**

首先建立一个数据表：

```mysql
create table user(
id int,
name varchar(20)
);
```

再添加唯一约束：

```mysql
alter table user add unique(name);
alter table user modify name varchar(20) unique;
```



**或者在建表的时候直接添加唯一约束**

```mysql
create table user(
id int,
name varchar(20),
unique(name)
);
```

***只要设置了唯一约束的元素均不重复，就可以添加数据***

**删除唯一约束**

``alter table user drop index name``



## 非空约束

**修饰的字段不能为空**

```mysql
create table user(
id int,
name varchar(20) not null
);
```



## 默认约束

**当插入字段时，如果没有添加数据，就会使用默认值**

```mysql
creat table user(
id int,
name varchar(20),
age int default 10
);
```

*此时在填入数据时如果没有添加age，在数据表中就会使用默认值10*



## 外键约束

<u>涉及到**两个表**：**父表**、**子表** *（主表、副表）*。</u>

```mysql
//班级表
create table classes(
id int primary key,
name varchar(20)
);

//学生表
create table student(
id int primary key,
name varchar(20),
class_id int,
foreign key(class_id) references classes(id)  //指明class_id来自哪个表
);
```

这样就可以给班级表中的 **id 与学生表中的 class_id 构建相关的状态**。

而班级表中的数据已与学生表中的数据相关联，此时就**不能删除班级表中的相关数据**。



# 数据表设计





