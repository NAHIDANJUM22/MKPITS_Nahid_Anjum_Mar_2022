create table student123(id int,fname varchar(20),lname varchar(20),course varchar(25),city varchar(20),state varchar(20))
insert into student123 values(10,'amit','shah','dotnet','nagpur','mh')
insert into student123 values(11,'amita','shahi','dotnet','nagpur','mh')
insert into student123 values(12,'amite','shahu','java','mumbai','mh')
insert into student123 values(13,'amito','shahe','java','mumbai','mh')
insert into student123 values(14,'amitam','shaho','dotnet','nagpur','mh')
insert into student123 values(15,'amitabh','shaha','c','mumbai','mh')
insert into student123 values(16,'amitej','shahh','c','mumbai','mh')
select fname,lname from student123 order by fname
select fname,lname from student123 order by fname,lname
--using ascending ,descending 
select fname,lname from student123 order by fname desc;
select fname,lname from student123 order by fname asc;
select city ,fname from student123 order by city desc
--sort by two columns in differnt orders
select city ,fname from student123 order by city asc, fname desc

 

