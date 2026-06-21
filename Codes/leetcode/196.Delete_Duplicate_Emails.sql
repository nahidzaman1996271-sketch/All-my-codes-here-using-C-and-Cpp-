# Write your MySQL query statement below
-- delete
-- duplicate email entries
    -- for every email, identity the smallest ID
    -- delete all IDs that aren't part of that subset of IDs

with my_cte as (
    SELECT Email, min(ID) as id_to_keep
    FROM
    Person
    GROUP BY email
)
    DELETE FROM Person
    WHERE ID NOT IN (SELECT id_to_keep from my_cte)
    