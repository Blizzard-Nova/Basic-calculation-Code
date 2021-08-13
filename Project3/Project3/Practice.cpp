#include <iostream>
using namespace std;
class Calculations
{
	float number1;
	float number2;
	float number3;
public:
	Calculations(int x = 0, int y = 0, int z = 0)
	{
		
		number1 = x;
		number2 = y;
		number3 = z;
	}

	void Addition(int a, int b, int c)
	{
		number1 = a;
		number2 = b;
		number3 = c;
		int sum;
		sum = a + b + c;
		cout << "Sum of the three numbers is " << number1 + number2 + number3 << endl;
	}

	void Subtraction(int a, int b, int c)
	{
		number1 = a;
		number2 = b;
		number3 = c;
		int subtraction;
		subtraction = a - b - c;
		cout << "Difference of three numbers is  " << number1 - number2 - number3 << endl;
	}

	void Multiplication(int a, int b, int c)
	{
		number1 = a;
		number2 = b;
		number3 = c;
		int product;
		product = a + b + c;
		cout << "Product of three numbers is  " << number1 * number2 * number3 << endl;
	}

	void Division(float a, float b, float c)
	{
		number1 = a;
		number2 = b;
		number3 = c;
		float divide;
		divide = a / b ;
		cout << "Division result of the three numbres is  " << number1 / number2 <<endl;
	}
};
int main()
{
	Calculations calObj;
	calObj.Addition(24, 56, 80);
	calObj.Subtraction(24, 56, 80);
	calObj.Division(24, 56, 80);
	calObj.Multiplication(24, 56, 80);


	return 0;
}