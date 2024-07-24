#include "libft.h"
#include "colors.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Función para imprimir el contenido de un nodo (asumiendo que el contenido es una cadena)
void print_content(void *content)
{
    if (content)
        printf(ANSI_COLOR_GREEN "%s" ANSI_COLOR_RESET, (char *)content);
}

// Función para liberar el contenido de un nodo (asumiendo que el contenido es una cadena)
void del_content(void *content)
{
    free(content);
}

// Función para imprimir la lista en formato visual
void print_list(t_list *list)
{
    while (list)
    {
        print_content(list->content);
        if (list->next)
            printf(" -> ");
        list = list->next;
    }
    printf("\n");
}

// Función para imprimir el código de una función
void print_function_code(const char *function_name)
{
    printf(ANSI_COLOR_MAGENTA "\nCodigo de la funcion: %s\n" ANSI_COLOR_RESET, function_name);
    
    if (strcmp(function_name, "ft_lstnew") == 0) {
        printf(ANSI_COLOR_CYAN "t_list\t*ft_lstnew(void *content)\n"
                           "{\n"
                           "\tt_list\t*node;\n"
                           "\n"
                           "\tnode = (t_list *)ft_calloc(1, sizeof(t_list));\n"
                           "\tif (!node)\n"
                           "\t\treturn (NULL);\n"
                           "\tnode->content = content;\n"
                           "\treturn (node);\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstadd_front") == 0) {
        printf(ANSI_COLOR_CYAN
                           "void\tft_lstadd_front(t_list **lst, t_list *new)\n"
                           "{\n"
                           "\tif (!lst || !new)\n"
                           "\t\treturn ;\n"
                           "\tnew->next = *lst;\n"
                           "\t*lst = new;\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstadd_back") == 0) {
        printf(ANSI_COLOR_CYAN "void\tft_lstadd_back(t_list **lst, t_list *new)\n"
                           "{\n"
                           "\tt_list\t*last;\n"
                           "\n"
                           "\tif (!lst || !new)\n"
                           "\t\treturn ;\n"
                           "\tif (*lst == NULL)\n"
                           "\t\t*lst = new;\n"
                           "\telse\n"
                           "\t{\n"
                           "\t\tlast = ft_lstlast(*lst);\n"
                           "\t\tlast->next = new;\n"
                           "\t}\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstclear") == 0) {
        printf(ANSI_COLOR_CYAN "void\tft_lstclear(t_list **lst, void (*del)(void *))\n"
                           "{\n"
                           "\tt_list\t*tmp;\n"
                           "\n"
                           "\tif (!lst || !del)\n"
                           "\t\treturn ;\n"
                           "\twhile (*lst)\n"
                           "\t{\n"
                           "\t\ttmp = (*lst)->next;\n"
                           "\t\tft_lstdelone(*lst, del);\n"
                           "\t\t*lst = tmp;\n"
                           "\t}\n"
                           "\t*lst = NULL;\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstdelone") == 0) {
        printf(ANSI_COLOR_CYAN "void\tft_lstdelone(t_list *lst, void (*del)(void *))\n"
                           "{\n"
                           "\tif (!lst || !del)\n"
                           "\t\treturn ;\n"
                           "\tdel(lst->content);\n"
                           "\tfree(lst);\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstiter") == 0) {
        printf(ANSI_COLOR_CYAN "void\tft_lstiter(t_list *lst, void (*f)(void *))\n"
                           "{\n"
                           "\tif (!lst || !f)\n"
                           "\t\treturn ;\n"
                           "\twhile (lst)\n"
                           "\t{\n"
                           "\t\tf(lst->content);\n"
                           "\t\tlst = lst->next;\n"
                           "\t}\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstlast") == 0) {
        printf(ANSI_COLOR_CYAN "t_list\t*ft_lstlast(t_list *lst)\n"
                           "{\n"
                           "\tif (!lst)\n"
                           "\t\treturn (NULL);\n"
                           "\twhile (lst->next)\n"
                           "\t\tlst = lst->next;\n"
                           "\treturn (lst);\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstmap") == 0) {
        printf(ANSI_COLOR_CYAN "t_list\t*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))\n"
                           "{\n"
                           "\tt_list\t*new_list;\n"
                           "\tt_list\t*new_elem;\n"
                           "\n"
                           "\tif (!lst || !f || !del)\n"
                           "\t\treturn (NULL);\n"
                           "\tnew_list = NULL;\n"
                           "\twhile (lst)\n"
                           "\t{\n"
                           "\t\tnew_elem = ft_lstnew(f(lst->content));\n"
                           "\t\tif (!new_elem)\n"
                           "\t\t{\n"
                           "\t\t\tft_lstclear(&new_list, del);\n"
                           "\t\t\treturn (NULL);\n"
                           "\t\t}\n"
                           "\t\tft_lstadd_back(&new_list, new_elem);\n"
                           "\t\tlst = lst->next;\n"
                           "\t}\n"
                           "\treturn (new_list);\n"
                           "}\n" ANSI_COLOR_RESET);
    } else if (strcmp(function_name, "ft_lstsize") == 0) {
        printf(ANSI_COLOR_CYAN "int\tft_lstsize(t_list *lst)\n"
                           "{\n"
                           "\tint\t size;\n"
                           "\n"
                           "\tsize = 0;\n"
                           "\twhile (lst != NULL)\n"
                           "\t{\n"
                           "\t\tsize++;\n"
                           "\t\tlst = lst->next;\n"
                           "\t}\n"
                           "\treturn (size);\n"
                           "}\n" ANSI_COLOR_RESET);
    }
}

char	*ft_uppertext(char *text)
{
	int	i;

	i = 0;
	while (text[i] != '\0')
	{
		if (text[i] >= 'a' && text[i] <= 'z')
			text[i] -= 32;
		i++;
	}
	return (text);
}

void    ft_to_uppercase(void *content)
{
    if (content)
        ft_uppertext((char *)content);
}
void	ft_separator(char *name)
{
	char	*modifiable_name = strdup(name);
	if (!modifiable_name)
	{
		printf("Memory allocation failed");
		return ;
	}
	printf(ANSI_COLOR_RED "\n───  ⋅ ∙ ∘ ☽ ༓ ☾ ∘ ⋅ ⋅  ──────  ⋅ ∙ ∘ ☽ ༓ ☾ ∘ ⋅ ⋅  ───\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BOLD_RED"                     %s", ft_uppertext(modifiable_name));
	printf(ANSI_COLOR_RED "\n───  ⋅ ∙ ∘ ☽ ༓ ☾ ∘ ⋅ ⋅  ──────  ⋅ ∙ ∘ ☽ ༓ ☾ ∘ ⋅ ⋅  ───\n" ANSI_COLOR_RESET);
}

void	code_printer(char *s, char *code)
{
	static int step = 1;
	printf(ANSI_COLOR_BOLD_YELLOW);
	printf("%d) ", step);
	printf(ANSI_COLOR_RESET);
	printf(ANSI_COLOR_GREEN);
	printf("%s", s);
	printf(ANSI_COLOR_RESET);
	if (strlen(code))
	{
		printf(ANSI_COLOR_YELLOW " -> " ANSI_COLOR_RESET);
		printf("%s\n", code);
	}
	step++;
}

// Función principal para probar las operaciones de la lista
int main(void)
{

	code_printer("Inicializar la lista a NULL", "t_list *list = NULL;");
	t_list *list = NULL;
	
	code_printer("Creamos un puntero para crear nuevos nodos", "t_list *new_node;");
	t_list *new_node; 
	
	code_printer("Lista resultante (luego aplicare ft_lstmap y ft_strdup)", "t_list *mapped_list;");
	t_list *mapped_list;

	code_printer("Cadena temporal para los contenidos de los nodos", "char *str;");
	char   *str;

	ft_separator("ft_lstnew");
	
	code_printer("Creamos nodos y los agregamos al principio de la lista", "");

	// Imprimir el codigo de lstnew
	print_function_code("ft_lstnew");
	
	// Texto para str
	code_printer("Declaro el valor de str", "str = strdup(\"Node 1\");");
	str = strdup("Node 1");
	
	code_printer("A new_node le paso el content de str", "new_node = ft_lstnew(str);");
	// new_node le paso el content \"Node 1\"
	new_node = ft_lstnew(str);
	printf(ANSI_COLOR_BOLD_YELLOW "Creo el nodo con el siguiente contenido: '%s'\n" ANSI_COLOR_RESET, (char *)new_node->content);
	code_printer("El size de la lista actualmente es", ft_itoa(ft_lstsize(list)));

	ft_separator("ft_lstadd_front");
	code_printer("Seguidamente, utilizamos la funcion ft_lstadd_front para añadir el nodo a la lista", "ft_lstadd_front(&list, new_node);");
	print_function_code("ft_lstadd_front");
	ft_lstadd_front(&list, new_node);

	ft_separator("ft_lstsize");
	print_function_code("ft_lstsize");
	code_printer("El size de la lista despues de añadir el Nodo 1 a la lista es", ft_itoa(ft_lstsize(list)));

	ft_separator("ft_lstnew");
	code_printer("Creamos un nuevo nodo, que sera el Nodo 2", "str = strdup(\"Node 2\");\n\t\t\t\t\t\t new_node = ft_lstnew(str);");
	str = strdup("Node 2");
	new_node = ft_lstnew(str);

	printf(ANSI_COLOR_BOLD_YELLOW "Creo el Nodo 2 con el siguiente contenido: '%s'\n" ANSI_COLOR_RESET, (char *)new_node->content);
	print_function_code("ft_lstadd_front");
	ft_lstadd_front(&list, new_node);

	code_printer("Usando ft_lstadd_front ponemos el Nodo 2 en la lista", "ft_lstadd_front(&list, new_node);");
	// Imprimir la lista después de agregar nodos al frente
	printf(ANSI_COLOR_BOLD_GREEN "La lista despues de poner los nodos al frente:\n" ANSI_COLOR_RESET);
	print_list(list);

	// Agregar un nodo al final de la lista
	ft_separator("ft_lstadd_back");
	printf(ANSI_COLOR_BOLD_CYAN "\nAgregar un nodo al final de la lista...\n" ANSI_COLOR_RESET);
	code_printer("Agregamos un nuevo nodo", "str = strdup(\"Node 3\");\n\t\t\t\t new_node = ft_lstnew(str);");
	str = strdup("Node 3");
	new_node = ft_lstnew(str);
	printf(ANSI_COLOR_BOLD_YELLOW "Creo el Nodo 3 con el siguiente contenido: '%s'\n" ANSI_COLOR_RESET, (char *)new_node->content);
	print_function_code("ft_lstadd_back");
	code_printer("Agregamos el nodo al final de la lista", "ft_lstadd_back(&list, new_node);");
	ft_lstadd_back(&list, new_node);

	// Imprimir la lista después de agregar un nodo al final
	printf(ANSI_COLOR_BOLD_GREEN "Imprimir la lista despues de agregar un nodo al final:\n" ANSI_COLOR_RESET);
	print_list(list);

	ft_separator("ft_lstlast");
	code_printer("Veamos el comando para ver el contenido del ultimo nodo de la lista", "ft_lstlast(list)->content");
	code_printer("El contenido del ultimo nodo de la lista:", ft_lstlast(list)->content);
	ft_separator("ft_lstmap");
	// Mapear la lista (convertir todas las cadenas a una copia nueva, demostración)
	printf(ANSI_COLOR_BOLD_CYAN "\nMapeando la lista para crear una nueva lista...\n" ANSI_COLOR_RESET);
	print_function_code("ft_lstmap");
	code_printer("Al mapped list uso la funcion ft_lstmap, pongo la funcion strdup\n, y la funcion que libera el contenido del nodo original", 
			"mapped_list = ft_lstmap(list, (void *(*)(void *))strdup, del_content);");
	mapped_list = ft_lstmap(list, 
	// Funcion que duplica el contenido del nodo
	(void *(*)(void *))strdup, 
	del_content); // Función que libera el contenido del nodo original
	// Imprimir la lista mapeada
	printf(ANSI_COLOR_BOLD_YELLOW "Lista mapeada (Mapped list):\n" ANSI_COLOR_RESET);
	print_list(mapped_list);

	ft_separator("ft_lstiter");
	code_printer("Utilizo la funcion ft_lstiter y le paso una funcion para poner los contents en mayuscula", "ft_lstiter(list, ft_to_uppercase)");
	ft_lstiter(list, ft_to_uppercase);
	print_function_code("ft_lstiter");
	
	print_list(list);
	ft_separator("ft_lstclear");

	// Limpiar la lista original y la lista mapeada.
	code_printer("Utilizo la funcion ft_lstclear, esta usa ft_lstdelone", "ft_lstclear(&list, del_content);");
	printf(ANSI_COLOR_BOLD_CYAN "\nLimpiando la lista original...\n" ANSI_COLOR_RESET);
	printf(ANSI_COLOR_BOLD_CYAN "\nLimpiando la mapped list...\n" ANSI_COLOR_RESET);
	print_function_code("ft_lstclear");
	ft_lstclear(&list, del_content);
	print_content(list);
	ft_lstclear(&mapped_list, del_content);
	ft_separator("ft_lstdelone");
	print_function_code("ft_lstdelone");
	return (0);
}
   
