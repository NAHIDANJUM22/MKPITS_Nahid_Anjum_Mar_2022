create table pro144(proid int,proname varchar(20),category_id int,model_year int,list_price int)
insert into pro144 values(25,'soap',4,2020,299.99)
insert into pro144 values(255,'soapi',40,2022,369.99)
insert into pro144 values(27,'soapu',44,2025,489.99)
insert into pro144 values(27,'soapu',44,2025,499.99)
insert into pro144 values(27,'soapu',44,2025,449.99)
select proid,proname,category_id,model_year,list_price from pro144 where list_price IN(299.99,369.99,489.99) order by list_price Desc
select * from pro144