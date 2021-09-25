// A program that will compute the tax and tip on a bill for a patron.
// First make array for prices of the food, after make a 2d string array for the names.
// Use srand to init then use rand to pick random food variable along with the price to test.
// Display all costs including tax and tip.

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main () 
{
    /* array for the prices of food */
    double price[] = { 9.95 , 4.55, 13.25, 22.35 };
  

    /* 2d string array for food names */
    char foods[4][15] =
        {"Salad", "Soup", "Sandwich", "Pizza"};

    time_t t;
    /* Init random number gen and define int i using rand */
    srand((unsigned) time(&t));

    int i = rand() %4 ;
   

    /* picks random order price */
    
      printf("%.2f dollars is the price of your food before tax.\n",  price[i] );
      printf("%s is what you ordered.\n", foods[i]);

    double meal_amount;
    double tax_percent;
    double meal_and_tax;
    double tip_percent;
    double total_bill;

    meal_amount = price [i];

    printf("What percent of tax will you be using on this purchase?\n");
    scanf("%lf", &tax_percent);

    meal_and_tax = meal_amount * (1+(tax_percent/100));

    printf("%.2f is the total amount for your food in dollars ,including tax and excluding tip\n", meal_and_tax);
    
    
    printf("What percent of the meal's price did you want to tip today?\n");
    scanf("%lf", &tip_percent);

    total_bill = meal_and_tax * (1+(tip_percent/100));
    printf("%.2f dollars is your total ammount.\n", total_bill);
    
    
    
    
    return(0);
}
