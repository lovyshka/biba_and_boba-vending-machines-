#include <stdio.h>
#include <ncurses.h>

enum list_of_transitions{
    S0, // initial state
    S1, // 1 ruble
    S2, // 2 rubles
    S3, // 3 rubles
    S4, // 4 rubles
    S5, // 5 rubles
    S6, // 6 rubles
    S7, // 7 rubles
    S8, // 8 rubles
    S9, // 9 rubles
};

struct curr_params_of_machine{
    int curr_sum; //the same as  number of transition cause we cant 
                  //collect more then cost of product, which os 10 by my var 
};

void print_machine();
void print_table(enum list_of_transitions state);
void init_vales_of_machine(struct curr_params_of_machine * data);