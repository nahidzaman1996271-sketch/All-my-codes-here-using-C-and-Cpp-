select customer_number
from Orders
Group by customer_number
ORDER BY COUNT(DISTINCT order_number) DESC
LIMIT 1