--making id as primary key so it won't be same for any other ids in database
create table student1(sid int primary key,sname varchar(20),coursename varchar(20),city varchar(15))
insert into student1 values(11,'raghu','dotnet','mumbai')
insert into student1 values(12,'raghi','dotnet','nagpur')
insert into student1 values(13,'raghuvashi','java','mumbai')
insert into student1 values(14,'raghu','python','nagpur')
select * from student1
--to group rows into groups we use the group by clause
select coursename,count(*)from student1 where city='nagpur'group by coursename
select city,count(*)from student1 where coursename='dotnet'group by city order by city
