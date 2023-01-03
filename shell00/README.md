<h1 align="center">✋ BEWARE ✋</h1>

## If you are a 42 Student, do not copy/paste this project, it will be considered cheating and you will be grated -42.

# 42 Wolfsburg Piscine 
## Shell_00

This was the first real project for the November 2022 Piscine Shell 00

# Contents

1. [Exercise 00 : Z](#ex00)
2. [Exercise 01 : testShell00](#ex01)
3. [Exercise 02 : Oh yeah, mooore...](#ex02)
4. [Exercise 03 : SSH me!](#ex03)
5. [Exercise 04 : midLS](#ex04)
6. [Exercise 05 : GiT commit](#ex05)
7. [Exercise 06 : gitignore](#ex06)
8. [Exercise 07 : diff](#ex07)
9. [Exercise 08 : clean](#ex08)
10. [Exercise 09 : Illusions, not tricks, Michael...](#ex09)

# <a name="ex00">Exercise 00 : Z</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 00 |
|-------------------------------------------------------|--------------------------------------------------|
| | Only the best know how to display Z |
| Turn-in directory: | ex00/ |
| Files to turn in: | z |
| Allowed functions: | None |

* Create a file called z that returns "Z", followed by a new line, whenever the command cat is used on it.

```
?>cat z
Z
?>
```

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex01">Exercise 01 : testShell00</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 01 |
|-------------------------------------------------------|--------------------------------------------------|
| | What are attributes anyway ? |
| Turn-in directory: | ex01/ |
| Files to turn in: | testShell00.tar |
| Allowed functions: | None |

* Create a file called testShell00 in your submission directory.
* Figure out a way for the output to look like this (except for the “total 1” line):

```
%>ls -l
total 1
-r--r-xr-x 1 XX XX 40 Jun 1 23:42 testShell00
%>
```
* Once you’ve achieved the previous steps, execute the following command to create the file to be submitted: **tar -cf testShell00.tar testShell00**.

### ⚠️ Don’t worry about what you’ve got instead of "XX". ⚠️

### ⚠️ A year will be accepted instead of the time, on the timestamp of the file. ⚠️

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex02">Exercise 02 : Oh yeah, mooore...</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 02 |
|-------------------------------------------------------|--------------------------------------------------|
| | Oh yeah, mooore... |
| Turn-in directory: | ex02/ |
| Files to turn in: | exo2.tar |
| Allowed functions: | None |

* Create the following files and directories. Do what’s necessary so that when you use the ls -l command in your directory, the output will looks like this :

```
%> ls -l
total XX
drwx--xr-x 2 XX XX XX Jun 1 20:47 test0
-rwx--xr-- 1 XX XX 4 Jun 1 21:46 test1
dr-x---r-- 2 XX XX XX Jun 1 22:45 test2
-r-----r-- 2 XX XX 1 Jun 1 23:44 test3
-rw-r----x 1 XX XX 2 Jun 1 23:43 test4
-r-----r-- 2 XX XX 1 Jun 1 23:44 test5
lrwxrwxrwx 1 XX XX 5 Jun 1 22:20 test6 -> test0
%>
```

* Once you’ve done that, run tar -cf exo2.tar * to create the file to be submitted.

### ⚠️ Don’t worry about what you’ve got instead of "XX". ⚠️

### ⚠️ A year will be accepted instead of the time, on the timestamp of the file. ⚠️

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex03">Exercise 03 : SSH me!</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 03 |
|-------------------------------------------------------|--------------------------------------------------|
| | SSH Key |
| Turn-in directory: | ex03/ |
| Files to turn in: | id_rsa_pub |
| Allowed functions: | None |

* Create your own SSH key. Once it is done:
  * Add your public key to your repository, in a file name id_rsa_pub
  * Update your ssh key on the intranet. This will allow you to push the repository to our git server.

### 💡 The file’s name was not chosen randomly. 💡
### 💡 Make sure you understand the difference between the public key and the private key. 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex04">Exercise 04 : midLS</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 04 |
|-------------------------------------------------------|--------------------------------------------------|
| | midLS |
| Turn-in directory: | ex04/ |
| Files to turn in: | midLS |
| Allowed functions: | None |

* In a midLS file, place the command line that will list all files and directories in your current directory (except for hidden files or any file that starts by a dot - yes, that includes double-dots), separated by a comma, by order of modification date. Make sure the directory’s names are followed by a slash character.

### ⚠️ What has not been asked for should not be done! ⚠️
### 💡 RTFM!! 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex05">Exercise 05 : GiT commit?</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 05 |
|-------------------------------------------------------|--------------------------------------------------|
| | GiT commit ? |
| Turn-in directory: | ex05/ |
| Files to turn in: | git_commit.sh |
| Allowed functions: | None |

* Create a shell script that displays the ids of the last 5 commits of your git repository.

```
%> bash git_commit.sh | cat -e
baa23b54f0adb7bf42623d6d0a6ed4587e11412a$
2f52d74b1387fa80eea844969e8dc5483b531ac1$
905f53d98656771334f53f59bb984fc29774701f$
5ddc8474f4f15b3fcb72d08fcb333e19c3a27078$
e94d0b448c03ec633f16d84d63beaef9ae7e7be8$
%>
```

* To test your script, we will use our own environment.

### 💡 RTFM!! 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex06">Exercise 06 : gitignore</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 06 |
|-------------------------------------------------------|--------------------------------------------------|
| | GiT |
| Turn-in directory: | ex06/ |
| Files to turn in: | git_ignore.sh |
| Allowed functions: | None |

* In this exercice, you will write a short shell script that lists all the existing files
ignored by your GiT repository. Example:

```
%> bash git_ignore.sh | cat -e
.DS_Store$
mywork.c~$
%>
```

* To test your script, we will use our own environment.

### 💡 RTFM!! 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex07">Exercise 07 : diff</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 07 |
|-------------------------------------------------------|--------------------------------------------------|
| | |
| Turn-in directory: | ex07/ |
| Files to turn in: | b |
| Allowed functions: | None |

* Create a file b, so that:

```
%>cat -e a
STARWARS$
Episode IV, A NEW HOPE It is a period of civil war.$
$
Rebel spaceships, striking from a hidden base, have won their first victory against the evil
Galactic Empire.$
During the battle, Rebel spies managed to steal secret plans to the Empire's ultimate weapon, the
DEATH STAR,$
an armored space station with enough power to destroy an entire planet.$
$
Pursued by the Empire's sinister agents, Princess Leia races home aboard her starship, custodian of
the stolen plans that can save her people and restore freedom to the galaxy...$
$
```

```
%>diff a b > sw.diff
```

### 💡 [man](https://man7.org/linux/man-pages/man1/patch.1.html) **patch** 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex08">Exercise 08 : clean</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 08 |
|-------------------------------------------------------|--------------------------------------------------|
| | |
| Turn-in directory: | ex08/ |
| Files to turn in: | clean |
| Allowed functions: | None |

* In a file called clean place the command line that will search for all files - in the current directory as well as in its sub-directories - <br>with a name ending by ~, or a name that start and end by #
* The command line will show and erase all files found.
* Only one command is allowed: no ’;’ or ’&&’ or other shenanigans.

### 💡 [man](https://man7.org/linux/man-pages/man1/find.1.html) **find** 💡

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>

# <a name="ex09">Exercise 09 : Illusions, not tricks, Michael...</a>

| ![Logo_Monolith_small](https://user-images.githubusercontent.com/120580537/209333599-dc44418d-8ee7-42b6-8a4a-7ff328778d87.png) | Exercise 09 |
|-------------------------------------------------------|--------------------------------------------------|
| | Illusions, not tricks, Michael... |
| Turn-in directory: | ex09/ |
| Files to turn in: | ft_magic |
| Allowed functions: | None |

* Create a magic file called **ft_magic** that will be formatted appropriately to detect files of **42 file** type, built with a **"42"** string at the <br>**42**nd byte.

### 💡 [man](https://man7.org/linux/man-pages/man1/file.1.html) **file**

<p align="right">
 <a href="https://github.com/Cerberus2290/Shell_00#-beware-">back to top</a>
</p>
