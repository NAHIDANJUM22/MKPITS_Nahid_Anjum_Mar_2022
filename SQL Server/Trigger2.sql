select * from student

create table student55(id int,name varchar(20),
marks int,studimage varchar(20))

create trigger st1
on student
after insert,delete
as
begin
set nocount on;
insert into student55 values(10,'raj',85,'m.jpg')
end;
select * from student

insert into student values(5,'yash','c++','d',4569871235)
select * from student
select * from student55