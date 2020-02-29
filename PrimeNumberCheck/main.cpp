#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>

using namespace std;

class isComposite
{
public:
	bool operator()(int x)
	{
		// Corner cases 
		if (x <= 1)  return false;
		if (x <= 3)  return false;

		// This is checked so that we can skip  
		// middle five numbers in below loop 
		if (x % 2 == 0 || x % 3 == 0) return true;

		for (int i = 5; i * i <= x; i = i + 6)
			if (x % i == 0 || x % (i + 2) == 0)
				return true;

		return false;
	}
};

int main()
{
	int x;
	cout << "Please enter a integer greater than one, the program will display all primes less than the provided integer: ";
	cin >> x;

	vector<int> v = { 2 };
	// vector<bool> b;

	/*for (int i = 2; i <= x; i++)
	{
		b.push_back(true);
	}*/

	for (int i = 3; i <= x; i++)
	{
		v.push_back(i);
	}

	/*for (int a : v)
	{
		cout << a << " ";
	}
	cout << endl;*/

	v.erase(remove_if(begin(v), end(v), isComposite()), end(v));
	cout << "The primes less than " << x << " are as follows: " << endl;
	for (int a : v)
	{
		cout << a << " ";
	}

}