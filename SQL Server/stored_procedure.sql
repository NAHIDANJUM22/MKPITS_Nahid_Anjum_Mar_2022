--stored procedure
create procedure p1(@eid int,@ename varchar(30),@salary money)
as
begin
insert into abcd values(@eid,@ename,@salary)
end

--syntax to call a stored procedure
execute p1 101,'miller',45000
select * from abcd

