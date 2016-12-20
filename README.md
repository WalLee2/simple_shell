# Holberton School shell - a simple shell (hsh)

##### Holberton Shell (hsh) is a simple command line shell. This shell was built as a project for <a href="https://www.holbertonschool.com/">Holberton School</a>. This is a culmination of everything we have learned about the C programming thusfar.

## Getting Started

To use hsh, you can give it comamnds. hsh commands follow the following syntax: 'command name {arguments}'.

#### Commands

Typing the filename in a program located in any of the directories in the [PATH] runs the command.

```
ls
```

The 'ls' command lists all directories and files in the current working directory.

##### List of useful commands
`ls` - lists all files and directories of current working directory

### Prerequisites

List of allowed functions and system calls

```
access (man 2 access)
chdir (man 2 chdir)
close (man 2 close)
closedir (man 3 closedir)
execve (man 2 execve)
exit (man 3 exit)
fork (man 2 fork)
free (man 3 free)
fstat (man 2 fstat)
getcwd (man 3 getcwd)
getline (man 3 getline)
kill (man 2 kill)
lstat (man 2 lstat)
malloc (man 3 malloc)
open (man 2 open)
opendir (man 3 opendir)
perror (man 3 perror)
read (man 2 read)
readdir (man 3 readdir)
signal (man 2 signal)
stat (man 2 stat)
strtok (man 3 strtok)
wait (man 2 wait)
waitpid (man 2 waitpid)
wait3 (man 2 wait3)
wait4 (man 2 wait4)
write (man 2 write)
_exit (man 2 _exit)
```

### Installing

To clone the repo:

```
git clone https://github.com/WalLee2/simple_shell.git
```

Here is the line to compile:

```
gcc -Wall -Werror -Wextra -pedantic *.c -o hsh
```

## Description of File Struture
<ol>
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/holberton.h">holberton.h</a></li> - Header file: struct definitions, macros, function prototypes and standard libraries included
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/linkedlist_withPATH.c">linkedlist_withPATH.c</a></li> - linked list for all the directories in PATH
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/simp_shell_main.c">simp_shell_main.c</a></li> - entry to program
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/stringFuncs.c">stringFuncs.c</a></li> - functions useful for the string
<li><a href="https://github.com/WalLee2/holbertonschool-low_level_programming/blob/master/simple_shell_practice/useful_extraFuncs.c">useful_extraFuncs.c</a></li> - more functions useful for the string
</ol>


## Built With

* [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)

## Authors

* **Walton Lee** - <a href="https://github.com/WalLee2">Github</a>
* **Jimmy Tran** - <a href="https://github.com/jimmythongtran">Github</a>

## Acknowledgments

* Hat tip to <a href="https://www.holbertonschool.com/">Holberton School</a>
