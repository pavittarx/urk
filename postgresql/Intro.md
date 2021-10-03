# Postgres

Postgres is SQL database,

- Postgres creates a `postgres` user to work with postgres database.

```
  su -i -u postgres
```

- Postgres also starts a postgres service on your system. 

```
  systemctl status postgres
```

```
  systemctl restart postgres
```

- Logon into Postgres Shell

```
 psql
```

### Common Shell Commands

Help 

```shell
  # \?
```

```shell
  # \h
```

```shell
  # \h <command-name>
```

```shell
  # SELECT VERSION();
```

----

1. Quit Shell

```shell
  # \q 
```

2. List Databases

```shell
  # \l
```

3. Connect / Switch Databases

```shell
 # \c <database-name>
```

```
 # -d <db-name> -u <user-name> -W
```

4. List Tables (of connected Database)

```shell
  # \d
```

```shell
  # \dt
```

5. Get Table Structure

```shell
  # \d <database-name>
```

6. List Available Schema

```shell
  # \dn
```

7.  List Avaiable Functions

```shell
  # \df
```

8. List available Views

```
 # \dv
```

9. List Users & their roles

```shell
  # \du
```

10. View complete history

```shell
  # \s
```

    - save history to file
```shell
  # \s <filename>
```

11. Get time of query execution

```shell
  # \timing
```

12. use `psql` with text editory

```shell
  # \e
```

13. Toggle Output Table View alignment in `psql` shell

```shell
  # \a
```

14. Switch Output to HTML

```shell
  # \H
```