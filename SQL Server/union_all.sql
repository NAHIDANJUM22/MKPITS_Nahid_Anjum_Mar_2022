create table emp_hyd21(empid int,empname varchar(30),salary money)
create table emp_blr21(empid int,empname varchar(30),salary money)

--use of union all

select * from emp_hyd21
union all
select * from emp_blr21