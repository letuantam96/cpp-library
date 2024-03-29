#include <iostream>
using namespace std;

/*
Hàm isPrime(a) trả về 1 nếu a là số nguyên tố
					  0 nếu a không là số nguyên tố
*/

bool isPrime(int a)
{
	if(a == 0 || a == 1) return false;
	if(a == 2) return true;

	for(int i = 2; i*i <= a; i++)
		if(a % i == 0)
			return false;

	return true;
}

int main()
{
	for (int i = 0; i <= 30; i++)
		cout << i << ": " << isPrime(i) << endl;
}