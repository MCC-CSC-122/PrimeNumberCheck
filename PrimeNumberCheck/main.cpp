#include <vector>
#include <algorithm>
#include <iostream>

using namespace std;

int main()
{
	int x;
	cout << "Please enter a integer greater than one, the program will display all primes less than the provided integer: ";
	cin >> x;

	vector<int> v = { 2 };

	for (int i = 3; i <= x; i++)
	{
		v.push_back(i);
	}

	for (int a : v)
	{
		cout << a << " ";
	}

}