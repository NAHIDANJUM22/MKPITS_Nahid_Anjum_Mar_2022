create table emp_hyd(empid int,empname varchar(20),salary money)
create table emp_blr(empid int,ename varchar(20),salary money)
--use of union operator
select * from emp_hyd
union
select * from emp_blr