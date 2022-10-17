create function f_svf2(@empname varchar(30),@empcity varchar(30))
returns varchar(60)
as 
begin
return(select @empname+''+@empcity)
end
select dbo.f_svf2(empname,empcity) as 'detail' from manage_emp
