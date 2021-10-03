# Variables in PostgresQL

- A postgres variable is a convient/abstract name given to a memory location.
- These are used to store data which can change.
- They are initialized with `NULL` value, if a default value is not defined.
- Variable can be modified using a function or a code block. It can also be used to store temporary data during function execution.


```sql
  DECLARE <variable-name> [CONSTANT] <data-type> [NOT NULL] [{DEFAULT | := } INITIAL VALUE ]
```

- [] indicates optional parameters.

```sql
  DECLARE name:="Harry";
```

```sql
  DECLARE name VARCHAR DEFAULT "JOHN TITOR";
```

```sql
  DECLARE name VARCHAR;
  
  name:="Tom";
```


# Functions (Stored Procedures)

- It is set in SQL or PL/SQL statements. 
- It has a unique name.
- A function can be created in C, Python, SQL or PL/SQL.
-  It is nothing but a set of SQL statements that were stored on a database server and invoked after using a SQL interface.
-  It is used to execute several queries in one function and return the result as the same that was written in the function. 


```sql
  CREATE [OR REPLACE (Replace the function if already exist)] FUNCTION name (Name of function) ( [ [ argmode (Mode of argument)] [ argname(Name of argument) ] argtype (Type of argument)[ { DEFAULT | = } default_expr (Default expression of function) ] [, ...] ] )  
[RETURNS rettype (Return type of functions)  
| RETURNS TABLE (Table name which we have used to return from function)(column_name (Name of column) column_type (Data type of column)[, ...] ) ] {LANGUAGE lang_name (Language name which was used to create function)  
| WINDOW (Window function)  
| IMMUTABLE | STABLE | VOLATILE (Attribute of function)  
| COST execution_cost (Execution costs)  
| ROWS result_rows (No of rows returned from function)  
| SET configuration_parameter (Specified configuration parameter) {TO value | = value | FROM CURRENT}  
| AS 'definition' (Definition of function)  
} ...  
[WITH (attribute [, ...] ) ] (Display optional function information)

```
