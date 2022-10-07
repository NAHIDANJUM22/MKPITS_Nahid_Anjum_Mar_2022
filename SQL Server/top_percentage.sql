create table product12(proid int,proname varchar(20),price int,quantity int)
insert into product12 values(5,'mouse',800,5)
insert into product12 values(15,'candle',500,15)
insert into product12 values(25,'light',1000,3)
insert into product12 values(35,'fan',1500,2)
insert into product12 values(45,'ac',35000,1)
--to use top in percentage
select top 50 percent proname,price from product12 order by price 
select top 50 percent proname,price from product12 order by price desc