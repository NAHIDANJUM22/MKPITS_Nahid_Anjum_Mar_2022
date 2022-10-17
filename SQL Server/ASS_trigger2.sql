create trigger t2
on employee8
after insert,delete
as
begin
set nocount on;
insert into employee88 values(50,'navita',45,'pune')
end
select * from employee88

insert into employee8 values(10,'babita',25)
select * from employee8

select * from employee88