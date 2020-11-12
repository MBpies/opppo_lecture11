#include <iostream>

double my_pow(double num, unsigned int power)
{
	if (power == 0)
		return 1;
	double buf = num;//since we already have on of the mults in buffer, we can make "for" shorter by one cycle
	for (int i = 1; i <= power-1; i++)
	{
		buf *= num;
	}
	return buf;
}
int main()
{
    std::cout << my_pow(7,2);
}
