create table custom(cid int,cname char(20),caddr varchar(30),cage tinyint )
select * from custom
--to change datatype and datatype size of a column
alter table custom alter column cname varchar(40)
alter table custom alter column cage int
select * from custom