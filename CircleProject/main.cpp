#include<iostream>
#include"Circle.h"
using namespace std;

void printCircleData(const Circle& circle);
int main()
{
	Circle circle_1;
	Circle circle_2(5);

	printCircleData(circle_1);
	printCircleData(circle_2);

	return 0;
}
void printCircleData(const Circle& circle)
{
	cout << "Circle with radius " << circle.getRadius() << endl;
	cout << "\t Circumference: " << circle.circumference() << endl;
	cout << "\t Area: " << circle.area() << endl;
	cout << endl;

}
