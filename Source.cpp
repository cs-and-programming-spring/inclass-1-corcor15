


/***********************************************
* Name: Matthew Corcoran
* Email: corcor15@students.rowan.edu
***********************************************
* Purpose:
*  This program calculates area of circle
***********************************************/

#include <iostream>

using namespace std; 

const  float PI = 3.14159;

int main()
{

	float radius, area, circumference;

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius to compute area of circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute area to PI*radius*radius
	area = PI * radius *radius;

	//Display the area 
	cout << " The area is = " << area << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	
	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in miles and converts them into kilometers" << endl;
	cout << " ******************************************\n\n";

	float miles, kilometers;
	
	//Get user input
	cout << "Please input  miles: ";
	cin >> miles;

	//Compute miles to kilometers, formula is miles/0.62137
	kilometers = miles / 0.62137;

	//Display kilometers
	cout << kilometers << " kilometers \n\n";
	cout << "Program has ended" << endl;

	system("pause");


	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in radius and calculates the circumference of a circle" << endl;
	cout << " ******************************************\n\n";

	//Get user input
	cout << "Please input radius: ";
	cin >> radius;

	//Compute 2*PI*radius
	circumference = 2 * PI*radius;

	//Display circumference
	cout << "Circumference: " << circumference << "\n\n";
	cout << "Program has ended" << endl;

	system("pause");

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in miles and converts into millimeters, centimeters and meters" << endl;
	cout << " ******************************************\n\n";

	float meters, milli, centi;

	//Get user input
	cout << "Please input miles: ";
	cin >> miles;

	//Compute millimeters, centimeters, meters
	kilometers = miles / 0.62137;
	meters = kilometers / 1000;
	milli = meters * 1000;
	centi = meters * 100;
	
	//Display new measurements
	cout << meters << " meters \n\n";
	cout << centi << " centimeters \n\n";
	cout << milli << " millimeters \n\n";
	cout << "Program has ended" << endl;
	
	system("pause");

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in Celsius temperatures and converts into Fahrenheit" << endl;
	cout << " ******************************************\n\n";

	float fahrenheit, celsius;

	//Get user input
	cout << "Please input degrees Celsius: ";
	cin >> celsius;

	//Compute degrees Fahrenheit
	fahrenheit = ((9 / 5)*celsius) + 32;

	//Display Fahrenheit temperature
	cout << fahrenheit << " degrees Fahrenheit \n\n";
	cout << "Program has ended" << endl;

	system("pause");

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program takes in an age in years and computes the equivalent number of months, days, hours, minutes and seconds" << endl;
	cout << " ******************************************\n\n";

	float years, months, days, hours, minutes, seconds;

	//Get user input
	cout << "Please enter your age in years: ";
	cin >> years;

	//Compute months, days, hours, minutes, seconds
	months = years * 12;
	days = years * 365.25;
	hours = days * 24;
	minutes = hours * 60;
	seconds = minutes * 60;

	//Display age as months, days, hours, minutes, seconds
	cout << "You are: \n\n";
	cout << months << " months old \n\n";
	cout << days << " days old \n\n";
	cout << hours << " hours old \n\n";
	cout << minutes << " minutes old \n\n";
	cout << seconds << " seconds old \n\n";
	cout << "Program has ended" << endl;

	system("pause");

	//Display purpose of the program
	cout << " ******************************************" << endl;
	cout << " This program prints my first initial, M, as a block letter" << endl;
	cout << " ******************************************\n\n";

	//M as a block letter
	cout << "*    * \n\n";
	cout << "**  ** \n\n";
	cout << "* ** * \n\n";
	cout << "*    * \n\n";
	cout << "*    * \n\n";
	cout << "*    * \n\n";
	cout << "Program has ended" << endl;

	system("pause");

	return 0;
}
	