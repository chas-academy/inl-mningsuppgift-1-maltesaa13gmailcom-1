#include <stdio.h>
#include <stdlib.h>

int main()
{
    // The Line below must *NOT* be changed or test will fail!
    srand(1);

   
    // Your code goes here
    const int numberOfRolls = 100;

    int rolls[numberOfRolls];
    int occurrences[] = {0,0,0,0,0,0};

    for (int i=0; i<numberOfRolls; i++){
        rolls[i] = (rand() %6) + 1;
        occurrences[rolls[i]-1]++;
    }
    
    //Print number of occurrences per number
    for (int i=0; i<6; i++){
       printf("%d\n", occurrences[i]);
    }

    //Calculate and print sum of rolls
    float sum = 0;

    for (int i=0; i<numberOfRolls; i++){
        sum+=rolls[i];
    }
    printf("%.f\n", sum);

    //Calculate and print the average roll
    float avg = (sum / numberOfRolls);

    printf("%.1f\n", avg);

    return 0;
}
