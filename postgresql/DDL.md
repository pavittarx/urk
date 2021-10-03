## DDL (Data-Definition)

### Database

```sql
  CREATE DATABASE <db-name>;
```

```sql
  DROP DATABASE <db-name>;
```

--- 
### TABLES

1. Create Table

```sql

   CREATE TABLE <db-name>(
     id          INT    PRIMARY KEY NOT NULL,
	 name        INT    NOT NULL,
	 age         INT    NOT NULL,
	 salary      MONEY,
	 created_at  DATE   DEFAULT CURRENT_DATE NOT NULL,
   );
```

2. Drop Table

```sql
  DROP TABLE <table-name>;
```

```sql
  DROP Table <table-name-1>, <table-name-2>, ... <table-name-n>;
```

----
### Constraints
Constraints are rules enforced on data columns of a table.

1. NOT NULL
2. UNIQUE
3. PRIMARY KEY
4. FOREIGN KEY
5. CHECK
6. EXCLUDE

----

```sql
  CREATE TABLE products(
    product_number INT     SERIAL PRIMARY KEY NOT NULL,
	name           TEXT    UNIQUE,
	price          NUMERIC CHECK(price>0)
  );
 ```

- SERIAL does auto-increment.

### Primary, Foreign & Composite Key

- `PRIMARY KEY` constraint is used to uniquely identify records in a database table. 
- `FOREIGN KEY` is used to form relationships with other tables. A foreign key in current table is used to refer primary key in another table. Hence, it is a unique value in records of another table and can be used to identify records in other tables. 

```sql
  CREATE TABLE employees(
    id     INT   PRIMARY KEY NOT NULL,
	name   TEXT  NOT NULL,
	age    INT   NOT NULL,
	salary MONEY  
  );
```

```sql
  CREATE TABLE departments(
    id          INT        PRIMARY KEY NOT NULL,
    department  CHAR(50)   NOT NULL,
    employee_id REFERENCES employees(id)
  );
```


- `COMPOSITE KEY` 
   A table can have only one primary key, which may consist of one or multiple fields. When multiple fields are used to form a primary key, the fields are known as composite key.
   
   ```sql 
    CREATE TABLE course_grades (  
      quarter_id INTEGER,  
      course_id  TEXT,  
      student_id INTEGER,  
      grade      INTEGER,  
      PRIMARY KEY(quarter_id, course_id, student_id)  
    );
   ```
  
-----
## ALTER TABLE

1. Add Column

```sql
  ALTER TABLE <table-name> ADD <column-name> <data-type>;
```

2. Drop Column

```sql
  ALTER TABLE <table-name> DROP COLUMN <column-name>;
```

3. Change Data Type 

```sql
  ALTER TABLE <table-name> ALTER COLUMN <column-name> TYPE <data-type>;
```

4. Add Constraints

```sql
  ALTER TABLE <table-name> MODIFY <column-name> <data-type> NOT NULL;
```

```sql
  ALTER TABLE <table-name>
  ADD CONSTRAINT <constraint-name> UNIQUE(column1, column2, ...);
```

```sql
  ALTER TABLE <table-name>
  ADD CONSTRAINT <constraint-name> CHECK(<condition>);
```

```sql
  ALTER TABLE <table-name>
  ADD CONSTRAINT <constraint-name> PRIMARY KEY(column1, column2, ...);
```

5. Drop Constraint

```sql
  ALTER TABLE <table-name>
  DROP CONSTRAINT <constraint-name>;
```

```sql
  ALTER TABLE <table-name>
  DROP PRIMARY KEY;
```