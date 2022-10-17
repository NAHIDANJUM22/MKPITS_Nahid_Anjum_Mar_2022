--create view cv2 as select * from orders4 inner join orders5 on orders4.orderid=orders5.orderid
create view cv1 as 
select * from orders4 
union
select * from orders5 
select * from cv1
