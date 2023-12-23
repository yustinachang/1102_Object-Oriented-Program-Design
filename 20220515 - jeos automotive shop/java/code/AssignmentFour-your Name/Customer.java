
/**
 * Write a description of class Customer here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class Customer
{
    // instance variables - replace the example below with your own
    private String Cust_Name,Cust_Address,Cust_Phno;

    /**
     * Constructor for objects of class Customer
     */
    public Customer(String cname,String caddress,String cphno)
    {
        // initialise instance variables
       Cust_Name=cname;
       Cust_Address=caddress;
       Cust_Phno=cphno;
    }

    /**  
     * 
     * 
     * Disply Customer Information
     */
    public void displayCustInfo()
    {
        System.out.println("Customer Name : "+Cust_Name);
        System.out.println("Address       : "+Cust_Address);
        System.out.println("Phone Number  : "+Cust_Phno);
    }
}
