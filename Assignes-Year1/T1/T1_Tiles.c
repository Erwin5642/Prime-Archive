#include <stdio.h>
//Objectives: read adn return a number in a given interval
//Parameters: inferior and superior limits of the interval
int readFormattedNum(int min, int max)
{
    int n = 0;
    if (!(max < min))
    {
        do
        {
            printf("Inform a number between %d and %d:\n", min, max);
            scanf("%d", &n);
            if (((n > max) || (n < min)) && (n != 0))
            {
                printf("Invalid number! Please try again!\n");
            }
        } while ((n > max) || (n < min) && (n != 0));
    }
    return n;
}

int main()
{
    int n, a, b, i, cont;

    do
    {
        printf("Inform the numbers to test or zero on the first test to stop:\n");
        n = readFormattedNum(3, 10000);
        a = readFormattedNum(2, n);
        b = readFormattedNum(2, n);
        //Run the test if the user has not insert 0 in the first test 
        if ((a != 0) || (b != 0) || (n != 0))
        {
            printf("Given a = %d, b = %d and n = %d\n", a, b, n);
            //It checks all the numbers that are divisible by a or b from 3 to n and counts them
            for (i = 3, cont = 0; i <= n; i++)
            {
                if ((i % a == 0) || (i % b == 0))
                {
                    cont++;
                }
            }
            printf("The total number of tiles painted in blue is: %d\n", cont);
        }
    } while ((a != 0) || (b != 0) || (n != 0));
  return 0;
}
