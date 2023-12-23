#include <iostream>
#include <cmath>
using namespace std;

class Circle
{	private:
		double radius;
	public:
		void setRadius(double r){
			radius=r;
		}
		double calcArea(){
			return 3.14*pow(radius,2);
		}
};

int main(){
	double radius;
	Circle circle1,circle2;
	cout<<"what is the radius of the first circle?";
	cin>>radius;
	circle1.setRadius(radius);
	
	cout<<"what is the radius of the second circle?";
	cin>>radius;
	circle2.setRadius(radius);
	
	cout<<"the area of circle1 is"<<circle1.calcArea()<<endl;
	cout<<"the area of circle2 is"<<circle2.calcArea()<<endl;
	
	cin.get();
	return 0;	
}
