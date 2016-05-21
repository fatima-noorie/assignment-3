//algos and programming
//2-16
//Arithmetic) Write a program that asks the user to enter two numbers,obtains the two numbers from the user and prints the sum
//,product,difference, and quotient of the two numbers.
#include<iostream>
using namespace std;
int main()
{
	int a, b,sum, product, difference, quotient;     //initiaizing the vriables
	cout << "enter first integer=" << endl;          //taking data from the user
	cin >> a;
	cout << "enter second integer" << endl;
	cin >> b;                                        //calculating the req things
	sum = a + b;
	product = a*b;
	difference = a - b;
	quotient = a / b;
	cout << "sum=" << sum << endl;
	cout << "product=" << product << endl;            //displaying the results
	cout << "difference=" << difference << endl;
	cout << "quotient=" << quotient << endl;
	system("pause");


}