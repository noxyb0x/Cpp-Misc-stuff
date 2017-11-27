#include<iostream>
using namespace std;

//If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
//Find the sum of all the multiples of 3 or 5 below 1000.

int SumOfMultiples(int n)
{
	long int suma = 0;

	for (int i = 1; i < n; i++)
		if (i % 3 == 0 || i % 5 == 0)
			suma += i;

	return suma;
}
int main()
{
	int n;
	do
	{
		cout << "Enter a positive number : ";
		cin >> n;
	} while (n < 0);
	cout << "Sum of all the multiples of 3 and 5 below " << n << " is : " << SumOfMultiples(n) << endl;
    return 0;
}