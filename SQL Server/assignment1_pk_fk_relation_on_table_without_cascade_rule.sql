create table order16(orderid int primary key,name varchar(30),amount money)--parent tabel
insert into order16 values(10,'ramesh',2000),(20,'suresh',4000),(30,'mahesh',5000)

create table orderdetails5(city varchar(30),state varchar(30),
orderid int foreign key references order16(orderid))--child class

insert into orderdetails5 values('mumbai','mh',10)
insert into orderdetails5 values('ahemdabad','gujrat',20)
insert into orderdetails5 values('lucknow','up',30)

--update ur parent table data in reference column of parent without cascade rule
update order16 set orderid=5 where orderid=10

--delete ur parent table data in reference column of parent without cascade rule
delete from order16 where orderid=30

select * from order16
select * from orderdetails5

