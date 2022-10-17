create table student10(fname varchar(30),lname varchar(30),city varchar(30)) 
--self join
select s1.fname,s1.lname,s1.city from student10 s1,student10 s2 where s1.city=s2.city 
and s2.fname='leena'