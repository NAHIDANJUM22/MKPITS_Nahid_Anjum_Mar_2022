create table customer4(custid int,custname varchar(30),telno varchar(30))
create table orders4(custid int,orderid int,orderdate date,proname varchar(40),quantity int,
rate int)
--left outer join

select * from customer4 c left outer join orders4 o on c.custid=o.custid

select * from customer4
select * from orders4