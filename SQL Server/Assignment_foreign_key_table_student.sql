create table student101(rno int primary key,name varchar(30),addr varchar(30))--Parent Table
insert student101 values(10,'amit','nagpur'),(20,'sumita','mumbra'),(30,'rajat','mumbai')

create table teacher(empid int,name varchar(30),salary money,
rno int foreign key references student101(rno))---Child Table

insert into teacher values(51,'rekha',76000,10)
insert into teacher values(52,'rekha',56000,20)
insert into teacher values(53,'rekha',46000,30)

--error will through because of forign key constraint
--insert into teacher values(51,'rekha',36000,40)

select * from student101
select * from teacher