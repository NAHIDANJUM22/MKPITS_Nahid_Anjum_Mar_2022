create trigger t1
on customer71
after insert,delete
as
begin
set nocount on;
insert into customer81 values(120,'suman','nagpur',90)
end
select * from customer81

insert into customer71 values(110,'milind','delhi')
select * from customer71

select * from customer81

