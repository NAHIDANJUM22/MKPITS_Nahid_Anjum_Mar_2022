create table cust(id int,name varchar(20),state varchar(20))
insert into cust values(1,'suyash','mp')
insert into cust values(2,'suyashi','mh')
insert into cust values(3,'suyashu','mp')
insert into cust values(4,'suyasha','mh')
insert into cust values(5,'suyasher','mh')
insert into cust values(6,'suyasht','mp')
insert into cust values(7,'suyasho','mh')

--to show only specific column we use where clause
select * from cust  where name='suyash' 
select * from cust  where state='mp' 

--applying condition in query
select * from cust where id=1
select * from cust where id>1
select * from cust where id>1 and id<10
select * from cust where id>=1 and id<=10

