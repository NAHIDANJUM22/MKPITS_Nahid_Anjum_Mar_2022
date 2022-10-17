--stored proc with 2 parameters
create proc prod6(@pname as varchar(20),@p as decimal)
as
begin
select * from product
where pro_name = @pname
and listprice >= @p
order by pro_name
end;

exec prod6 'mouse',120
exec prod6 'keyboard',230
