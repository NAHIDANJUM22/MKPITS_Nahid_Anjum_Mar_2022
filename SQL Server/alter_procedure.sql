--using alter procedure to modify an existing procedure
alter procedure pd1
as
begin 
select * from prod
select count(1)as [total count] from prod
end

exec pd1