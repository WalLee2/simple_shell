# Holberton School shell - a simple shell (hsh)

##### Holberton Shell (hsh) is a simple command line shell. This shell was built as a project for <a href="https://www.holbertonschool.com/">Holberton School</a>. This is a culmination of everything we have learned about the C programming thusfar.

## Getting Started

To use hsh, you can give it commands. hsh commands follow the following syntax: `command name {arguments}`.

#### Commands

Typing the filename in a program located in any of the directories in the [PATH] runs the command.

```
ls
```

The `ls` command lists all directories and files in the current working directory.

##### List of useful commands
`ls` - lists all files and directories of current working directory

### Installing

To clone the repo (depending on whose repo):

```
git clone https://github.com/WalLee2/simple_shell.git
git clone https://github.com/jimmythongtran/simple_shell.git
```

Here is the line to compile:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Description of File Struture
1. [holberton.h](holberton.h) - Header file 
<a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/holberton.h">holberton.h</a></li> - Header file: struct definitions, macros, function prototypes and standard libraries included
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/linkedlist_withPATH.c">linkedlist_withPATH.c</a></li> - linked list for all the directories in PATH
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/simp_shell_main.c">simp_shell_main.c</a></li> - entry to program
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/stringFuncs.c">stringFuncs.c</a></li> - functions useful for the string
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/useful_extraFuncs.c">useful_extraFuncs.c</a></li> - more functions useful for the string



## Built With

* [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)

## Authors

* **Walton Lee** - <a href="https://github.com/WalLee2">Github</a>
* **Jimmy Tran** - <a href="https://github.com/jimmythongtran">Github</a>

## Acknowledgments

* Hat tip to <a href="https://www.holbertonschool.com/">Holberton School</a>
