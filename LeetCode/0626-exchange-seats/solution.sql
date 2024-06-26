-- Write your PostgreSQL query statement below

SELECT (CASE
        WHEN id%2 != 0 AND counts != id THEN id + 1
        WHEN id%2 != 0 AND counts = id THEN id
        ELSE id - 1
       END) AS id,
       student
FROM
    seat,
    (SELECT COUNT(*) 
     AS counts
     FROM seat) AS seat_counts
ORDER BY id;
