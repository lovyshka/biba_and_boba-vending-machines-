#include "header.h"


int main(){
    print_machine();
    struct curr_params_of_machine params;
    init_vales_of_machine(&params);
    enum list_of_transitions state = S0;
    int flag = 1;
    int inserted_coin;
    int change;

    while (flag == 1){
        printf("---------------------------------------------------\n");
        print_table(state);
        printf("Insert coin [1,2,5,10], or press enter -1 to exit\n");
        scanf("%d", &inserted_coin);
        if (inserted_coin == 1 || inserted_coin == 2 || inserted_coin == 5 || inserted_coin == 10){
            params.curr_sum += inserted_coin;
            if (params.curr_sum <= S9){
                state = params.curr_sum;
                printf("---------------------------------------------------\n");
                printf("We are at the state: %d\n", state);
            }
            else{
                state = S0;
                change = params.curr_sum - 10;
                params.curr_sum = 0;
                printf("---------------------------------------------------\n");
                printf("Enough money for product\n");
                printf("Your change is: %d\n", change);
                printf("Going to the state: %d\n", state);
            }
        }
        else if (inserted_coin == -1){ 
            flag = 0;
            change = params.curr_sum;
            printf("---------------------------------------------------\n");
            printf("Your change is: %d\n", change);
        }
        else{
            printf("---------------------------------------------------\n");
            printf("Unkown coin, inser one more\n");
        } 
    }
    return 0;
}

void init_vales_of_machine(struct curr_params_of_machine * data){
    data->curr_sum = 0;
}

void print_table(enum list_of_transitions state){
    char * format[] = {"S0", "S1", "S2", "S3", "S4", "S5", "S6", "S7", "S8", "S9"};
    int cnt_of_state = 10;
    printf("\t\tSTATES\n");
    for (int i = 0; i < cnt_of_state; i++){
        printf("\t%d roubles inside - %s",i, format[i]);
        if (i == state) printf("  <-----");
        printf("\n");
    }
}