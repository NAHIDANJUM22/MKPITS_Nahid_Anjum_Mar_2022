create table emp8(empno int,ename varchar(20),job varchar(30),salary money,deptno int)
insert into emp8 values(7782,'clark','manager',87000,10)
insert into emp8 values(7783,'scott','analyst',85000,20)
insert into emp8 values(7784,'king','president',83000,10)
insert into emp8 values(7785,'turner','salesman',82000,30)
insert into emp8 values(7786,'adam','clerk',81000,10)
insert into emp8 values(7787,'miller','manager',89000,20)
insert into emp8 values(7788,'warner','salesman',88000,40)
insert into emp8 values(7789,'harry','clerk',84000,10)
insert into emp8 values(7790,'john','manager',86000,20)
insert into emp8 values(7791,'joy','salesman',90000,30)
--using group by and having clause
select job,count(*)no_of_employee from emp8 group by job having count(*)>1
select job,count(*) from emp8 group by job having count(*)<2
select job,sum(salary)sum_of_salary from emp8 group by job having sum(salary)>100000
select job,max(salary)maxsal,min(salary)minsal,avg(salary)avgsal from emp8 group by job having max(salary)<100000
--using group by and having clause
select job,count(*)no_of_emp,deptno from emp8 group by job,deptno having deptno>20

select * from emp8