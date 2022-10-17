--with cursor variables
declare c1 cursor scroll for select empid,ename from emp
declare @empid int,@ename varchar(20)
open c1
fetch last from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is:'+cast(@empid as varchar)
fetch prior from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is:'+cast(@empid as varchar)
fetch absolute 7 from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is:'+cast(@empid as varchar)
fetch relative 2 from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is:'+cast(@empid as varchar)
fetch first from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is: '+cast(@empid as varchar)
fetch next from c1 into @empid,@ename print 'the employee '+' '+@ename+' '+'id is: '+cast(@empid as varchar)
close c1
deallocate c1