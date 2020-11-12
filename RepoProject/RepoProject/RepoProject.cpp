#include <iostream>

int binpow(double num, int power)
{
	if (power == 0)
		return 1;
	if (power == 0)
		return 1;
	if (power % 2 == 1)
		return binpow(num, power - 1) * num;
	else {
		int b = binpow(num, power / 2);
		return b * b;
	}
}

double my_pow(double num, unsigned int power)
{
	if (power == 0)
		return 1;
	double buf = num;//since we already have on of the mults in buffer, we can make "for" shorter by one cycle
	for (int i = 1; i <= power - 1; i++)
	{
		buf *= num;
	}
	return buf;
}
int main()
{
	std::cout << binpow(3, 2);
}
