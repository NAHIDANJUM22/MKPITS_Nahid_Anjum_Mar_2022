create table rubber(id int,name varchar(30),sal money,age int)
insert rubber values(25,'neha',12000,26)
insert rubber values(55,'reha',15000,28)
insert rubber values(45,'jeha',17000,29)
insert rubber values(65,'geha',19000,32)
select * from rubber where age=(select max(age) from rubber)