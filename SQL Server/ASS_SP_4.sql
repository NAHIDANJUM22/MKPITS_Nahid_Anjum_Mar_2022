create procedure s4
as
begin
select * from customer c inner join order1 o on c.cid=orderid 
end
exec s4