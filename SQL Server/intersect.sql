create table emp_hyd3(empid int,empname varchar(30),salary money)
create table emp_blr3(empid int,empname varchar(30),salary money)

--use of intersect

select * from emp_hyd3
intersect
select * from emp_blr3