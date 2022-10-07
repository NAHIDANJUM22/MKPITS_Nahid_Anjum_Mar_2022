create table studnt11(id int,name varchar(20),rno int)
insert into studnt11(rno,name)values(11,'navita')
insert into studnt11(rno,name)values(12,'amit')
insert into studnt11(rno,name)values(13,'amita')
insert into studnt11(rno,name)values(14,'razi')
insert into studnt11(rno,name)values(15,'mamta')
--to find in particular coloum 
select * from studnt11 where rno in (11,13,15)
