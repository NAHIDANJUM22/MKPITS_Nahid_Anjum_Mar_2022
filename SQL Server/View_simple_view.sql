---create view
Create view v1 as select * from employee
select * from employee
select * from v1

insert v1 values(60,'raj',85000)
update v1 set salary=12000 where empid=40
delete v1 where empid=30