create table student4(sid int,sname varchar(40),courseid int)
create table course4(cname varchar(40),courseid int)
--inner join
select * from student4 inner join course4 on student4.courseid=course4.courseid 

select * from student4
select * from course4