create table nobel_win6(year varchar(30),subject varchar(30),winner varchar(30),country varchar(30),
category varchar(30))
insert into nobel_win6 values('1970','physics','Hannes alfven','sweden','scientist')
insert into nobel_win6 values('1970','physics','louis Neel','france','scientist')
insert into nobel_win6 values('1970','chemistry','Luis Federico Leloir','france','scientist')
insert into nobel_win6 values('1970','physiology','Ulf von Euler','sweden','scientist')
insert into nobel_win6 values('1970','physiology','Bernard Katz','germany','scientist')
insert into nobel_win6 values('1970','literature','Aleksandr Solzhenitsyn','russia','linguist')
insert into nobel_win6 values('1970','economics','Paul Samuelson','usa','economics')

select * from nobel_win6 where winner like 'louis %'