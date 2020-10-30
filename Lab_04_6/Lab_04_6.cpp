#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double P1, P2;
	{
		P1 = 1;
		int i = 1, k;
		while (i <= 15)
		{
			P2 = 1;
			k = i;
			while (k <= 30 - i)
			{
				P2 *= (sin(i * k * k) + cos(k * i * i)) / sin((1. * k * k) + (1. * i * i));
				k++;
			}
			P1 *= P2;
			i++;
		}
		cout << "P1 = " << P1 << endl;
	}
	{
		P1 = 1;
		int i = 1, k;
		do
		{
			P2 = 1;
			k = i;
			do
			{
				P2 *= (sin(i * k * k) + cos(k * i * i)) / sin((1. * k * k) + (1. * i * i));
				k++;

			} while (k <= 30 - i);
			P1 *= P2;
			i++;
		} while (i <= 15);
		cout << "P1 = " << P1 << endl;
	}
	P1 = 1;
	for (int i = 1; i <= 15; i++)
	{
		P2 = 1;
		for (int k = i; k <= 30 - i; k++)
		{
			P2 *= (sin(i * k * k) + cos(k * i * i)) / sin((1. * k * k) + (1. * i * i));
		}
		P1 *= P2;
	}
	cout << "P1 = " << P1 << endl;

	P1 = 1;
	for (int i = 15; i >= 1; i--)
	{
		P2 = 1;
		for (int k = 30 - i; k >= i; k--)
		{
			P2 *= (sin(i * k * k) + cos(k * i * i)) / sin(1. * k * k + 1. * i * i);
		}
		P1 *= P2;
	}
	cout << "P1 = " << P1 << endl;

	system("pause");
	return 0;
}
