declare c5 cursor scroll for select name,price from customer32 where price>300
declare @name varchar(20),@price int
open c5
fetch last from c5 into @name,@price print 'the employee  '+' '+@name+' '+'price is:'+cast(@price as varchar)
fetch prior from c5 into @name,@price print 'the employee '+' '+@name+' '+'price  is:'+cast(@price as varchar)
fetch absolute 4 from c5 into @name,@price print 'the employee '+' '+@name+' '+'price  is:'+cast(@price as varchar)
fetch relative 2 from c5 into @name,@price print 'the employee '+' '+@name+' '+'price is:'+cast(@price as varchar)
fetch first from c5 into @name,@price print 'the employee '+' '+@name+' '+'price  is: '+cast(@price as varchar)
fetch next from c5 into @name,@price print 'the employee '+' '+@name+' '+'price  is: '+cast(@price as varchar)
close c5
deallocate c5
