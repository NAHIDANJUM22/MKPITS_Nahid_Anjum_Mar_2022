create table emp_hyd1(empid int,empname varchar(20),salary money)
create table emp_blr1(empid int,ename varchar(20),salary money)
--use of union operator
select empname,salary from emp_hyd1
union
select ename,salary from emp_blr1