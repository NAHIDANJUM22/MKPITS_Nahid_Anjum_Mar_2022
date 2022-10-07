create table product(proid int,proname varchar(20),price int,quantity int)
insert into product values(1,'key',50,5)
insert into product values(11,'datacable',100,5)
insert into product values(21,'mobile',500,5)
insert into product values(31,'keyboard',10000,5)
insert into product values(41,'mouse',15000,5)
insert into product values(51,'chain',5700,5)
--to find top2 values from the data 
select top 2 proname,price from product order by price desc
select top 2 proname,proid from product order by proid desc
--to find only 1 top value from the data
select top 1 proname,price from product order by price desc
