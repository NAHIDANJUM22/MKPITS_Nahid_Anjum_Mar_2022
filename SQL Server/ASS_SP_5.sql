create procedure sale3
as
begin
select * from sales7
where salesamount>1000 and salesamount<10000
end;

exec sale3