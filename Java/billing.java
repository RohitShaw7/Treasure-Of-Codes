import java.util.*; //importing util package
public class Main
{
	public static void main(String[] args) //main method
	{
		Scanner sc = new Scanner(System.in); //creating an object of Scanner class
		double item1 = 101.00; //declaring and defining value of item1
		double item2 = 119.25; //declaring and defining value of item2
		double item3 = 160.75; //declaring and defining value of item3
		double item4 = 203.00; //declaring and defining value of item4
		double item5 = 109.12; //declaring and defining value of item5
		double bill=0.0; //declaring and initializing the bill
		
		//printing the Inventory
		System.out.println("Item\tValue"); 
		System.out.println("1\t"+item1);
		System.out.println("2\t"+item2);
		System.out.println("3\t"+item3);
		System.out.println("4\t"+item4);
		System.out.println("5\t"+item5);
		
		System.out.println("\nEnter the number of items :"); //asking user to input the number of items for bill
		int items = sc.nextInt(); //storing the user input into items

		for(int i=0;i<items;i++) //iterating items number of times
		{
		    System.out.println("Enter Item : "); //asking user to input the item
		    int choosen_item = sc.nextInt(); //storing user input to choosen_item
		    System.out.println("Enter Quantity : "); //asking user to input the quantity
		    int choosen_quantity = sc.nextInt(); //storing user input to choosen_quantity
		    
		    if(choosen_item==1) //checking if the choice is item1
		    {
		        bill+=(choosen_quantity*item1); //calculating the bill 
		    }
		    else if(choosen_item==2) //checking if the choice is item2
		    {
		        bill+=(choosen_quantity*item2); //calculating the bill 
		    }
		    else if(choosen_item==3) //checking if the choice is item3
		    {
		        bill+=(choosen_quantity*item3); //calculating the bill 
		    }
		    else if(choosen_item==4) //checking if the choice is item4
		    {
		        bill+=(choosen_quantity*item4); //calculating the bill 
		    }
		    else //for item5 case
		    {
		        bill+=(choosen_quantity*item5); //calculating the bill 
		    }
		}
		System.out.println("\nThe Bill : "+bill); //printing the bill
	}
}
