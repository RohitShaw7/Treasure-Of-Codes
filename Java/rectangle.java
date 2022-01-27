class rectangle //rectangle class
{
    private double length, width; //instance variables length and width
    
    rectangle(double l,double w) //parameterized constructor
    {
        length = l; //setting length as l
        width = w; //setting width as w
    }
    
    //getters
    double getLength() //getter method for length
    {
        return length;
    }
    
    double getWidth() //getter method for width
    {
        return width;
    }
    
    //setters
    void setLength(double l) //setter method for length
    {
        if(l<0) //checking if the l is negative
        {
            System.out.println("Negative value error"); //error message
        }
        else
        {
            length = l; //setting length as l
        }
    }
    
    void setWidth(double w) //setter method for width
    {
        if(w<0) //checking if the w is negative
        {
            System.out.println("Negative value error"); //error message
        }
        else
        {
            width = w; //setting width as w  
        }
    }
    
    double rectangleArea(double l,double w) //method to calculate the rectangle area
    {
        return (l*w); //returning the Area
    }
}

public class Main
{
	public static void main(String[] args) {
	}
}
