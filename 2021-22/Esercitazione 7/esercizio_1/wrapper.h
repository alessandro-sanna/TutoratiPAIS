#ifndef WRAPPER_H_ES1
#define WRAPPER_H_ES1

typedef struct Wrapper *p_wrapper;
typedef _Bool (*criterion_s) (int, int);
typedef void (*algorithm_s) (p_wrapper);

p_wrapper new_wrapper(int array[], int size, char algorithm_control, char criterion_control);

int *get_array(p_wrapper wrapper);
int get_size(p_wrapper wrapper);
algorithm_s get_algorithm(p_wrapper wrapper);
criterion_s get_criterion(p_wrapper wrapper);

#endif