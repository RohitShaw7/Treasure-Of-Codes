#include <stdio.h>

int perfect(int number){ //perfect function
    int i=0, sum=0;
    for(i=1;i<number;i++){
        if(number%i == 0){
            sum = sum + i;    
        }
    }
    if(sum==number){
        return number; //returns the number if perfect
    }
    else
    {
        return -1; //returns -1 if not perfect
    }
}

void factor(int num){ //function to calculate the factors of a number
    int i=0;
    for(i=1;i<num;i++){
        if(num%i == 0){
            printf("%d\t",i);
        }
    } 
}

int main()
{
    int i=0, x=0;
    for(i=2;i<1000;i++){ //iterating from numbers between 1 to 1000.
        x = perfect(i);
        if(x!=-1){
            printf("%i\n",x); //perfect number
            factor(x); // factors of the perfect number
            printf("\n");
        }
    }
    printf("***************************************************************\n");
    printf("%d",perfect(8128)); //This is to check if the function works for numbers greater than 1000. It should return the parameter if it is a perfect number.
    return 0;
}
