create trigger pt1
on product3
after insert,delete
as
begin
set nocount on;
insert into producta values(306,'cpu',4500,2,'6-2-2022')
end;

insert into product3 values(206,'cpu',4500,2)

select * from product3
select * from producta

