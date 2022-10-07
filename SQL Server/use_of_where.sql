create table students1(id int primary key,rno int,name varchar(20),city varchar(20))
insert into students1 values(1,2,'sunita','nagpur') 
insert into students1 values(2,3,'sunite','mumbai')
insert into students1 values(3,1,'sunito','mumbra')
insert into students1 values(4,5,'suniti','pune')
insert into students1 values(5,4,'sunitu','lonavla')
select * from students1 where rno=1
select * from students1 where rno>3
select * from students1 where city='mumbai'

