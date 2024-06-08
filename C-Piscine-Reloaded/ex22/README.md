Create a macro ABS which replaces its argument by it absolute value: `#define ABS(Value)`

```c
#ifndef FT_ABS_H
# define FT_ABS_H

# define ABS(Value) ((Value) < 0 ? -(Value) : (Value))

#endif
```
> [!NOTE]  
> You are asked to do something that is normally banned by the Norm, that will be the only time they autorize it.

**Do not worry about this:**
```shell
Error: MACRO_FUNC_FORBIDDEN (line:  16, col:  13):	Macro functions are forbidden
Error: PREPROC_CONSTANT     (line:  16, col:  21):	Preprocessor statement must only contain constant defines
Error: TERNARY_FBIDDEN      (line:  16, col:  34):	Ternaries are forbidden
```
