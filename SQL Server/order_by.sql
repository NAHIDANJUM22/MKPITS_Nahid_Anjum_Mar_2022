--create a table customer
create table customer(id int,name varchar(20),state varchar(30))
--insert the data
insert into customer values(25,'ayushi','mp')
insert into customer values(35,'suyash','mh')
insert into customer values(45,'prachi','mh')
insert into customer values(55,'vinita','mp')
insert into customer values(65,'garima','mh')
--select the all data from table customer
select * from customer where state='mp'
--to sort the data we use order by clause in query with where clause
select * from customer where state='mh' order by name
select * from customer where state='mp' order by name
--to sort the data by name in query
select * from customer order by name
--to sort the data by state
select * from customer order by state
