Create a macro ABS which replaces its argument by it absolute value: `#define ABS(Value)`

```c
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
```
> [!NOTE]  
> You are asked to do something that is normally banned by the Norm, that will be the only time they autorize it.
