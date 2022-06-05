#include <iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{	
	string temp;
	cout << "Enter the expression (+, / , * , -) : ";
	cin >> temp;
	stringstream text(temp);
	double a;
	char b;
	double c;
	double result = 0;
	text >> a >> b >> c ;
	switch (b)
	{
	case '+':
		result = a + c;
		break;
	case'-':
		result = a - c;
		break;
	case '*':
		result = a * c;
		break;
	case '/':
		result = a / c;
		break;
	default:
		cout << "Wrong!! Incorrect expression entered ! " << endl;
		break;
	}
	temp = to_string(result);
	cout <<"Calculation result = " << temp << endl;
}
