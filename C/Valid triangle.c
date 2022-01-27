#include <stdio.h>
#include <stdbool.h> //For using bool type

bool is_Valid(double side1, double side2, double side3){
    if( side1 + side2 > side3 && side1 + side3 > side2 && side2 + side3 > side1){ //Condition for a valid triangle
        double area = 0.5 * side2 * side3; //Calculating area of the triangle
        printf("\nThe area is : %lf\n",area);
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    //Testing with example numbers
    printf("%d",is_Valid(10,10,20)); //Outputs 0 that is false
    printf("%d",is_Valid(10,12,20)); //Outputs the area of the triangle and 1 that is true
    return 0;
}
