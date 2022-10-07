create table order1(orderid int primary key,name varchar(30),amount money)--parent tabel
insert into order1 values(10,'ramesh',2000),(20,'suresh',4000),(30,'mahesh',5000)

create table orderdetails4(city varchar(30),state varchar(30),
orderid int foreign key references order1(orderid))--child class

insert into orderdetails4 values('mumbai','mh',10)
insert into orderdetails4 values('ahemdabad','gujrat',20)
insert into orderdetails4 values('lucknow','up',30)

--update ur parent table data in reference column of parent without cascade rule
update order1 set orderid=5 where orderid=10

--delete ur parent table data in reference column of parent without cascade rule
delete from order1 where orderid=30

select * from order1
select * from orderdetails4

