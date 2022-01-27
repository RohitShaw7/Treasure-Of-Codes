import java.util.Scanner;
public class Main{

     public static void main(String []args){
        Scanner sc = new Scanner(System.in); //object of scanner class
        System.out.println("Give your number:"); 
        int number = sc.nextInt(); //user input of number
        int i=1,rem=0, sum=0, sum1=0, z = number;
        while(number>0)
        {
            rem = number % 10; //remainder of the number
            number = number / 10; //dividing the number by 10
            if(i%2 == 0) //checking even position
            {
                sum = sum + rem;    
            }
            else{ //if odd postion
                sum1 = sum1 + rem;
            }
            i++;
        }
        System.out.println("Total is: "+(sum1-sum)); //Total
        if((sum1-sum)%11 == 0) //checking if total is dividible by 11
        {
            System.out.println(z+" is divisible by 11");
        }
        else{
            System.out.println(z+" is not divisible by 11");
        }
     }
}