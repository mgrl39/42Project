# Libft commands
## Checker for exercises.
### Check if all exercises include the `libft.h`
```shell
bash -c "$(wget -qO- https://doncom.me/check_libft_includes.sh)"
```
### Check Lowercase Letters (a-z)
```shell
for char in {a..z}; do echo -n "$char: "; ./a.out $char; done
```
### Check Uppercase Letters (A-Z)
```shell
for char in {A..Z}; do echo -n "$char: "; ./a.out $char; done
```
### Check Numbers (0-9)
```shell
for char in {0..9}; do echo -n "$char: "; ./a.out $char; done
```
## Extra
```shell
diff <(curl -s https://raw.githubusercontent.com/mgrl39/42Project/main/Libft/ft_isalpha.c) ft_isalpha.c
```

```shell
#!/bin/bash

# URL base de tu repositorio en GitHub
BASE_URL="https://raw.githubusercontent.com/mgrl39/42Project/main/Libft"

# Listar todos los archivos en el directorio actual
for file in $(ls); do
    # Comprobar si el archivo es un archivo regular
    if [ -f "$file" ]; then
        echo "Comparando $file con su versión en GitHub..."
        # Realizar el diff entre el archivo local y el archivo en GitHub
        diff_output=$(diff <(curl -s "$BASE_URL/$file") "$file")
        # Verificar el resultado del diff
        if [ $? -eq 0 ]; then
            echo "El archivo $file está sincronizado con GitHub."
        else
            echo "El archivo $file difiere del de GitHub:"
            echo "$diff_output"
        fi
        echo "-----------------------------"
    fi
done
```
