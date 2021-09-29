#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	int i;
    double S;
	S = 0;
	i = 1;
		while (i <= 15) 
		{
			S *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
			i++;
		}
		cout << S << endl;
		S = 0;
		i = 1;
		do
		{
			S *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
			i++;
		} while (i <= 15);
		cout << S << endl;
		S = 0;
		for (i = 1; i <= 15; i++)
		{
			S *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
		}
		cout << S << endl;
		S = 0;
		for (i = 15; i >= 1; i--)
		{
			S *= (sin(i) * sin(i) + cos(1. / i) * cos(1. / i)) / (i * i);
		}
		cout << S << endl;
	return 0;
}