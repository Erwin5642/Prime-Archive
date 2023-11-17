#include <stdio.h>
#include <math.h>
#include <string.h>
//This constant sets the total number of floors in the building
#define numFloors 3

//Objectives: get and return a valid number of employees in a given floor
//Parameters: the number of the current floor
int readNumEmployees(int floor)
{
    int n;
    do
    {
        printf("Inform the number of employees on the floor (%d):\n", floor);
        scanf("%d", &n);
        if ((n > 1000) || (n < 0))
        {
            printf("Invalid number of employees! Please try again giving a number between 0 and 1000!\n");
        }
    } while ((n > 1000) || (n < 0));

    return n;
}

//Objectives: calculate the best time and show the floors where the machine could be
//Parameters: the accumulated time it takes employees on each floor to get a expresso
void showBestFloors(int times[numFloors])
{
    int smallestTime, i, cont;
    //Calculate the smallest time comparing to other time values
    for (i = 1, smallestTime = times[0]; i < numFloors; i++)
    {
        if (smallestTime > times[i])
        {
            smallestTime = times[i];
        }
    }
    //Determine and show the results of the previous calculation in a formatted form
    printf("The best time would be: %d\n", smallestTime);
    printf("The machine should be on the floor(s) of number(s): ");
    for (i = 0, cont = 0; i < numFloors; i++)
    {
        if (smallestTime == times[i])
        {
            //Print " or " if some other floor was already printed
            if (cont == 1)
            {
                printf(" or ");
            }
            //Show the floor based on the index of the vector
            printf("%d", i + 1);
            cont = 1;
        }
    }
    printf("\n");
}

int main()
{
    int Ai, i, j, timeForFloor[numFloors];
    //Initialize the vector to start with zero 
    memset(timeForFloor, 0, sizeof(int) * numFloors);
    //Read the number of employees in each floor and calculate the time it takes to get a expresso in each floor
    for (i = 1; i <= numFloors; i++)
    {
        Ai = readNumEmployees(i);
        for (j = 0; j < numFloors; j++)
        {
            //The equation consider the distance between the current floor (j + 1) and the employees floor (i)
            //and the round trip time
            timeForFloor[j] += 2 * Ai * abs(i - (j + 1));
        }
    }
    //Call this function to calculate the best time and show the floors with it
    showBestFloors(timeForFloor);
    return 0;
}
