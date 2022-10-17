create table order3(ord_no int,purch_amt decimal(6,2),order_date date,cust_id int,salesman_id int)
select ord_no,order_date,purch_amt from order3 where salesman_id=5001