### Data Types 

1. Numeric
   - Integers
     - Small Integers (small int)
     - Integer (int)
     - Big Integer (bigint)
   - Floating
     - Float (float)
     - Numeric (numeric)
     - Real/float8 (real)
    
2. Monetary (money)
4. Character
    - char, char(n)
    - text
    - varchar(n)
      - It can only store/hold number of characters written next to it.  

6. Binary (bytea)
    - store binary string in postgresql.
8. Date Time
   - Date (date)
   - Time (time)
   - Timestamp (timestamp) - stores date & time w/o timestamp
   - Timestampz (timestampz) - stores date & time w/ timestamp.
   - Interval
   
10. Boolean (boolean/ bool (alias))
11. ENUMS 
    
	```sql 
	  CREATE TYPE year AS ENUM ("Jan", "Feb", "Mar", "Apr", "May", "Jun", "Jul", "Aug", "Sep", "Oct", "Nov", "Dec");
	```
    
13. INTERVAL
14. UUID (uuid)
15. JSON (json)