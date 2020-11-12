#include <iostream>

double my_pow(double num, int power)
{
	bool is_negative = false;
	if (power == 0)
		return 1;
	if (power < 0)
	{
		power *= -1;
		is_negative = true;
	}
	double buf = 1;
	for (int i = 1; i <= power; i++)
	{
		buf *= num;
	}
	if (is_negative)
	{
		return 1/buf;
	}
	else
	{
		return buf;
	}
}
int main()
{
	std::cout << my_pow(2, 2);
}