create table nobel_win7(year varchar(30),subject varchar(30),winner varchar(30),country varchar(30),
category varchar(30))
insert into nobel_win7 values('1970','physics','Hannes alfven','sweden','scientist')
insert into nobel_win7 values('1970','physics','louis Neel','france','scientist')
insert into nobel_win7 values('1970','chemistry','Luis Federico Leloir','france','scientist')
insert into nobel_win7 values('1970','physiology','Ulf von Euler','sweden','scientist')
insert into nobel_win7 values('1970','physiology','Bernard Katz','germany','scientist')
insert into nobel_win7 values('1970','literature','Aleksandr Solzhenitsyn','russia','linguist')
insert into nobel_win7 values('1971','economics','Paul Samuelson','usa','economics')

--use of union
select * from nobel_win7 where (subject='physics'and year=1970) union (select * from nobel_win7
where (subject='economics'and year =1971))