create table appy(rn int,name varchar(20))
insert into appy values(4,'amit')
insert into appy values(2,'sumitu')
insert into appy values(1,'fimite')
insert into appy values(3,'ramita')

--first and last values are hide inbetween character are shown 
select rn,name from appy where name like '%mit%' order by rn

--finding rows whose values containing string
select * from appy where name like 'a%t'
--first  character is visible
select * from appy where name like 'a%'
--last  character is visible
select * from appy where name like '%u'