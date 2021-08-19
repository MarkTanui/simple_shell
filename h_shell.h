#ifndef HEADER
#define HEADER
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>
#include <stdarg.h>
#include <signal.h>

/**
 * struct builtins - builtin command for shell
 * @cmd: cmd
 * @p_f: pointer to builtin func
 *
 *
 *Description: struct for builtin func and command
 */

typedef struct builtins
{
  char *cmd;
  int (*p_f)(char **as, char **e);
} _built;

void _path(char **ch, char **e);
int exit_s(char **as, char **e);
void sig_hand(int sig_n);
