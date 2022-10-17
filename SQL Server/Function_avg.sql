create table rubber9(id int,name varchar(30),sal money,age int)
insert rubber9 values(25,'neha',12000,26)
insert rubber9 values(55,'reha',15000,28)
insert rubber9 values(45,'jeha',17000,29)
insert rubber9 values(65,'geha',19000,32)
select avg(sal) as "average salary" from rubber9
select avg(distinct(sal)) from rubber9