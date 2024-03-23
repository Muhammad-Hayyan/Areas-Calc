/* MUHAMMAD HAYYAN
23I-2041_______CY-A
Assignment#06_____Q1*/

#include<iostream>
using namespace std;

float Triangle(float, float);
float Rectangle(float, float);
float Circle(float);
float Sphere(float);
float Cylinder(float, float);

int main()
{
		//Program to calculate areas of triangle, rectangle, circle, sphere, cylinder
	float a, b, c;
	int choice;
	
	cout<<"\n\n\t 1. Rectangle\n";
	cout<<"\n\t 2. Triangle\n";
	cout<<"\n\t 3. Circle\n";
	cout<<"\n\t 4. Sphere\n";
	cout<<"\n\t 5. Cylinder\n";
	cout<<"\n For which shape you want to calculate area? (1 - 5): ";
	cin>>choice;
	
	switch (choice)
	{
		case 1:
			cout<<"\n\n Enter length of rectangle: ";
			cin>>a;
			cout<<"\n\n Enter width of rectangle (in same units): ";
			cin>>b;
			cout<<"\n\n Area of rectangle is: "<<Rectangle(a, b)<<endl;
			break;
		case 2:
			cout<<"\n\n Enter height of triangle: ";
			cin>>a;
			cout<<"\n\n Enter base of triangle (in same units): ";
			cin>>b;
			cout<<"\n\n Area of triangle is: "<<Triangle(a, b)<<endl;
			break;
		case 3:
			cout<<"\n\n Enter radius of circle: ";
			cin>>a;
			cout<<"\n\n Area of circle is: "<<Circle(a)<<endl;
			break;
		case 4:
			cout<<"\n\n Enter radius of sphere: ";
			cin>>a;
			cout<<"\n\n Area of sphere is: "<<Sphere(a)<<endl;
			break;
		case 5:
			cout<<"\n\n Enter height of cylinder: ";
			cin>>a;
			cout<<"\n\n Enter radius of cylinder (in same units): ";
			cin>>b;
			cout<<"\n\n Area of cylinder is: "<<Cylinder(a, b)<<endl;
			break;
		default:
			cout<<"\n\nInvalid Input! Please enter a number between 1 to 5\n";
			
		}
	return 0;
}

float Rectangle(float x, float y)
{
	float area;
	area =  x*y;
	return area;
}
float Triangle(float x, float y)
{
	float area;
	area =  (0.5)*(x*y);
	return area;
}
float Circle(float x)
{
	float area;
	area =  2*3.14159*x;
	return area;
}
float Sphere(float x)
{
	float area;
	area =  4*3.14159*(x*x);
	return area;
}
float Cylinder(float x, float y)
{
	float area;
	area = (2*3.14159*x*y) + (2*3.14159*(y*y));
	return area;
}


		
