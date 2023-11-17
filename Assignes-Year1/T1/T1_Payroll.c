
#include <stdio.h>

//Objectives: read a number in a given interval
//Parameters: the upper and lower limits of the interval
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
//Objective: compute the salary of a employee given the rule adopted by the govern
//Parameters: the register number of a employee
int calculateSalary(int empNum){
    int i, salarySum;
    //Checks if its a divisor for every number between 1 and the employee number 
    for(i = 1, salarySum = 0; i <= empNum; i++){
        if(empNum % i == 0){
            salarySum += i;
        }
    }
    return salarySum;
}

int main(){
    int n, m;    
    printf("The first input contains the number of employees and the subsequent are the register number of each employee:\n");
    for(n = readFormattedNum(1, 10000); n > 0; n--){
        printf("Employee number:\n");
        m = readFormattedNum(1, 30000);

        printf("Its salary will be: %d\n", calculateSalary(m));
    }
    return 0;
}
