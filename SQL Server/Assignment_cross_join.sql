create table customer7(custid int,custname varchar(30),telno varchar(30))
create table orders7(custid int,orderid int,orderdate date,proname varchar(40),quantity int,
rate int)
--cross join

select * from customer7 cross join orders7

select * from customer7
select * from orders7