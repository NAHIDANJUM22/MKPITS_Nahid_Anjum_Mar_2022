create proc p3(@id int)
as 
begin

select * from customer5
where custid>@id
order by custid
end

select * from customer5

exec p3 550
exec p3 750