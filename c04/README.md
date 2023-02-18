<h1 align="center">✋ BEWARE ✋</h1>

## If you are a 42 Student, do not copy/paste this project, it will be considered cheating and you will be grated -42.

# 42 Wolfsburg Piscine 
## C02

The first coding language you learn: C

# Contents

1. [Exercise 00 : ft_strlen](#ex00)
2. [Exercise 01 : ft_putstr](#ex01)
3. [Exercsie 02 : ft_putnbr](#ex02)
4. [Exercise 03 : ft_atoi](#ex03)
5. [Exercise 04 : ft_putnbr_base](#ex04)
6. [Exercise 05 : ft_atoi_base](#ex05)

# <a name="ex00">Exercise 00 : ft_strlen</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 00 |
| ----- | ----- |
| | ft_strlen |
| Turn-in directory: | ex00/ |
| Files to turn in: | ft_strlen.c |
| Allowed functions: | None |

* Create a function that counts and returns the number of characters in a string.
* Here’s how it should be prototyped :

````C
int	ft_strlen(char *str)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>

# <a name="ex01">Exercise 01 : ft_putstr</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 01 |
| ----- | ----- |
| | ft_putstr |
| Turn-in directory: | ex01/ |
| Files to turn in: | ft_putstr.c |
| Allowed functions: | write |

* Create a function that displays a string of characters on the standard output.
* Here’s how it should be prototyped :

````C
void	ft_putstr(char *str)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>

# <a name="ex02">Exercise 02 : ft_putnbr</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 02 |
| ----- | ----- |
| | ft_putnbr |
| Turn-in directory: | ex02/ |
| Files to turn in: | ft_putnbr.c |
| Allowed functions: | write |

* Create a function that displays the number entered as a parameter.<br>The function has to be able to display all possible values within an int type variable.
* Here’s how it should be prototyped :

````C
void	ft_putnbr(int nb)
````

* For example:

````
ft_putnbr(42);
$>42
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>

# <a name="ex03">Exercise 03 : ft_atoi</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 03 |
| ----- | ----- |
| | ft_atoi |
| Turn-in directory: | ex03/ |
| Files to turn in: | ft_atoi.c |
| Allowed functions: | None |

* Write a function that converts the initial portion of the string pointed by str to its int representation
* The string can start with an arbitray amount of white space (as determined by isspace(3))
* The string can be followed by an arbitrary amount of + and - signs, - sign will change the sign of the int returned based on the number of - is odd or even.
* Finally the string can be followed by any numbers of the base 10.
* Your function should read the string until the string stop following the rules and return
the number found until now.
* You should not take care of overflow or underflow. result can be undefined in that case.
* Here’s an example of a program that prints the atoi return value:

````
$>./a.out "  ---+--+1234ab567"
$>-1234
````

* Here's how it should be prototyped:

````C
int	ft_atoi(char *str)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>

# <a name="ex04">Exercise 04 : ft_putnbr_base</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 04 |
| ----- | ----- |
| | ft_putnbr_base |
| Turn-in directory: | ex04/ |
| Files to turn in: | ft_putnbr_base.c |
| Allowed functions: | write |

* Create a function that displays a number in a base system in the terminal.
* This number is given in the shape of an int, and the radix in the shape of a string of characters.
* The base-system contains all useable symbols to display that number :
	* 0123456789 is the commonly used base system to represent decimal numbers
	* 01 is a binary base system ;
	* 0123456789ABCDEF an hexadecimal base system ;
	* poneyvif is an octal base system.
* The function must handle negative numbers.
* If there’s an invalid argument, nothing should be displayed. Examples of invalid arguments :
	* base is empty or size of 1;
	* base contains the same character twice ;
	* base contains + or - ;
* Here’s how it should be prototyped :

````C
void	ft_putnbr_base(int nbr, char *base)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>

# <a name="ex05">Exercise 05 : ft_atoi_base</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 05 |
| ----- | ----- |
| | ft_atoi_base |
| Turn-in directory: | ex05/ |
| Files to turn in: | ft_atoi_base.c |
| Allowed functions: | None |

* Write a function that converts the initial portion of the string pointed by str to int representation.
* str is in a specific base given as a second parameter.
* excepted the base rule, the function should work exactly like ft_atoi.
* If there’s an invalid argument, the function should return 0. Examples of invalid arguments :
	* base is empty or size of 1;
	* base contains the same character twice ;
	* base contains + or - or whitespaces;
* Here’s how it should be prototyped :

````C
int	ft_atoi_base(char *str, char *base)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c04#-beware-">back to top</a>
</p>