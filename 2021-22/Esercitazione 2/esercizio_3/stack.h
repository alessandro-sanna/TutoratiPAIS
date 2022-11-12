#ifndef ES3
#define ES3

typedef struct stack *p_stack;

p_stack new_stack(void);
int push (p_stack s, int n);
int pop (p_stack s);
void print_stack (p_stack s);

#endif // ES3