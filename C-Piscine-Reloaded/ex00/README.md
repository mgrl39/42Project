# Exercise 00 : Oh yeah, mooore...
To solve this exercise you can copy and paste the command:
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0 && echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1 && mkdir test2 && chmod 504 test2 && touch -t 06012245 test2 && echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3 && echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4 && ln test3 test5 && ln -s test0 test6 && touch -ht 06012220 test6 && ls -l
```


<details open>
<summary>The same command but not in a line</summary>
<br>

### test0
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0
```
### test1
```shell
echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1
```
### test2
```shell
mkdir test2 && chmod 504 test2 && touch -t 06012245 test2
```
### test3
```shell
echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3
```

### test4
```shell
echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4
```

### test5
```shell
ln test3 test5
```

### test6
```shell
ln -s test0 test6 && touch -ht 06012220 test6
```
</details>

Once you’ve done that, run the next command to create the file to bee submitted.
```shell
tar -cf exo.tar * && rm -rf test*
```

To extract a tar archive while preserving permissions: `tar -xf exo.tar -p`

