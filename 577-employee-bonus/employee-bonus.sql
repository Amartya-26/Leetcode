# Write your MySQL query statement below
select e1.name as name , e2.bonus as bonus 
from employee e1
left join bonus e2
on e1.empId = e2.empId
where e2.bonus is null or e2.bonus<1000;