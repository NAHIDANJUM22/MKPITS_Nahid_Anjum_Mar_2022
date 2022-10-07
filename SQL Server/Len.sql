create table customer12(fname varchar(20),lname varchar(20),city varchar(20))
insert into customer12 values('raaj','singh','mumbai')
insert into customer12 values('raahth','singh','mumbai')
insert into customer12 values('raajujig','singhi','mumbra')
insert into customer12 values('raajillkjk','singhu','mumbra')
insert into customer12 values('raajeg','singhe','mumbai')
insert into customer12 values('raajofgfgbmggh','singha','mumbai')
--to find the the length we use LEN in the query
select fname from customer12 order by LEN(fname)desc
select fname from customer12 order by LEN(fname)asc