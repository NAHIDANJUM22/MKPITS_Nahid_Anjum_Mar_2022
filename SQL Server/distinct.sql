create table customer111(name varchar(20),city varchar(20))
insert into customer111 values('advait','mumbai')
insert into customer111 values('advaiti','mumbra')
insert into customer111 values('advaito','mumbai')
insert into customer111 values('advaite','lucknow')
insert into customer111 values('advaite','calcutta')
insert into customer111 values('advaitu','delhi')
insert into customer111 values('advaitem','delhi')
insert into customer111 values('advaitew','delhi')

--to select distinct(one out of same)we use distinct clause

select distinct city from customer111 order by city

--to select distinct name 
select distinct name from customer111 order by name 