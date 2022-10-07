create table order22(orderid int primary key,name varchar(30),amount money)--parent table
insert into order22 values(40,'suraj',15000)
insert into order22 values(50,'uraj',18000)
insert into order22 values(60,'raj',21000)

create table orderdetails10(city varchar(30),state varchar(30),
orderid int foreign key references order22(orderid)
on update cascade on delete cascade)---child table

insert into orderdetails10 values('patna','bihar',40)
insert into orderdetails10 values('kota','rajasthan',50)
insert into orderdetails10 values('surat','gujrat',60)

--update ur parent table data in reference column of parent with cascade rule
update order22 set orderid=5 where orderid=40

--delete ur parent table data in reference column of parent with cascade rule
delete from order22 where orderid=60


select * from order22
select * from orderdetails10