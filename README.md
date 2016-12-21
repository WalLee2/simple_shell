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
[holberton.h](holberton.h) - Header file: struct definitions, macros, function prototypes and standard libraries included
[_getenvAndPath.c](_getenvAndPath.c) - gets the environment and seperates each directory of PATH
[_createTokenAndChildP.c](_createTokenAndChildP.c) - mallocs space to create tokens and creates child processes

## Built With

* [The C Programming Language](https://en.wikipedia.org/wiki/The_C_Programming_Language)

## Authors

* **Walton Lee** - <a href="https://github.com/WalLee2">Github</a>
* **Jimmy Tran** - <a href="https://github.com/jimmythongtran">Github</a>

## Acknowledgments

* Hat tip to <a href="https://www.holbertonschool.com/">Holberton School</a>
