create table stud(id int, name varchar(20), state varchar(30),city varchar(20))
insert into stud values(11,'kavita','mh','mumbai')
insert into stud values(11,'kavi','mp','balaghat')
insert into stud values(11,'kavit','mh','mumbra')
insert into stud values(11,'kavite','mp','sagar')
insert into stud values(11,'kavito','mp','sagar')
insert into stud values(11,'kavitam','mp','gwalior')
--notice that where clause filters row while the having class filters groups
select city ,count(*)from stud where state='mp' group by city having count(*)>1 order by city


