#include<iostream>
#include<string>
using namespace std;


char toChar(int br)
{
	string hexadecs = "0123456789ABCDEF";
	return hexadecs[br];
}

string toHex(int num) {
	string hex;
	int hI = num % 16;
	if (num - hI == 0) {
        hex += toChar(hI);
		return hex;
	}
	return toHex((num - hI) / 16) + toChar(hI);
}
int main()
{
    int n;
	do {
		cout << "Enter a positive number : ";
		cin >> n;
	} while (n < 0);
	cout <<"Hex equivalent : " <<toHex(n) << endl; 
    return 0;
}