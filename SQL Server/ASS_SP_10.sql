create procedure p7(@rno int,@sname varchar(30))
as
begin
select * from student19
end

exec p7 103,'warner'
