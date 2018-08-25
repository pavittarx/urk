# Linux / Unix Shell Commands 18.07
 #### Stuart Elkeino (pavittarx) 

## Usage Instructions 
() - contains madatory parameters, cannot be omitted.\
[] - contains optional parameters, can be omitted.\
{} - contains extra information like comments.

## General Commands 

### help 
It is used to display help information about shell commands. This is dependent on type of shell you are using.

> help 

### man 
If `man` pages are installed. The man command displays the manual pages for a command.

> man (command)

### cd
It is used to `change` the current working `directory`.

> cd [relative-path-to-destination-directory]

to navigate to Home directory

> cd ~/ 

### ls 

It `lists` the files/directories in the current directory. 

> ls [options] [path]

``` 
options
-d :lists all directories/folders.
-a :display all files & folders (including hidden).
-l :files & folders with permissions, size, date & other details (in long list format).
-1 :display one file per line.
-s :files & folders with size in kb.
-S :sort by file size.
-t :sort by last modified.
-R :displays a recursive list.
-r :reverses the order of ouptut.
-m :display comma seprated output.
-Q :displays Quoted output.
```

### clear 
It clears the terminal window.

> clear

### who 
Displays information about current user, including login name, terminal & time.

> who 

### sort
Sorts the file, or concatenation of group of files.

> sort [filename1] [filename2] [...] [filenameN]

> sort {takes input from the command line}


## Basic File Operations 

### touch
Creates a new empty file. 

> touch [filename]

### cp
 Creates a `copy` of a file

 > cp [file-to-be-copied] [path]/[new-filename]

 ### mv
 It is used to `move` a file from its current location. 

> mv [filename] [destination-location]

### rm 
Deletes (or `Removes`) a file.

> rm [filename]

## Displaying Files 

### cat
Prints a single or `concatenation` of multiple files. It concatenates files & output.

> cat [filename]

> cat [filename1] [filename2] [filename3] [...] [filenameN]

### less
It displays file contents page by page.

> less [filename]

### head 
It displays first 10 lines of a file.

> head [filename]

### tail 
It displays last 10 lines of a file.

> tail [filename]

## Searching in/of Files

### less 
It can also be used to search certain keywords in a file. 

> less /[keyword]

### grep 
It allows searching in a file with keywords, pattern matching and much more. It is `case sensitive`.

> grep [keyword/pattern] [filename1 ... N]

If the keyword contains spaces, it must be enclosed in single quotes. 


``` 
Options
-i :allows case-insensitive searching
-v :displays the lines that don't match the keyword [Inverted Search]. 
-n :include line numbers to the results. 
-o :only outputs the matched part.
-c :counts the lines that matched.
-r :performs a recursive search.
```

## find
The find command is used to find/search for files & directories in the file system. It is one of the most used commands. It can find files by by permissions, users, groups, file type, date, size and other possible criteria.

> find (path) [search options]

```
Options
-name :finds all the files with the given name.
-i    :igones the case of the search.
-type :specifies the type of file, use '-type d' to find directories
-perm :find files matching the permission
```



### locate
It is a file searching utility, it is faster as compared to the `find` command. It uses a database to locate your files instead of the file system. It uses a mlocate.db database. 

> locate [options] (filename)

```
Options 
-n :Limit the number of searches to a specific number.
-c :displays number of matching enteries only.
-i :ignores case-sensitive locate loops.
-e :checks if the file in the database is present on the system.
-0 :changes default Newline Operator ('\\n') to ASCII NULL
-q :suprasses error messages.
-S :displays the 'mlocate' database statistics.
-d :allows you to use different 'mlocate' database.
```
*Updating the mlocate.db database* 
>sudo updatedb

## I/O redirection

### Input Redirection 
Supplies input to a command from a file.  `<` is input redirection operator.

> (command) < (input-file)

### Output Redirection 
Writes the output of a command to a file, `>` is output redirection operator.

> (command) > (output-file) 

Example>  
`echo 'This is Stuart' > names.txt`

### I/O Combined Redirection

(command) < (input-file) >  (output-file)

### Pipelining 
`|` is the pipe operator, used to combine resuts of two or more commands, without the need of an intermediary storage of previous results. 

> (command1) | (command2) | [...] | (commandN)

Example>

`ls | sort`

## Miscellaneous File Commands/Utilities

### file
Displays the type of data a file contains, ASCII Text, Images, encrypted data etc.

> file * 

### wc 
short for word count. 

> wc [options] [filename]

```
Options 
-w :counts the number of words in a file.
-l :counts the number of letters in a file.
-c :counts the number of characters in a file. 
```

### WildCards 
`?` & `*` are wildcard characters.\
? matches against one character, * matches against one or more characters in a file name.

> (command) ?ish {will match files with names fish, mish, bish, kish, shish, etc}

> (command) fi* {will match fish, file, fink, fill, fikstin, fikster and any other related matches.}

### compress 
Compresses a file, and frees some disk space.

> compress (filename)

### gzip
It compresses file, more efficiently than compress. 

> gunzip (filename)


## File/Directory Access Permissions
 ####  Understanding Permissions 
 There are three kinds of permissions\
 `r :read permission`\
 gives access to view the contents of a directory/file.\
 `w :write permission`\
 gives access to move/change the contents of a directory/file.\
 `x :Execute permission` \
 gives access to enter a directory, access its files & sub-directories. \
 gives access to execute in case of a file.

 The permissions are assigned to three peoples, 
 1. Owner/Creator/Administrator (u)
 2. Current User Group (g)
 3. Everyone / Others (o)

`ls -l` list the file & its permissions in current directory.\

Example result for an file named info:

-rw-rw-r-- 1 pavittarx pavittarx  168 Jul 17 08:33 info 

The entries in the output are
* file permissions,
* number of links,
* owner name,
* owner group,
* file size,
* time of last modification
* file/directory name

#### File Permissions 
The first 10 characters indicates the file/directory permission. 

The first character indicates whether the listed entity is a file/directory. `-` indicates file, `d` indicates a directory. 

The next 3 characters owner/creator permission.\
The next 3 character indicate user/group permissions.\
The last 3 characters indicate global or everyone permissions.

`-` indicate absence of a permission, meanwhile `r`,`w`,`x` indicate presence of read, write and execute permission.

### chmod 
It is used to change permissions of a file/directory. 

> chmod [options] [permissions] [filename]

Example 

chmod u=rwx, g=rx, o=r info

Octal Permission Notation

chmod 754 info

```
4 indicates read,
2 indicates write,
1 indicates execute,
0 indicates no permission
```

[user (u) permission] 

7 = 4 (read)+2(write)+1(execute) 

[group (g) permission]

5 = 4 (read)+1(execute)

[others (o) permission]

4 = 4 (read)

### chown 
This command changes ownership of a file/directory. The default ownership belongs to the user who created it, and group he belongs to, chown can be used to modify it.

> sudo chown (user[:group]) (file/directory1 .. N)

user :indicates new owning user
group :indicates the new owning group 


Example:

`sudo chown stuart info`\
changes the owner to stuart

`sudo chown stuart: info` \
changes owner to stuart, and owner group to stuart's group

`chown :admin info`\
changes owner group to admin, can be run without sudo.

`sudo chown stuartx:admin info`\
changes owner to stuart, and owner group to admin

`sudo chown 1000:1001 info`\
changes the owner to user with UID 1000 & owner group to group with GID 1001

`sudo chown +1000:+1001`\
unambgiously changes the owner to user with UID 1000, and GID 1001, if there is a user with name `1000` or group with name `1001`


```
Options 
-R :performs the given operation recursively, that is changes ownership of every sub-directory/sub-file.
```

## Miscellanous Commands

### ps

Shows information about process, associated PID and status.

> ps 

### fg
Restarts a suspended process
> fg (PID)

### bg
Moves the supspended jobs to run in background.

> bg

### kill
Kills a process or Job.

> kill (PID)

[] use Ctrl+C to kill a process runnning in foreground.\
[] use Ctrl+Z to suspend a process running in foreground.

### sleep
halts the processing for given number of seconds.
> sleep [time (in s)]

> sleep [time (in s)] & \
[] does the processing in background & returns prompt when done.

### history 
Displays the list of commands you have used.

The commands can also be recalled using `!` operator, 

```
!! :recalls last command.
!-3 :recalls third most recent command.
!5 :recalls 5th command in list.
!grep :recalls last command starting with grep
```

