create table pro(proid int,proname varchar(20),category_id int,model_year int,list_price int)
insert into pro values(11,'soap',51,1207,50)
insert into pro values(11,'shampoo',52,1208,500)
insert into pro values(11,'brush',53,1209,100)
insert into pro values(11,'paste',54,1210,200)
insert into pro values(11,'facewash',55,1211,400)
select proid,proname,category_id,model_year,list_price from pro where category_id=53 order by list_price desc
--to join two condition with and
select proid,proname,category_id,model_year,list_price from pro where category_id=55 and model_year=1211 order by list_price desc
--Finding rows that meet any of two conditions
select proid,proname,category_id,model_year,list_price from pro where list_price > 300 and model_year=1211 order by list_price desc
--Finding rows with the value between two values
select proid,proname,category_id,model_year,list_price from pro where list_price between 300 and 500 order by list_price desc