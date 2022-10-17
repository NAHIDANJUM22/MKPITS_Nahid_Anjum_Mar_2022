create table student9(sid int not null,sname varchar(20) not null,sage int default 20,
scity varchar(20) default'mumbai')
insert into student9 (sid,sname) values(10,'amit')
insert into student9 (sid,sname) values(20,'sumit')
insert into student9 (sid,sname) values(30,'namit')

select * from student9