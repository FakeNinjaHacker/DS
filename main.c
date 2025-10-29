#include<stdio.h>
#include "calculator.h"

int main(){

    int num_1,num_2,choose;
    char word[100];

    printf("\n");
    printf("   ***---Welcome To Our Calculator App---***    ");
    printf("\n________________________________________________");
    printf("\nWhat Do You Want To Do With This Calculator?");
    printf("\n------------------------------------------------");
    printf("\n 1. Addition");
    printf("\n 2. Substraction");
    printf("\n 3. Multiplication");
    printf("\n 4. Division");
    printf("\n 5. Modulus");
    printf("\n------------------------------------------------");
    printf("\n Please Enter The Function Number [1/2/3/4/5] : ");
    scanf("%d",&choose);
    printf("------------------------------------------------");

    //gets(word);
    
    if(choose == 1){

        printf("\nEnter Number One : ");
        scanf("%d",&num_1);

        printf("\nEnter Number Two : ");
        scanf("%d",&num_2);

        int summation = add(num_1,num_2);
        printf("----------------------\n");
        printf("| Summation    : %d  |\n",summation);
        printf("----------------------");
    }

    if(choose == 2){

        printf("\nEnter Number One : ");
        scanf("%d",&num_1);

        printf("\nEnter Number Two : ");
        scanf("%d",&num_2);

        int substraction = sub(num_1,num_2);
        printf("-------------------------\n");
        printf("| Substraction    : %d  |\n",substraction);
        printf("-------------------------");
    }

    if(choose == 3){

        printf("\nEnter Number One : ");
        scanf("%d",&num_1);

        printf("\nEnter Number Two : ");
        scanf("%d",&num_2);

        int multiplication = mul(num_1,num_2);
        printf("---------------------------\n");
        printf("| Multiplication    : %d  |\n",multiplication);
        printf("---------------------------");
    }
    
    if(choose == 4){

        printf("\nEnter Number One : ");
        scanf("%d",&num_1);

        printf("\nEnter Number Two : ");
        scanf("%d",&num_2);

        int division = div(num_1,num_2);
        printf("---------------------\n");
        printf("| Division    : %d  |\n",division);
        printf("---------------------");
    }

     if( choose == 5){
         int modulus = mod(num_1,num_2);
         printf("--------------------\n");
         printf("| Modulus    : %d  |\n",modulus);
         printf("--------------------");
     }

    // if(word == 'Add' || word == 'add'){

    //     printf("\nEnter Number One : ");
    //     scanf("%d",&num_1);

    //     printf("\nEnter Number Two : ");
    //     scanf("%d",&num_2);

    //     int summation = add(num_1,num_2);
    //     printf("----------------------\n");
    //     printf("| Summation    : %d  |\n",summation);
    //     printf("----------------------");
    // }

    // if(word == 'Sub' || word == 'sub'){

    //     printf("\nEnter Number One : ");
    //     scanf("%d",&num_1);

    //     printf("\nEnter Number Two : ");
    //     scanf("%d",&num_2);

    //     int substraction = sub(num_1,num_2);
    //     printf("-------------------------\n");
    //     printf("| Substraction    : %d  |\n",substraction);
    //     printf("-------------------------");
    // }

    // if(word == 'Mul' || word == 'mul'){

    //     printf("\nEnter Number One : ");
    //     scanf("%d",&num_1);

    //     printf("\nEnter Number Two : ");
    //     scanf("%d",&num_2);

    //     int multiplication = mul(num_1,num_2);
    //     printf("---------------------------\n");
    //     printf("| Multiplication    : %d  |\n",multiplication);
    //     printf("---------------------------");
    // }
    
    // if(word == 'Div' || word == 'div'){

    //     printf("\nEnter Number One : ");
    //     scanf("%d",&num_1);

    //     printf("\nEnter Number Two : ");
    //     scanf("%d",&num_2);

    //     int division = mul(num_1,num_2);
    //     printf("---------------------\n");
    //     printf("| Division    : %d  |\n",division);
    //     printf("---------------------");
    // }

    //  if(word == 'Mod' || word == 'mod'){
    //      int modulus = mod(num_1,num_2);
    //      printf("--------------------\n");
    //      printf("| Modulus    : %d  |\n",modulus);
    //      printf("--------------------");
    //  }

    return 0;
}