create table customer3(custid int,custname varchar(30),telno varchar(30))
create table orders3(orderid int,orderdate date,custid int,productname varchar(30),quantity int,
rate int)
--inner join
select * from customer3 inner join orders3 on customer3.custid=orders3.custid


select * from customer3
select * from orders3