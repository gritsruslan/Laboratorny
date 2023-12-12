
#include <iostream>
using namespace std;
int main()
{
	setlocale(0, "ukr");
	double a, b;
	cout << "Перше число: ";
	cin >> a;
	cout << "Друге число: ";
	cin >> b;
	if (a > b) {
		cout << a;
	}
	else {
		cout << a << " " << b;
	}
}

