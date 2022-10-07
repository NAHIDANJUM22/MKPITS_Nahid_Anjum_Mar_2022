create table store(store_id int primary key,store_name varchar(30) not null,
phone varchar(20) not null,email varchar(40) not null,street varchar(30),
city varchar(30),state varchar(30),zipcode varchar(8))

insert into store values(10,'hema','1236549875','hema@gmail.com','bandra','mumbai','mh','451263')

insert into store values(20,'rekha','1236549875','rekha@gmail.com','bandra','mumbai','mh','451264')

insert into store values(30,'jaya','1236549875','jaya@gmail.com','bandra','mumbai','mh','451265')

insert into store values(40,'sushma','1236549875','sushma@gmail.com','bandra','mumbai','mh','451266')

insert into store values(50,'daya','1236549875','daya@gmail.com','bandra','mumbai','mh','451267')

create table staff(staff_id int primary key,fname varchar(30) not null,lname varchar(30) not null,
email varchar(30),phone varchar(20),active tinyint not null,manager_id int,
store_id int foreign key references store(store_id))

insert into staff values(1,'mona','sen','mona@gmail.com','7894563215',50,100,10)
insert into staff values(2,'sona','sen','sona@gmail.com','7894563215',51,101,20)
insert into staff values(3,'lona','sen','lona@gmail.com','7894563215',52,102,30)
insert into staff values(4,'jona','sen','jona@gmail.com','7894563215',53,103,40)
insert into staff values(5,'dona','sen','dona@gmail.com','7894563215',54,104,50)

create table customer(cid int primary key,fname varchar(30),lname varchar(30),phone varchar(20),
email varchar(40) not null,street varchar(20),city varchar(20),state varchar(20),
zip_code varchar(8))

insert into customer values(9,'riya','jha','4561237896','riya@gmail.com','bandra','mumbai','mh','741258')
insert into customer values(8,'jiya','jha','4561237897','jiya@gmail.com','bandra','mumbai','mh','741258')
insert into customer values(7,'diya','jha','4561237898','diya@gmail.com','bandra','mumbai','mh','741258')
insert into customer values(6,'piya','jha','4561237899','piya@gmail.com','bandra','mumbai','mh','741258')
insert into customer values(5,'niya','jha','4561237895','niya@gmail.com','bandra','mumbai','mh','741258')

create table order2(orderid int primary key,order_status varchar(20),order_date date,
req_date date,ship_date date,cid int foreign key references customer(cid),
store_id int foreign key references store(store_id),
staff_id int foreign key references staff(staff_id))

insert into order2 values(60,'shipped','5-09-2022','6-09-2022','6-09-2022',9,10,1)
insert into order2 values(61,'shipped','5-09-2022','6-09-2022','6-09-2022',8,20,2)
insert into order2 values(62,'shipped','5-09-2022','6-09-2022','6-09-2022',7,30,3)
insert into order2 values(63,'shipped','5-09-2022','6-09-2022','6-09-2022',6,40,4)
insert into order2 values(64,'shipped','5-09-2022','6-09-2022','6-09-2022',5,50,5)

create table categories(categ_id int primary key,categ_name varchar(30))

insert into categories values(80,'raj')

insert into categories values(81,'maj')

insert into categories values(82,'taj')

insert into categories values(83,'naj')

insert into categories values(84,'saj')

create table brand1(bid int primary key,bname varchar(20))

insert into brand1 values(99,'mahindra1')
insert into brand1 values(98,'mahindra2')
insert into brand1 values(97,'mahindra3')
insert into brand1 values(96,'mahindra4')
insert into brand1 values(95,'mahindra5')

create table product11(pro_id int primary key,pro_name varchar(30),modelyr int,listprice int,
bid int foreign key references brand1(bid),
categ_id int foreign key references categories(categ_id))

insert into product11 values(15,'avenger','2020',300000,99,80)
insert into product11 values(16,'avenger','2020',300000,98,81)
insert into product11 values(17,'avenger','2020',300000,97,82)
insert into product11 values(18,'avenger','2020',300000,96,83)
insert into product11 values(19,'avenger','2020',300000,95,84)

create table stocks(ss_id int,prop_id int,quantity int,primary key(store_id,pro_id),
store_id int foreign key references store(store_id)on delete cascade on update cascade,
pro_id int foreign key references product11(pro_id)on delete cascade on update cascade)

insert into stocks values(61,41,2,10,15)
insert into stocks values(62,42,2,20,16)
insert into stocks values(63,43,2,30,17)
insert into stocks values(64,44,2,40,18)
insert into stocks values(65,45,2,50,19)

create table order_items(order_id int,item_id int,quantity int ,list_price int,discount int
primary key(pro_id,orderid),
pro_id int foreign key references product11(pro_id)on delete cascade on update cascade,
orderid int foreign key references order2(orderid)on delete cascade on update cascade)

insert into order_items values(32,74,3,25000,2000,15,60)
insert into order_items values(33,75,3,25000,2000,16,61)

insert into order_items values(34,76,3,25000,2000,17,62)

insert into order_items values(35,77,3,25000,2000,18,63)

insert into order_items values(36,78,3,25000,2000,19,64)


select * from store
select * from staff
select * from customer
select * from order2
select * from categories
select * from brand1
select * from product11
select * from stocks
select * from order_items

