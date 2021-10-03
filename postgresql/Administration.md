## Default User
A `postgres` user is created while installing postgresql.

```shell
  cat /etc/passwd
```

Check default authentication mechanism

```shell
  cat /etc/postgresql/12/main/pg_hba.conf
```

Switch to `postgres` user.

```shell
  sudo -i -u postgres
```

```shell
  sudo su - postgres
```


Open Postgres Shell

```shell
  psql
```

List Postgres users

```sql
  \du
```

```sql
  SELECT username FROM pg_user;
```

Check User Privileges

```sql
  SELECT table_schema as schema, table_name as table, privilege_type as privilege 
  FROM information_schema.table_privileges  
  WHERE grantee = <user-name>; # <user-name> = 'postgres'
 ```

## User 
1.  Create user
```sql
 CREATE USER <user-name>;
```

2. Change Password

```sql
  ALTER USER <user-name> PASSWORD '<password>';
```

```sql
  ALTER USER <user-name> WITH PASSWORD '<password>';
```

```sql
  ALTER USER <user-name> WITH PASSWORD '<password>' VALID UNTIL <timestamp>; 
  
  # <timestamp> = `1 December 2021`;
```

	
```sql
  ALTER USER <user-name> WITH PASSWORD NULL;
```


Next > https://www.educba.com/postgresql-administration

