create table employee(empid int,empname varchar(30),salary int)
--self join

select e1.empid,e1.empname,e1.salary from employee e1,employee e2 where e1.salary=e2.salary
and e2.empname='kishore'


