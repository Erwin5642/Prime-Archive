#include <stdio.h>

//Objectives: read a number in a given interval
//Parameters: the lower and upper limits of the interval
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
//Objective: determine if a number is supersticious
//Parameter: a number 
int isSupersticiousNumber(int num){
    while (num > 0)
    {
        if((num % 10 == 4) || (num % 100 == 13)){
            return 1;
        }
        num /= 10;
    }
    return 0;
}
//Objective: calculate the value a given floor should have
//Parameters: the number of the floor
int calculateValueFloor(int floorNumber){
    int n, i;
    //It iterates normaly until find some superticious number and jump ahead of it on the count 
    for(i = 1, n = 0; i <= floorNumber; i++, n++){
        if(isSupersticiousNumber(i)){
            n++;
        }
    }
    return n;
}

int main(){
    int floor;

    do
    {
        floor = readFormattedNum(1, 1000000);
        printf("The number in this floor should be: %d\n", calculateValueFloor(floor));
    } while (floor != 0);
    
    return 0;
}
