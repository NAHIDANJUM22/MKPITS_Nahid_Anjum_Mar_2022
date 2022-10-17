create table rubber4(id int,name varchar(30),sal money,age int)
--insert rubber4 values(25,'neha',12000,26)
--insert rubber4 values(55,'reha',15000,28)
--insert rubber4 values(45,'jeha',17000,29)
--insert rubber4 values(65,'geha',19000,32)
--insert rubber4 values(65,'geha',19000,null)
--insert rubber4 values(65,'geha',19000,null)
select count(*)from rubber4
select count(distinct(age)) as age from rubber4
select count(distinct(sal)) as total from rubber4
select * from rubber4