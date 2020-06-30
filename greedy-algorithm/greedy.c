//greedy algorithm implementation to find least number of coins owed
#include<stdio.h>
#include<cs50.h>
#include<math.h>

int main(void){
    float input;
    int quart, dime, nick, penn;
    int count = 0;
    do{
        input = get_float("Change owed\n"); //user input prompt until it's positive
    }
    while (input<0);
    
    int cents = round(input*100);    //to ensure accuracy
    printf("%i\n", cents);

    for (quart=1; cents>=25; quart++)    //counting quarters required
    {
        cents = cents - 25;
        count++;
    }
    for (dime = 1; cents >= 10; dime++)     ////counting dimes required
    {
        cents = cents - 10;
        count ++;
    }
    for (nick = 1; cents >= 5; nick++) //counting nickels required
    {
        cents = cents - 5;
        count++;
    }
    for (penn = 1; cents >= 1; penn++)     //counting pennies required
    {
        cents = cents - 1;
        count++;
    }
    printf("%i\n", count);
}