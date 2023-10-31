#include <iostream>
using namespace std;
class Exp3{

double s,l,b,h,res=1;

void shape(double s)
{
cout << " The volume of cube is :";
+s;
cout<< res;
}

void shape(double l,double b,double h)
{
double res = 1;
cout << " The volume of cuboid is :";
res = l*b*h;
cout<<res; 
}

Exp3(double s,double l, double h, double b){
s=s;
l=l;
b=b;
h=h;
}

Exp3(double s){
s=s;
}


Exp3(double l, double h, double b){
l=l;
b=b;
h=h;
}

void operator+(double){
 res=s*s*s;
}

};

int main()
{
int ch;
double s,l,b,h;

cout<< "Enter cube or cuboid(1or2) :";
cin >> ch;

switch(ch)
{
case(1):
	cout<<"Enter the side of cube:";
	cin >> s;
	Exp3(s);
	Exp3::shape(s);
	cout<<"\n";
	break;
case(2):
	cout<< "Enter the sides ( length , breadth and height) of cuboid:";
	cin >> l>>b>>h;
	Exp3(l,b,h);
	Exp3::shape(l,b,h);
	cout<<"\n";
	break;
default:
	cout<<"You entered a wrong value , enter value (1 or 2)\n\n";

}

return 0;
}


