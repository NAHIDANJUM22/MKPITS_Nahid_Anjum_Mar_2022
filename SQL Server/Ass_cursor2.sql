declare c3 cursor scroll for select fname,cid from customer where cid>3
declare @fname varchar(20),@cid int
open c3
fetch last from c3 into @fname,@cid print 'the employee fname '+' '+@fname+' '+'lname is:'+cast(@cid as varchar)
fetch prior from c3 into @fname,@cid print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@cid as varchar)
fetch absolute 4 from c3 into @fname,@cid print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@cid as varchar)
fetch relative 2 from c3 into @fname,@cid print 'the employee '+' '+@fname+' '+'lname  is:'+cast(@cid as varchar)
fetch first from c3 into @fname,@cid print 'the employee '+' '+@fname+' '+'lname  is: '+cast(@cid as varchar)
fetch next from c3 into @fname,@cid print 'the employee '+' '+@fname+' '+'lname  is: '+cast(@cid as varchar)
close c3
deallocate c3