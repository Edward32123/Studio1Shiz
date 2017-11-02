#include <stdlib.h>
#include <stdio.h>
#include <math.h>

//TODO:Ex1. Complete the following unit conversion functions
//
//InchsToCentimetres:
//input argument: unit in inches
//output: the function returns the conversion result in centimetres
float InchesToCentimetres(float inches)
{
	return 0.0f;
}

//GallonsToLitres:
////input argument: unit in gallon
//output: the function returns the conversion result in Litres
float GallonsToLitres(float gallon)
{
	return 0.0f;
}

//FahrenheitToCelcius:
////input: temperature in fahrenheit
//output: the function returns the conversion result in Celcius
int FahrenheitToCelcius(int Farenheit)
{
	return 0.0f;
}

//MPGToKmPL:
////input: Fuel consumption in Miles-per-Gallon
//output: the function returns the conversion result in Kilometre-per-litre
float MPGToKmPL(float mpg)
{
	return 0.0f;
}

//NumericGradeToLetter
//input: numeric grades range 0-100, it does not have to be an integer
//output: The function returns the CAPITAL letter corresponding to the input grade
//
//Conversion rules:
// A:  grade above 70%
// B:  grade between 60% and 69% inclusively
// C:  grade between 50% and 59% inclusively
// D:  grade between 40% and 49% inclusively
// E:  grade between 35% and 39% inclusively
// F:  grade between 0% and 34% inclusively
char NumericGradeToLetter(float grade)
{
	return 'Z';
}

//main is the entry function to a C program
//All programs must have one and only one main function
int main(int argc, const char** argv)
{
	//Declare test variables
	float testInToCm = InchesToCentimetres(30.5f);
	float testGalToLt = GallonsToLitres(6.5f);
	int testFtoC = FahrenheitToCelcius(32);
	float testMPGToKmPL = MPGToKmPL(68.3f);
	char testGradeToLetter = NumericGradeToLetter(59.9f);

	//print test results
	//TODO: You may try to limit the precision of the printed values to 2 decimal digits
	printf("%f Inches is %f Centimetres\n", 30.5f, testInToCm);
	printf("%f Gallons is %f Litres\n", 6.5f, testGalToLt);
	printf("%d Fahrenheit is %d Celcius\n", 32, testFtoC);
	printf("%f MPG is %f KmPL\n", 68.3f, testMPGToKmPL);
	printf("%f is %c Grade\n", 59.9f, testGradeToLetter);

	//TODO: Ex2
	//Instead of passing in a constant to those conversion functions;
	//Use printf and scanf to ask an input from users
	
	//TODO: Ex3
	//Implement a menu that allows users to select a specific conversion function
	//Use printf and getchar
	//To make the code cleaner and easier to maintain, you should create a separate
	//function for the menu

	return 0;
}
