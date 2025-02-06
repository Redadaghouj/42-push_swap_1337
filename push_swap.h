#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

#include <stdio.h> //-REMOVE-
#include <unistd.h>
#include <stdlib.h>
#include <limits.h>

typedef struct s_stack
{
    int value;
    int index;
    struct s_stack *next;
} t_stack;

#endif