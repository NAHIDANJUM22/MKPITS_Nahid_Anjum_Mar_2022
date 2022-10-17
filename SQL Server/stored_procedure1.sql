create procedure prod111(@proid int,@proname varchar(30),@salary money)
as 
begin
insert into prod values(@proid,@proname,@salary)
select * from prod
end

exec prod111 105,'warner',85000