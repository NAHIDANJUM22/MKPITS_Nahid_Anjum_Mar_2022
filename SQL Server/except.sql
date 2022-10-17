create table emp_hyd22(empid int,empname varchar(30),salary money)
create table emp_blr22(empid int,empname varchar(30),salary money)

--use of except

select * from emp_hyd22 except select * from emp_blr22