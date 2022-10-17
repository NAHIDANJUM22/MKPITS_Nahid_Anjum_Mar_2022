create table employe(empid int identity,ename varchar(30),salary money)
select * from employe

--set identity insert off
set identity_insert employe off
insert into employe(empid,ename,salary)values(6,'ff',45000)