
/**
 * Write a description of class Car here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Car
{
    // instance variables - replace the example below with your own
   private String Car_Make,Car_Model;
   private int model_year;
    /**
     * Constructor for objects of class Car
     */
    public Car(String cmake,String cmodel,int mkyear)
    {
        // initialise instance variables
        Car_Make=cmake;
        Car_Model=cmodel;
        model_year=mkyear;
    }

    /**
     * An example of a method - replace this comment with your own
     * 
     * @param  y   a sample parameter for a method
     * @return     the sum of x and y 
     */
    public void displaycarinf()
    {
        System.out.println("Car Make   : "+Car_Make);
        System.out.println("Car Model  : "+Car_Model);
        System.out.println("Model year : "+model_year);
    }
}
