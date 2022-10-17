create table student22(sid int,sname varchar(30),sage int,courseid int)
create table course22(courseid int,cname varchar(30),coursefee decimal(6,2))
--left outer join
select * from student22 s left outer join course22 c on s.courseid=c.courseid

select * from student22
select * from course22