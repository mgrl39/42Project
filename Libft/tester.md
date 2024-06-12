```shell
for char in {a..z}; do echo -n "$char: "; ./a.out $char; done
```
```shell
for char in {A..Z}; do echo -n "$char: "; ./a.out $char; done
```
```shell
for char in {0..9}; do echo -n "$char: "; ./a.out $char; done
```

```shell
diff <(curl -s https://raw.githubusercontent.com/mgrl39/42Project/main/Libft/ft_isalpha.c) ft_isalpha.c
```
