#include <stdio.h>

int DivisionQuotient(int n,int m) //recursive function to calculate the Quotient after division of n and m
{
    if(n<m || m==0) //if the denominator is greater than numerator or equals 0
    {
        return 0; //returns 0
    }
    else if((n-m)==0) //if the difference of the numerator and denominator is 0
    {
        return 1; //returns 1
    }
    else
    {
        return (DivisionQuotient((n-m),m)+1); //returns DivisionQuotient with (numerator-denominator) and denominator then added with 1
    }
}

int main()
{
    int n=4, m=3; //declaring and defining n and m
    int quotient = DivisionQuotient(n,m); //storing the ouput of the recursive function passing n and m
    printf("%d",quotient); //printing the quotient result
    return 0;
}
