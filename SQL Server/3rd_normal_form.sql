create table teacher11(tid int ,tname varchar(20),state_id int)
create table state(state_id int,state_name varchar(20),country_id int)
create table country(country_id int ,country_name varchar(20))
insert into teacher11 values(1,'amit',11)
insert into teacher11 values(2,'raj',11)
insert into teacher11 values(1,'aprajita',12)
insert into state values(11,'maharashtra',101)
insert into state values(12,'mp',101)
insert into country values(101,'india')
insert into country values(102,'shrilanka')

select * from teacher11
select * from state
select * from country