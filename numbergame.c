// Make a program that uses random number and has user guess it
// I will use rand and recursion

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    char menu_option;

   printf("Main Menu for the Number Game\n");
   printf("Press 1 to play a game\n");
   printf("Press 2 to change the max number\n");
   printf("Press 3 to quit\n");
   scanf("%c", &menu_option);

   switch(menu_option){
       case '1': ;
       int max_number;
       int random_number;
       int user_number;
       max_number = 10;
       time_t t;
       srand((unsigned) time(&t));
       int i = rand() %max_number;
       for( i = 0 ; i < max_number ; i++);
       random_number = rand() %10;

       while(1){
       printf("\nEnter your guess\n");
       scanf("%d", &user_number);

       if ( random_number == user_number){
           printf("You are correct, congratulations!");
           break;
       }else if ( random_number > user_number){
           printf("My number is great than %d", user_number);
       }else{
           printf("My number is smaller than %d", user_number);
       }

       }
           break;
           
           case '2': ;
           printf(" Enter new max value\n");
           scanf( &max_number);

           break;

           case '3': ;
           printf(" Thanks for playing goodbye!\n");

           break;

           case 'q': ;
           printf(" Back to menu\n");

    
   }
        return 0;
   }
