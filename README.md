<p align="center">
	<a href="#about">About</a> •
	<a href="#how-to-use">How to use</a> •
	<a href="#norminette">Norminette</a> •
	<a href="#license">License</a>
</p>

## ABOUT
The first project at 42, libft, involves learning how the standard functions of C programming work by writing them from scratch and creating a personal library. This project is vital as the library will be used in future assignments at 42.

If you're a 42 student, it's highly recommended that you go through the process of writing your own code and testing it yourself rather than copying and pasting code that you only partially understand. If you've successfully completed your piscine, there's no reason why you couldn't tackle this project on your own! Be patient and thorough.

<a href="https://github.com/MarouanDoulahiane/libft/blob/main/subject/libft.pdf">Click here</a> for the subject of this project.

## HOW TO USE
#### COMPILATION
#### 1º - Clone the repository
```bash
https://github.com/Wayde-Ouadie/Libft-42.git
```

#### 2º - Enter the project folder and run `make`
```bash
cd libft-42/
make
```

#### 3º - To use in your code, include the header
```c
#include "libft.h"
```

#### MAKEFILE RULES

`make` - Compile libft **mandatory** files.

`make bonus` - Compile libft **bonus** files.

`make all` - Compile **mandatory** + **bonus** files.

`make clean` - Delete all .o (object files) files.

`make fclean` - Delete all .o (object file) and .a (executable) files.

`make re` - Use rules `fclean` + `all`.


## NORMINETTE
At 42 School, it is expected that almost every project is written in accordance with the Norm, which is the coding standard of the school.

```
- No for, do...while, switch, case, goto, ternary operators and variable-length arrays are allowed
- Each function must be a maximum of 25 lines, not counting the function's curly brackets
- Each line must be at most 80 columns wide, comments included
- A function can take 4 named parameters maximum
- No assigns and declarations in the same line (unless static)
- You can't declare more than 5 variables per function
- ...
```

## LICENSE
<p>
This work is published under the terms of <a href="https://github.com/MarouanDoulahiane/libft/blob/main/LICENSE.md">MIT LICENSE</a>.
</p>
