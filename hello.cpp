#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double val1;
	double val2;
	string operation;
	
	cout << "Enter first number: ";
	cin >> val1;
	
	cout << "Enter second number: ";
	cin >> val2;
	
	cout << "Enter opereation (+, -, *, /, **): ";
	cin >> operation;
	
	if (operation == "+"){
		cout << val1 << operation << val2 << " = " << val1+val2;
	}
	else if (operation == "-"){
		cout << val1 << operation << val2 << " = " << val1-val2;
	}
	else if (operation == "*"){
		cout << val1 << operation << val2 << " = " << val1 * val2;
	}
	
	else if (operation == "/"){
		if (val2 !=0){
			cout << val1 << operation << val2 << " = " << val1 / val2;
		}
		else{
			cout << "cannot be divided by 0!!!";
		}
	}
	else if (operation == "**"){
		cout << val1 << operation << val2 << " = " << pow(val1, val2);
	}
	else{
		cout << "No such operation!!!";
	}


	
}