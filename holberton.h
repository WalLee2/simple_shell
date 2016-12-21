#ifndef HOLBERTON_H
#define HOLBERTON_H
#include <string.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stddef.h>
extern char **environ;

/**
 * struct builtins_s - a struct used for an array of structs
 * @command: a pointer to the command
 * @ptr: pointer to an array of characters
 */

typedef struct builtins_s
{
	char *command;
	void (*ptr)(char **);
} builtins_f;
int printing_env(void);
char *_getenv(const char *name);
char *_strdup(char *str);
char **_createToken(char *user_input);
char *_strstr(char *haystack, char *needle);
int checking_built(char **arr);
void ex_it(char **arr);
int checking_built(char **arr);
void _createChild_P(char **arrayStr, char **_getPATH_res);
char **_getPATH(char *str, char **tok_UsInput);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strcat(char *dest, char *src);
char *_memset(char *s, char b, unsigned int n);
void _createChild(char **arrayStr);
int _storeEnv(const char *name);
#endif
