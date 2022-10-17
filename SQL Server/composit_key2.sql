create table order4(orderid int,itemid int,productid int,quantity int,listprice int,discount int,
primary key(orderid,itemid))
insert into order4 values(1,11,101,2,20,5)
insert into order4 values(2,12,102,3,21,6)
insert into order4 values(3,13,103,4,22,4)
insert into order4 values(4,14,104,5,23,3)
insert into order4 values(5,15,105,6,24,2)
select * from order4