create procedure s3
as
begin 
select * from student19
where rno>3 and rno<20
end;

exec s3