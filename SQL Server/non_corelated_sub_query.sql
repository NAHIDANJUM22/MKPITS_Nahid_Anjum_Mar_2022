create table emp41(id int,name varchar(20),salary money)
insert into emp41 values(10,'scott',55000)
insert into emp41 values(20,'miller',45000)
insert into emp41 values(30,'warner',65000)
insert into emp41 values(40,'harry',35000)
insert into emp41 values(50,'joy',75000)
--non-corelated sub query--3rd highest salary
select * from emp41 where salary=(select max(salary) from emp41 where salary<
(select max(salary) from emp41 where salary<(select max(salary)from emp41)))