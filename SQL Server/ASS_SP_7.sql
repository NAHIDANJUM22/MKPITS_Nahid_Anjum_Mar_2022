create procedure s5
as
begin
select * from student s inner join marks m on s.rollno=m.total
end

exec s5