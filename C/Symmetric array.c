#include <stdio.h>

int main()
{
    int arr[5] = {0,0,0,0,0}, i=0; //Intializing the array for input
    int arr1[5] = {0,0,0,0,0}, flag=0; //Intializing another array to store the reverse of the original array and intializing a counter variable
    printf("Enter 5 elements : \n"); //Asking user to input 5 elements
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]); //Storing user input in the array
    }
    for(i=4;i>=0;i--) //Reverse loop
    {
        arr1[4-i] = arr[i]; //Reversing the array. We are subtracting the index position with 4 because array index starts from 0.
    }
    for(i=0;i<5;i++) 
    {
        if(arr[i]!=arr1[i]) //Comparing if the array elements are same or not
        {
            flag=1; //If there is any element which does not match the loop will break and the counter will be set up.
            break;
        }
    }
    if(flag==0) //If the counter remains 0
    {
        printf("Symmetric");   // Printing Symmetric
    }
    else
    {
        printf("Not Symmetric");  //Else Printing Not Symmetric
    }
    
    return 0;
}