create table test11(sno int,name varchar(30))
create table test22(sno int,name varchar(30))
--non-equi join
select * from test11,test22 where test11.sno>test22.sno

select * from test11
select * from test22