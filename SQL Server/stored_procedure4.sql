create proc pp2(@en as varchar(20))
as
begin 

select * from emp
where ename=@en
end

exec pp2 'mouse'
exec pp2 'keyboard'

