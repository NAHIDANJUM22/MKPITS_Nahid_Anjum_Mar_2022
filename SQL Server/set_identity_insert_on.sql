create table employ(empid int identity,ename varchar(30),salary money)
select * from employ

--set identity insert on
set identity_insert employ on
insert into employ(empid,ename,salary)values(5,'ee',35000)