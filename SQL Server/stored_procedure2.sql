create procedure prod211(@proid int,@proname varchar(30),@salary money)
as
begin 
insert into prod values(@proid,@proname,@salary)
select 
proname,
quantity
from prod
order by proname
end

exec prod211 105,'warner',85000
exec prod211 106,'scott',95000