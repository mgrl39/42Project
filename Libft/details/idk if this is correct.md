### 1. `ft_lstnew`

```c
#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *new;

	new = (t_list *)malloc(sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
}
```

### 2. `ft_lstadd_front`

Ya proporcionaste la implementación correcta en la pregunta anterior:

```c
#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (lst && new)
	{
		new->next = *lst;
		*lst = new;
	}
}
```

### 3. `ft_lstsize`

```c
#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	int size = 0;
	while (lst)
	{
		size++;
		lst = lst->next;
	}
	return (size);
}
```

### 4. `ft_lstlast`

```c
#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next)
		lst = lst->next;
	return (lst);
}
```

### 5. `ft_lstadd_back`

```c
#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!lst || !new)
		return ;
	if (!*lst)
		*lst = new;
	else
		ft_lstlast(*lst)->next = new;
}
```

### 6. `ft_lstdelone`

```c
#include "libft.h"

void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (!lst || !del)
		return ;
	del(lst->content);
	free(lst);
}
```

### 7. `ft_lstclear`

```c
#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *next;

	if (!lst || !*lst || !del)
		return ;
	while (*lst)
	{
		next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = next;
	}
}
```

### 8. `ft_lstiter`

```c
#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	if (!lst || !f)
		return ;
	while (lst)
	{
		f(lst->content);
		lst = lst->next;
	}
}
```

### 9. `ft_lstmap`

```c
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list *new_list;
	t_list *new_elem;

	if (!lst || !f)
		return (NULL);
	new_list = NULL;
	while (lst)
	{
		new_elem = ft_lstnew(f(lst->content));
		if (!new_elem)
		{
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, new_elem);
		lst = lst->next;
	}
	return (new_list);
}
```

### Explicación:

- **Implementación de funciones:**
  - **`ft_lstnew`**: Crea un nuevo nodo con el contenido dado.
  - **`ft_lstadd_front`**: Añade un nodo al principio de la lista.
  - **`ft_lstsize`**: Calcula el tamaño (número de nodos) de la lista.
  - **`ft_lstlast`**: Devuelve el último nodo de la lista.
  - **`ft_lstadd_back`**: Añade un nodo al final de la lista.
  - **`ft_lstdelone`**: Libera un nodo y su contenido dado.
  - **`ft_lstclear`**: Libera todos los nodos de la lista y su contenido.
  - **`ft_lstiter`**: Aplica una función a cada nodo de la lista.
  - **`ft_lstmap`**: Crea una nueva lista aplicando una función a cada nodo de la lista original.
