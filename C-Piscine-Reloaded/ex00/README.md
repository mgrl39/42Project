# Exercise 00 : Oh yeah, mooore...
To solve this exercise you can copy and paste the command:
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0 && echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1 && mkdir test2 && chmod 504 test2 && touch -t 06012245 test2 && echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3 && echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4 && ln test3 test5 && ln -s test0 test6 && touch -ht 06012220 test6 && ls -l
```

> [!NOTE]  
> If you want to do this but in different lines, you can follow these steps.
<details open>
<summary>Steps</summary>
<br>

### a) test0
- Create a directory named 'test0'
- Change the permissions of 'test0' to 715
  - The owner has read, write, and execute permissions (7)
  - The group has execute permission (1)
  - Others have read and execute permissions (5)
- Change the modification time of 'test0' to June 1, 20:47 (year is unspecified, system will default)
  - The format is MMDDhhmm, meaning month, day, hour, and minute
  - 'touch -t' allows you to set the modification time
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0
```

### b) test1
- Write "4242" to a file named 'test1' without a newline
- Change the permissions of 'test1' to 714
  - The owner has read, write, and execute permissions (7)
  - The group has read and write permissions (4)
  - Others have read permission (4)
- Change the modification time of 'test1' to June 1, 21:46 (year is unspecified, system will default)
```shell
echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1
```

### c) test2
- Create a directory named 'test2'
- Change the permissions of 'test2' to 504
  - The owner has read and execute permissions (5)
  - The group has read permission (0)
  - Others have read and execute permissions (4)
- Change the modification time of 'test2' to June 1, 22:45 (year is unspecified, system will default)
```shell
mkdir test2 && chmod 504 test2 && touch -t 06012245 test2
```

### d) test3
- Write "1" to a file named 'test3' without a newline
- Change the permissions of 'test3' to 404
  - The owner has read permission (4)
  - The group has no permissions (0)
  - Others have read permission (4)
- Change the modification time of 'test3' to June 1, 23:44 (year is unspecified, system will default)
```shell
echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3
```

### e) test4
- Write "42" to a file named 'test4' without a newline
- Change the permissions of 'test4' to 641
  - The owner has read, write, and execute permissions (6)
  - The group has read permission (4)
  - Others have read and execute permissions (1)
- Change the modification time of 'test4' to June 1, 23:43 (year is unspecified, system will default)
```shell
echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4
```

### f) test5
```shell
ln test3 test5
```

### g) test6
```shell
ln -s test0 test6 && touch -ht 06012220 test6
```
</details>

Once you’ve done that, run the next command to create the file to bee submitted.
```shell
tar -cf exo.tar * && rm -rf test*
```

To extract a tar archive while preserving permissions: `tar -xf exo.tar -p`

