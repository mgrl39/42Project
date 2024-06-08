# ft_point.h
Create a file ft_point.h that'll compile the following main:
```c
#include "ft_point.h"

void  set_point(t_point *point)
{
point->x = 42;
point->y = 21;
}

int main(void)
{
  t_point point;
  set_point(&point);
  return (0);
}
```
We have to **define a structure t_point** with **x** and **y** as its **members**:
```c
#ifndef FT_POINT_H
#define FT_POINT_H

typedef struct s_point
{
  int x;
  int y;
} t_point;

#endif
```

```c
#ifndef FT_POINT_H
```
This line checks if the preprocessor macro FT_POINT_H is not defined. The #ifndef directive stands for "if not defined". 
This is the first part of an include guard, which prevents the code within the guard from being included more than once in a single compilation.
