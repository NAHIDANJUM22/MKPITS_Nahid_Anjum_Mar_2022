create table cust2(custid int,custname varchar(30),sal money check(sal>=10000))
--to use check constraints
insert into cust2 values(25,'seema',2000)
insert into cust2 values(25,'seema',20000)
insert into cust2 values(25,'seema',15000)
insert into cust2 values(25,'seema',25000)
select * from cust2
create table cust22(custid int,custname varchar(30),sal money check(sal>=10000),age int check(age>=20))
--to use check constraints in multiple columns
insert into cust22 values(25,'seema',20000,23)
insert into cust22 values(27,'reema',15000,56)
insert into cust22 values(29,'neema',25000,45)
insert into cust22 values(29,'neema',50000,55)
select * from cust22
