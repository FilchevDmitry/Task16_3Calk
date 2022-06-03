#include <iostream>
#include<string>
#include<sstream>
using namespace std;

int main()
{	
	string temp;
	cin >> temp;
	stringstream text(temp);
	string a;
	string b;
	string c;
	text >> a >> b >> c ;
	cout << a << endl;
	cout << b << endl;
	cout << c << endl;
	cout << text.str();

}
