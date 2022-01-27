import java.io.*;
import java.util.Scanner;
public class ReadFile
{
	public static void main(String[] args)
	{
		try {
			File myfile = new File("C:\\Users\\lenovo\\Desktop\\courses.txt"); //Give your file destination along with the filename
			Scanner myRead = new Scanner(myfile); //reading the file
			while(myRead.hasNextLine()) { //iterating through the file
				String data = myRead.nextLine(); //reading each line
				String[] arrstr = data.split(" "); //splitting the string with delimiter as a space and storing it into an array
				for(int i=0;i<arrstr.length;i=i+3) //iterating through the array
					System.out.println("Course code:"+arrstr[i]+", Course major:"+arrstr[i+1]+" and Student number:"+arrstr[i+2]); //printing in the required format
			}
		}catch (FileNotFoundException e) { 
		      System.out.println("Error !!!");
		      e.printStackTrace();
		      }
	}
}
