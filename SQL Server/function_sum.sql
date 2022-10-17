create table rubbe411(id int,name varchar(30),sal money,age int)
insert rubbe411 values(25,'neha',12000,26)
insert rubbe411 values(55,'reha',15000,28)
insert rubbe411 values(45,'jeha',17000,29)
insert rubbe411 values(65,'geha',19000,32)
insert rubbe411 values(35,'peha',19000,null)
insert rubbe411 values(15,'heha',19000,null)
select sum(id)from rubbe411 where name='jeha'
select sum(sal)from rubbe411
