create table employee9(id int,name varchar(30),age int,salary money)
insert into employee9 values(10,'scott',30,48000)
insert into employee9 values(20,'miller',20,58000)
insert into employee9 values(30,'warner',25,68000)
insert into employee9 values(40,'harry',35,78000)
insert into employee9 values(50,'john',40,38000)
---sub query
select max(salary) from employee9
select * from employee9 where salary=(select max(salary)from employee9)