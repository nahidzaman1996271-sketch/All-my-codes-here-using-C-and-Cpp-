# Write your MySQL query statement below
SELECT 
a.NAME AS Employee
FROM Employee AS a JOIN Employee AS b
On a.ManagerId = b.id
AND a.salary > b.salary