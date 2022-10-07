create table customer811(custid int UNIQUE,name varchar(30)UNIQUE)
--to use unique constraints
insert into customer811 values(102,'amit')
insert into customer811 values(103,'sumit')
insert into customer811 values(104,'mita')
insert into customer811 values(null,null)
select * from customer811