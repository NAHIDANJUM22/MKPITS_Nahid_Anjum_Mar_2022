--without cursor variable
declare c1 cursor scroll for select * from emp
open c1
fetch last from c1
fetch prior from c1
fetch absolute 7 from c1
fetch relative -2 from c1
fetch first from c1
fetch next from c1
close c1
deallocate c1