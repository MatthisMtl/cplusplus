//  copyright (c) 2018 Antoine Tran Tan
//  copyright (c) 2018 Matthis Monteil

#ifndef MY_HEADER_HPP
#define MY_HEADER_HPP
void exo1(void)
{
	long a = 2, b = 1, c = 0;
	while (a + b > 0)
	{
		a = a - 2;
		b = b + 1;
		c = c + 1;
	}
}
void exo2(void)
{
	long n = 3, fac = 1, i = 1;

	if (n > 0)
		while (i <= 1)
		{
			fac = fac * i;
			i = i + 1;
		}
	else
		if (n < 0)
			fac = 0;
}
#endif // MY_HEADER_HPP

