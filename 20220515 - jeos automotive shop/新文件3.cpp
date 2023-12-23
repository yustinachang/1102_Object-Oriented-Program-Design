//python
class Customer:
	def __init__(self, name, address, phone):
		self.__name = name
		self.__address = address
		self.__phone = phone
	def set_name(self,name):
		self.__name = name
	def set_address(self,address):
		self.__address = address
	def set_phone(self,phone):
		self.__phone = phone
	def get_name(self):return self.__name
	def get_address(self):return self.__address
	def get_phone(self):return self.__phone

class Car:
	def __init__(self,make,model,year):
		self.__make = make
		self.__model = model
		self.__year = year
	def set_make(self,make):
		self.__make = make
	def set_model(self,model):
		self.__model = model
	def set_year(self,year):
		self.__year = year
	def get_make(self):return self.__make
	def get_model(self):return self.__model
	def get_year(self):return cself.__year

TAX_RATE =0.05 # 5%
class ServiceQuote:
def __init__(self,pcharge,lcharge):
	self.__parts_charges = pcharge
	self.__labor_charges = lcharge
def set_parts_charges(self,pcharge):
	self.__parts_charges = pcharge
def set_labor_charges(self,lcharge):
	self.__labor_charges = lcharge
def get_parts_charges(self):return self.__parts_charges
def get_labor_charges(self):return self.__labor_charges
def get_sales_tax(self):return __parts_charges * TAX_RATE
def get_total_charges(self):return __parts_charges + __labor_charges +(__parts_charges * TAX_RATE)


namespace JoesAutomotiveFrm
{
    public partial class frmJoesAutomotive : Form
    {
        public frmJoesAutomotive()
        {
            InitializeComponent();
        }
     private void calculateTotalButton_Click(object sender, EventArgs e)
        {
            OilLubeCharges();
            FlushCharges();
            MiscCharges();
            PartsAndLaborCharges();
            TaxCharges();
            TotalCharges();
        }
        //Method for calculating oil and lube charges
        private int OilLubeCharges()
        {
            int total = 0;

            //add 26 dollars if oil is checked 
            if (oilChangeBx.Checked)
            {
                total += 26;
                servicesOutputLb.Text = total.ToString("c");
            }

            //add 18 dollars to total when lube is checked
            if (lubeJobBx.Checked)
            {
                total += 18;
                servicesOutputLb.Text = total.ToString("c");

                return total;
            }
            else
            {
                return total;
            }
        }


        private int FlushCharges()
        {
            int total = 0;
            //adds 30 dollars when radiatior flush is checked
            if (radiatorFlushBx.Checked)
            {
                total += 30;
                servicesOutputLb.Text = total.ToString("c");
            }
            //add 80 dollars if trans flush is checked
            if (transFlushBx.Checked)
            {
                total += 80;
                servicesOutputLb.Text = total.ToString("c");
                return total;
            }
            else
            {
                return total;
            }
        }

        private int MiscCharges()
        {
            //define local variable
            int total = 0;
            //if inspection is checked, add to total
            if (inspectionBx.Checked)
            {
                total += 15;
                servicesOutputLb.Text = total.ToString("c");
            }
            //add 100 if replace muffler is checked
            if (replaceMufflerBx.Checked)
            {
                total += 100;
                servicesOutputLb.Text = total.ToString("c");
            }
            // adds 20 if tire rotation is checked
            if (tireRotationBx.Checked)
            {
                total += 20;
                servicesOutputLb.Text = total.ToString("c");
                return total;
            }
            else
            {
                return total;
            }
        }
        private int PartsAndLaborCharges()
        {
            int total = 0;
            int labor;
            int parts;

            if (int.TryParse(laborTextBox.Text, out labor))
            {
                servicesOutputLb.Text = labor.ToString("c");
                total = labor * 40;
            }
            if (int.TryParse(partsTextBox.Text, out parts))
            {
                totalOutputLb.Text = parts.ToString("c");

                return total;
            }
            else
            {
                return total;
            }
        }
        private decimal TaxCharges()
        {
            decimal parts = 0;
            decimal addTax;
            

            addTax = parts * 0.06m;
            taxOutputLb.Text = addTax.ToString("c");
            return addTax;
        }

        private decimal TotalCharges()
        {
            decimal total;

            total = OilLubeCharges() + PartsAndLaborCharges () + FlushCharges() + MiscCharges() + TaxCharges();
            totalOutputLb.Text = total.ToString("c");
            return total;
        
    
        }

        private void clearBtn_Click(object sender, EventArgs e)
        {
            // Clears all fields
            oilChangeBx.Checked = false;
            lubeJobBx.Checked = false;
            radiatorFlushBx.Checked = false;
            transFlushBx.Checked = false;
            inspectionBx.Checked = false;
            replaceMufflerBx.Checked = false;
            tireRotationBx.Checked = false;
            partsTextBox.Text = "";
            laborTextBox.Text = "";
            servicesOutputLb.Text = "";
            partsOutputLb.Text = "";
            taxOutputLb.Text = "";
            totalOutputLb.Text = "";


        }

        private void exitBtn_Click(object sender, EventArgs e)
        {
            this.Close();
        }
    }
}



