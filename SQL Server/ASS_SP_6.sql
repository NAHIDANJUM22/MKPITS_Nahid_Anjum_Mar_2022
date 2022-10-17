create procedure e
as
begin
select * from emp40
where edesig='manager' and salary>20000
end

exec e