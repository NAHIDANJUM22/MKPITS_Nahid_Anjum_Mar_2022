--create table valued function
create function f_tvf(@deptname varchar(50))
returns table 
as
return(select * from new_emp where deptname=@deptname)

--syntax to call table valued function
select * from f_tvf('fin')