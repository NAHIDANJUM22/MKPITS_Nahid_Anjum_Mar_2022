create table orders1(orderid int not null,custname varchar(20),proname varchar(20),quantity int,orderdate date)
insert into orders1 values(1,'ramesh','mouse',5,'2022-9-7')
insert into orders1 values(2,'suresh','momo',8,'2022-4-2')
insert into orders1 values(3,'mahesh','mimi',10,'2022-3-9')
insert into orders1 values(4,'jamesh','mouj',12,'2022-2-6')
insert into orders1 values(5,'hamesh','mice',15,'2022-5-1')
select * from orders1
--how to write date
select * from orders1 where orderdate between '2022-9-7' and '2022-2-6'