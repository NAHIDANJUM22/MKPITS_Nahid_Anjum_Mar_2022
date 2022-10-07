create table customer11(cid int,cname varchar(30),age tinyint,caddr varchar(30))
insert into customer11 values(6,'amitesh',25,'bhilai')
select * from customer11
--to delete the unwanted column name
alter table customer11 drop column caddr