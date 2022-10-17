create table customer5(custid int,custname varchar(30),telno varchar(30))
create table orders5(custid int,orderid int,orderdate date,proname varchar(40),quantity int,
rate int)
--right outer join

select * from customer5 c right outer join orders5 o on c.custid=o.custid

select * from customer5
select * from orders5