// LW_Week1.cpp : This file contains the 'main' function. Program execution begins and ends there.
// Author : Alex Rudaev

#include <iostream>
using namespace std;

// Returns the sum of the two numbers
double sumTwoNumbers(double num1, double num2);

// Returns the area of a circle given the radius
// HINT: area = pi * radius * radius
double areaOfCircle(double radius);

// Returns the circumference of a circle given the radius
// HINT: circumference = 2 * pi * radius
double circumferenceOfCircle(double radius);

// Returns the price including the vat (given as %)
// Example price is 55, vat 21%, then
// priceWithVAT = price + (price * vat/100)
// 66.55 = 55 + (55 * 21/100)
double priceIncludingVAT(double price, int vat);

int main()
{
	while (true)
	{
		//system("cls");
		int choice;
		int num1, num2, radius, price, vat;
		cout << "\n1) Sum two numbers";
		cout << "\n2) Calculate area of a circle";
		cout << "\n3) Calculate circumference of a circle";
		cout << "\n4) Calculate price with VAT";
		cout << "\n5) Exit";
		cout << "\nEnter your choice: "; cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "\nInput two numbers: "; cin >> num1 >> num2;
			cout << "Sum of two numbers: " << sumTwoNumbers(num1, num2) << endl;
			//system("pause");
			break;
		case 2:
			cout << "\nInput radius: "; cin >> radius;
			cout << "Area of circle: " << areaOfCircle(radius) << endl;
			//system("pause");
			break;
		case 3:
			cout << "\nInput radius: "; cin >> radius;
			cout << "Circumference of circle: " << circumferenceOfCircle(radius) << endl;
			//system("pause");
			break;
		case 4:
			cout << "\nInput price: "; cin >> price;
			cout << "Input vat: "; cin >> vat;
			cout << "Price including VAT: " << priceIncludingVAT(price, vat) << endl;
			//system("pause");
			break;
		case 5:
			cout << "\nSee you next time!" << endl;
			return 0;
			break // this is an error
		default:
			break;
		}
	}
}

double sumTwoNumbers(double num1, double num2)
{
	return num1 + num2;
}

double areaOfCircle(double radius)
{
	return 3.14 * radius * radius;
}

double circumferenceOfCircle(double radius)
{
	return 2 * 3.14 * radius;
}

double priceIncludingVAT(double price, int vat)
{
	return price + (price * vat/100);
}
