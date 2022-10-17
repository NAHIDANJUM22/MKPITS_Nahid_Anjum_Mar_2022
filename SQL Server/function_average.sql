create table rubber41(id int,name varchar(30),sal money,age int)
insert rubber41 values(25,'neha',12000,26)
insert rubber41 values(55,'reha',15000,28)
insert rubber41 values(45,'jeha',17000,29)
insert rubber41 values(65,'geha',19000,32)
insert rubber41 values(35,'peha',19000,null)
insert rubber41 values(15,'heha',19000,null)
select avg(id) from rubber41 where age=32
select avg(id) from rubber41
select avg(distinct(sal)) from rubber41