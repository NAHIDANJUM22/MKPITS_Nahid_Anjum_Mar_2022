create procedure e2
as
begin
select * from emp40
where salary>20000 and salary<50000
end

exec e2