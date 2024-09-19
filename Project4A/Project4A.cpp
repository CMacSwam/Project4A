#include <iostream>
#include <iomanip>


using namespace std;
int main()
{
	double sale;
	double tax = .0625;
	double taxhigher = .065;
	int temp;
	cout << "Enter the Sale Amount: ";
		cin >> sale;
	if(sale < 13) {
		sale *= tax;
		temp = (int) (sale * 1000) % 10;
		if (temp >= 5) {
			sale += .005;
			sale = (int) (sale * 100);
			sale = (double) (sale / 100);
			cout << "Your sale tax is: " << sale;
		}
		else if (temp < 5) {
			sale = (int)(sale * 100);
			sale = (double)(sale / 100);
			cout << "Your sale tax is: " << sale;
		}
	}
	else if (sale >= 13) {
		sale *= taxhigher;
		temp = (int)(sale * 1000) % 10;
		if (temp >= 5) {
			sale += .005;
			sale = (int)(sale * 100);
			sale = (double)(sale / 100);
			cout << "Your sale tax is: " << sale;
		}
		else if (temp < 5) {
			sale = (int)(sale * 100);
			sale = (double)(sale / 100);
			cout << "Your sale tax is: " << sale;
		}
	}
}