create table fees(feesid int primary key,name varchar(30),addr varchar(30))--parent table
insert into fees values(10,'sujata','nagpur'),(20,'rohit','mumbai'),(30,'mayank','pune')

create table studen(rno int,amount money,admission date,
feesid int foreign key references fees(feesid))--child table

insert into studen values(70,50000,'2022-05-03',10)
insert into studen values(80,40000,'2022-02-07',20)
insert into studen values(90,60000,'2022-07-09',30)

select * from fees
select * from studen