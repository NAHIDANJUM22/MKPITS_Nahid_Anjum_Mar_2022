create table emp1(empid int identity(100,5),ename varchar(30),salary money)
insert into emp1 values('ram',55000)
insert into emp1 values('shyam',45000)
insert into emp1 values('dhayam',35000)
insert into emp1(ename,salary)values('hema',15000)
insert into emp1(ename,salary)values('rekha',65000)
select * from emp1