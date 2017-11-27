#include<iostream>
using namespace std;


//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20 ?


bool isValid(int b, int e, const long int& n)
{
	for (int i = b; i <= e; i++)
		if (n % i != 0)
			return false;

	return true;
}

int main()
{
	int begin, end;

	do {
		cout << "//DEFINE A RANGE// enter starting number : ";
		cin >> begin;
		cout << "enter ending number : ";
		cin >> end;
	} while (begin > end);
	
	long int rez = 1;
	while (isValid(begin, end, rez) == false) { rez++; }
	cout << "The smallest evenly divisble number in the range from " << begin << " - " << end << " is : " << rez << endl;

    return 0;
}