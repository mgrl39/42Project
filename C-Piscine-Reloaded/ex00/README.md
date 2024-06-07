
```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0 && echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1 && mkdir test2 && chmod 504 test2 && touch -t 06012245 test2 && echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3 && ln test3 test5 && echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4 && ln -s test0 test6 && touch -ht 06012220 test6 && ls -l
```


<details open>
<summary>Want the previous command separated by files/directories</summary>
<br>

```shell
mkdir test0 && chmod 715 test0 && touch -t 06012047 test0
```

```shell
echo -n "4242" > test1 && chmod 714 test1 && touch -t 06012146 test1
```

```shell
mkdir test2 && chmod 504 test2 && touch -t 06012245 test2
```

```shell
echo -n "1" > test3 && chmod 404 test3 && touch -t 06012344 test3
```

```shell
ln test3 test5
```

```shell
echo -n "42" > test4 && chmod 641 test4 && touch -t 06012343 test4
```

```shell
ln -s test0 test6 && touch -ht 06012220 test6
```
</details>

Once you’ve done that, run the next command to create the file to bee submitted.
```shell
tar -cf exo.tar *
```

