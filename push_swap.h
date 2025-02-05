#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

typedef struct s_stack
{
    int data;
    int index;
    struct s_stack *next;
} t_stack;

#endif