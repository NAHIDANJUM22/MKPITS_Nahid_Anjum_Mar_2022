create table student2(sno int, name varchar(30),sage tinyint)
--to change column name
sp_rename 'student2.sage','age'