create table tray(Product_id INT PRIMARY KEY,Product_name VARCHAR(40),Price INT,Quantity INT)
INSERT INTO tray VALUES(111, 'Mobile', 10000, 10),(112, 'Laptop', 20000, 15),  
(113, 'Mouse', 300, 20),(114, 'Hard Disk', 4000, 25),(115, 'Speaker', 3000, 20); 
select * from tray
---update transaction
BEGIN TRANSACTION 
INSERT INTO tray VALUES(116, 'Headphone', 2000, 30)  
update tray set price=450 where product_id=113
COMMIT TRANSACTION  

---delete transaction

-- Start a new transaction    
BEGIN TRANSACTION  
update tray set price=5000 where product_id=114
delete from tray where product_id=116

---rollback transaction

-- Start a new transaction    
BEGIN TRANSACTION  
-- SQL Statements  
UPDATE tray SET Price = 5000 WHERE Product_id = 114  
DELETE FROM tray WHERE Product_id = 116  
--Undo Changes 
ROLLBACK TRANSACTION  
	





