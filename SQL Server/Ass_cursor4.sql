declare c8 cursor scroll for select name,pname from customer32 where pname='mouse'
declare @name varchar(20),@pname varchar(30)
open c8
fetch  from c8 into @name,@pname print 'the employee '+' '+@name+' '+'price  is: '+cast(@pname as varchar)
close c8
deallocate c8