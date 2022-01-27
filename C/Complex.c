#include <stdio.h>
#include<math.h> //required for pow and sqrt

typedef struct complx{ //complex structure
    int real,img; //two data members real and imaginary
}Complex;

int main()
{
    Complex cmplx; //Instance of the structure
    printf("Enter the real number :");
    scanf("%d",&(cmplx.real)); //user input for real
    printf("Enter the imaginary number :");
    scanf("%d",&(cmplx.img)); //user input for imaginary
    double R = sqrt(pow(cmplx.real,2)+pow(cmplx.img,2)); //calculating R
    double theta = tan(cmplx.img/cmplx.real); //calculating theta
    printf("R = %f\n",R);
    printf("Theta = %f",theta);
    return 0;
}
