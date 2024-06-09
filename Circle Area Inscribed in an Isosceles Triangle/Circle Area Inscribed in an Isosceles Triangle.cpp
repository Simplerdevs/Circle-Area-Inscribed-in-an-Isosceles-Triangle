
						/* Program to Calculate Circle Area Inscribed in an Isosceles Triangle then print it on screen  */
#include <iostream>
#include <cmath>
using namespace std;


int main()



{
 
	double height, base;
	cout << "Please enter the Height of triangle ! " << endl;
	cin >> height;

	cout << "Please enter the base of triangle ! " << endl;
	cin >> base;


	const double PI = 3.14159265358979323846;
	double Area = (PI * base * base / 4) * ((2 * height - base) / (2 * height + base)); //  ->> the rule 

	cout << "Circle Area Inscribed in an Isosceles Triangle is " << Area << endl;


	return 0;

	// Created by @ilyes_Trabelsi 
}

