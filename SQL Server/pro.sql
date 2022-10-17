create table product3(proid int primary key,proname varchar(30),price int,quantity int)
insert product3 values(201,'mouse',2500,2)
insert product3 values(202,'key',1500,3)
insert product3 values(203,'charger',500,4)
insert product3 values(204,'datacable',3500,5)
insert product3 values(205,'keyboard',4500,1)
select * from product3

create table producta(change_id INT IDENTITY PRIMARY KEY,
proid int,proname varchar(20),price int,quantity int,
updated_at datetime)
insert producta values(301,'mouse',2500,2,'2-1-2020')
insert producta values(302,'key',1500,3,'2-1-2020')
insert producta values(303,'charger',500,4,'2-1-2020')
insert producta values(304,'datacable',3500,5,'2-1-2020')
insert producta values(305,'keyboard',4500,1,'2-1-2020')
select * from producta




