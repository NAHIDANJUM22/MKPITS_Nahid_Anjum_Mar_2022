create table emp(empid int identity,ename varchar(30),salary money)
insert into emp values('madhu',45000)
insert into emp values('raghu',35000)
insert into emp(ename,salary)values('aa',25000)

insert into emp(ename,salary)values('aa',55000)
select * from emp