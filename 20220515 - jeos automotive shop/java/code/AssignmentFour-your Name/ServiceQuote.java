
/**
 * Write a description of class ServiceQuote here.
 * 
 * @author (your name) 
 * @version (a version number or a date)
 */
public class ServiceQuote
{
    // instance variables - replace the example below with your own
    private double parts;
    private double  quote_labor,tax,taxamount,total;

    /**
     * Constructor for objects of class ServiceQuote
     */
    public ServiceQuote(double qlabor,double tpart1,double ttax)
    {
        // initialise instance variables
       quote_labor=qlabor;
       parts=tpart1;     
       tax=ttax;
    }

    /**
     * An example of a method - replace this comment with your own
     *     
     */
    public void displaySQuote()
    {
       System.out.println("Quote for Labor : "+quote_labor);
       taxamount=(quote_labor+parts)*tax/100;
       total=quote_labor+parts+taxamount;
       System.out.println("Tax Amout       : "+taxamount);
       System.out.println("                 -----------");
       System.out.println("Total Amout     : "+total);
       System.out.println("                 -----------");
       
    }
}
