create table customer2(custid int,custname varchar(30),state varchar(30),city varchar(30))
--self join
select c1.custid,c1.custname,c1.state,c1.city from customer2 c1,customer2 c2 
where c1.city=c2.city and c2.custid=60