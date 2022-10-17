declare c9 cursor scroll for select fname,lname from customer
declare @fname varchar(20),@lname varchar(20)
open c9
fetch last from c9 into @fname,@lname print 'the employee fname '+' '+@fname+' '+'lname is:'+cast(@lname as varchar)
fetch prior from c9 into @fname,@lname print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@lname as varchar)
fetch absolute 4 from c9 into @fname,@lname print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@lname as varchar)
fetch relative 2 from c9 into @fname,@lname print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@lname as varchar)
fetch first from c9 into @fname,@lname print 'the employee '+' '+@fname+' '+'lname  is: '+cast(@lname as varchar)
fetch next from c9 into @fname,@lname print 'the employee '+' '+@fname+' '+'lname  is: '+cast(@lname as varchar)
close c9
deallocate c9