create table test1(sno int,name varchar(30))
create table test2(sno int,name varchar(30))
--equi join
select * from test1,test2 where test1.sno=test2.sno

select * from test1
select * from test2