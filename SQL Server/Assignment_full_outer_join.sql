create table customer6(custid int,custname varchar(30),telno varchar(30))
create table orders6(custid int,orderid int,orderdate date,proname varchar(40),quantity int,
rate int)
--full outer join

select * from customer6 c full outer join orders6 o on c.custid=o.custid

select * from customer6
select * from orders6