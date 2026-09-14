SELECT class
FROM courses
group by class
HAVING COUNT(student) >=5