<h1 align="center">✋ BEWARE ✋</h1>

## If you are a 42 Student, do not copy/paste this project, it will be considered cheating and you will be grated -42.

# 42 Wolfsburg Piscine 
## C02

The first coding language you learn: C

# Contents

1. [Exercise 00 : ft_strcpy](#ex00)
2. [Exercise 01 : ft_strncpy](#ex01)
3. [Exercise 02 : ft_str_is_alpha](#ex02)
4. [Exercise 03 : ft_str_is_numeric](#ex03)
5. [Exercise 04 : ft_str_is_lowercase](#ex04)
6. [Exercise 05 : ft_str_is_uppercase](#ex05)
7. [Exercise 06 : ft_str_is_printable](#ex06)
8. [Exercise 07 : ft_strupcase](#ex07)
9. [Exercise 08 : ft_strlowcase](#ex08)
10. [Exercise 09 : ft_strcapitalize](#ex09)
11. [Exercise 10 : ft_strlcpy](#ex10)
12. [Exercise 11 : ft_putstr_non_printable](#ex11)
13. [Exercise 12 : ft_print_memory](#ex12)

# <a name="ex00">Exercise 00 : ft_strcpy</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 00 |
| ----- | ----- |
| | ft_strcpy |
| Turn-in directory: | ex00/ |
| Files to turn in: | ft_strcpy.c |
| Allowed functions: | None |

* Reproduce the behavior of the function strcpy (man strcpy).
* Here’s how it should be prototyped :

`````C
char    *ft_strcpy(char *dest, char *src)
`````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex01">Exercise 01 : ft_strncpy</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 01 |
| ----- | ----- |
| | ft_strncpy |
| Turn-in directory: | ex01/ |
| Files to turn in: | ft_strncpy.c |
| Allowed functions: | None |

* Reproduce the behavior of the function strncpy (man strncpy).
* Here’s how it should be prototyped :

`````C
char	*ft_strncpy(char *dest, char *src, unsigned int n)
`````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex02">Exercise 02 : ft_str_is_alpha</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 02 |
| ----- | ----- |
| | ft_str_is_alpha |
| Turn-in directory: | ex02/ |
| Files to turn in: | ft_str_is_alpha.c |
| Allowed functions: | None |

* Create a function that returns 1 if the string given as a parameter contains only alphabetical characters, and 0 if it contains any other character.
* Here’s how it should be prototyped :

````C
int	ft_str_is_alpha(char *str)
````

* It should return **1** if str is empty.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex03">Exercise 03 : ft_str_is_numeric</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 03 |
| ----- | ----- |
| | ft_str_is_numeric |
| Turn-in directory: | ex03/ |
| Files to turn in: | ft_str_is_numeric.c |
| Allowed functions: | None |

* Create a function that returns 1 if the string given as a parameter contains only digits, and 0 if it contains any other character.
* Here’s how it should be prototyped :

````C
int	ft_str_is_numeric(char *str)
````

* It should return **1** if str is empty.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex04">Exercise 04 : ft_str_is_lowercase</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 04 |
| ----- | ----- |
| | ft_str_is_lowercase |
| Turn-in directory: | ex04/ |
| Files to turn in: | ft_str_is_lowercase.c |
| Allowed functions: | None |

* Create a function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.
* Here’s how it should be prototyped :

````C
int	ft_str_is_lowercase(char *str)
````

* It should return 1 if str is empty.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex05">Exercise 05 : ft_str_is_uppercase</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 05 |
| ----- | ----- |
| | ft_str_is_uppercase |
| Turn-in directory: | ex05/ |
| Files to turn in: | ft_str_is_uppercase.c |
| Allowed functions: | None |

* Create a function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character.
* Here’s how it should be prototyped :

````C
int	ft_str_is_uppercase(char *str)
````

* It should return 1 if str is empty.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex06">Exercise 06 : ft_str_is_printable</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 06 |
| ----- | ----- |
| | ft_str_is_printable |
| Turn-in directory: | ex06/ |
| Files to turn in: | ft_str_is_printable.c |
| Allowed functions: | None |

* Create a function that returns 1 if the string given as a parameter contains only printable characters, and 0 if it contains any other character.
* Here’s how it should be prototyped :

````C
int	ft_str_is_printable(char *str)
````

* It should return 1 if str is empty.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex07">Exercise 07 : ft_strupcase</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 07 |
| ----- | ----- |
| | ft_strupcase |
| Turn-in directory: | ex07/ |
| Files to turn in: | ft_strupcase.c |
| Allowed functions: | None |

* Create a function that transforms every letter to uppercase.
* Here’s how it should be prototyped :

````C
char	*ft_strupcase(char *str)
````

* It should return str.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex08">Exercise 08 : ft_strlowcase</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 08 |
| ----- | ----- |
| | ft_strlowcase |
| Turn-in directory: | ex08/ |
| Files to turn in: | ft_strlowcase.c |
| Allowed functions: | None |

* Create a function that transforms every letter to lowercase.
* Here’s how it should be prototyped :

````C
char	*ft_strlowcase(char *str)
````

* It should return str.

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex09">Exercise 09 : ft_strcapitalize</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 09 |
| ----- | ----- |
| | ft_strcapitalize |
| Turn-in directory: | ex09/ |
| Files to turn in: | ft_strcapitalize.c |
| Allowed functions: | None |

* Create a function that capitalizes the first letter of each word and transforms all other letters to lowercase.
* A word is a string of alphanumeric characters.
* Here’s how it should be prototyped :

````C
char	*ft_strcapitalize(char *str)
````

* It should return str.
* For example:

`````
$>salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un
`````

* Becomes:

`````
$>Salut, Comment Tu Vas ? 42mots Quarante-Deux; Cinquante+Et+Un
`````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex10">Exercise 10 : ft_strlcpy</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 10 |
| ----- | ----- |
| | ft_strlcpy |
| Turn-in directory: | ex10/ |
| Files to turn in: | ft_strlcpy.c |
| Allowed functions: | None |

* Reproduce the behavior of the function strlcpy (man strlcpy).
* Here’s how it should be prototyped :

````C
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex11">Exercise 11 : ft_pustr_non_printable</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 11 |
| ----- | ----- |
| | ft_pustr_non_printable |
| Turn-in directory: | ex11/ |
| Files to turn in: | ft_pustr_non_printable.c |
| Allowed functions: | write |

* Create a function that displays a string of characters onscreen. If this string con- tains characters that aren’t printable, they’ll have to be displayed in the shape of hexadecimals (lowercase), preceeded by a "backslash".
* For example :

````
$>Coucou\ntu vas bien ?
````

* The function should display:

````
$>Coucou\0atu vas bien ?
````

* Here’s how it should be prototyped :

````C
void	ft_putstr_non_printable(char *str)
````

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>

# <a name="ex12">Exercise 12 : ft_print_memory</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 12 |
| ----- | ----- |
| | ft_print_memory |
| Turn-in directory: | ex12/ |
| Files to turn in: | ft_print_memory.c |
| Allowed functions: | write |

* Create a function that displays the memory area onscreen.
* The display of this memory area should be split into three "columns" separated by a space:
	* The hexadecimal address of the first line’s first character followed by a ’:’
	* The content in hexadecimal with a space each 2 characters and should be padded with spaces if needed (see the example below).
	* The content in printable characters.
* If a character is non-printable, it’ll be replaced by a dot.
* Each line should handle sixteen characters.
* If **size** is equal to 0, nothing should be displayed.

* Example:

````
$> ./ft_print_memory
000000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
000000010a161f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo
000000010a161f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on
000000010a161f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.
000000010a161f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..
000000010a161f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .
$> ./ft_print_memory | cat -te
0000000107ff9f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin$
0000000107ff9f50: 6368 6573 090a 0963 0720 6573 7420 666f ches...c. est fo$
0000000107ff9f60: 7509 746f 7574 0963 6520 7175 206f 6e20 u.tout.ce qu on $
0000000107ff9f70: 7065 7574 2066 6169 7265 2061 7665 6309 peut faire avec.$
0000000107ff9f80: 0a09 7072 696e 745f 6d65 6d6f 7279 0a0a ..print_memory..$
0000000107ff9f90: 0a09 6c6f 6c2e 6c6f 6c0a 2000 ..lol.lol. .$
$>
````

* Here’s how it should be prototyped :

````C
void	*ft_print_memory(void *addr, unsigned int size)
````

* It should return **addr**

<p align="right">
 <a href="https://github.com/Cerberus2290/Piscine_Nov22/tree/main/c02#-beware-">back to top</a>
</p>