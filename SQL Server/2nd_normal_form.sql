create table teacher_detail(teacher_id int primary key,teacher_age int)
create table teacher_subject(subject varchar(20),
teacher_id int foreign key references teacher_detail(teacher_id))
insert into teacher_detail values(25,30)
insert into teacher_detail values(47,35)
insert into teacher_detail values(83,38)

insert into teacher_subject values('Chemistry',25)
insert into teacher_subject values('Biology',25)
insert into teacher_subject values('English',47)
insert into teacher_subject values('Math',83)
insert into teacher_subject values('Computer',83)

select * from teacher_detail
select * from teacher_subject