
/**
 * Write a description of class PrepareQuote here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
import java.util.*;

public class PrepareQuote
{
    public static void main(String[] args)
    {
        Scanner readData=new Scanner(System.in);
        
        String Cust_Name,Cust_Address,Cust_Phno;
        String Car_Make,Car_Model;
        int model_year;
        double parts;
        double quote_labor,tax;

        
        Customer custObj;
        Car carObj;
        ServiceQuote squoteObj;
        try
        {
            System.out.println("Enter the Customer Name : ");
            Cust_Name=readData.next();
            System.out.println("Enter the Customer Address : ");
            Cust_Address=readData.next();
            System.out.println("Enter the Customer Phone Number : ");
            Cust_Phno=readData.next();            
            custObj=new Customer(Cust_Name,Cust_Address,Cust_Phno);
            
            System.out.println("Enter the Car Make : ");
            Car_Make=readData.next();
            System.out.println("Enter the Car Model : ");
            Car_Model=readData.next();
            System.out.println("Enter the Model Year : ");
            model_year=readData.nextInt();            
            carObj=new Car(Car_Make,Car_Model,model_year);
            
            System.out.println("Enter the Quote Amount : ");
            quote_labor=readData.nextDouble();
            System.out.println("Enter the Parts Amount : ");
            parts=readData.nextDouble();
            System.out.println("Enter the Tax in % : ");
            tax=readData.nextDouble();            
            squoteObj=new ServiceQuote(quote_labor,parts,tax);
            
            custObj.displayCustInfo();
            carObj.displaycarinf();
            squoteObj.displaySQuote();
        }
        catch(Exception ex)
        {
            System.out.println("Error : " +ex.getMessage());
        }
        
    }
}
