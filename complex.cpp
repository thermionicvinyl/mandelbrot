#include<iostream>
#include "complex_numbers.h"
using namespace std;
complex::complex()
{
	real = 0;
	imag = 0;
}

complex::complex(double a_real, double b_imag)
{
	real = a_real;
	imag = b_imag;
}

void complex::display()
{
	if(imag < 0)
	{
		cout << real << imag << "i\n";
	}
	else
	{
		cout << real << "+" << imag << "i\n";
	}
}

void complex::add(double a_real, double b_imag)
{
	real += a_real;
	imag += b_imag;
}

void complex::square()
{
	double temp_a = (real*real-imag*imag);
	double temp_b = (2*real*imag);
	real = temp_a;
	imag = temp_b;
}

int complex::iterate(int iterations, double a_real, double b_imag)
{
	for(int i = 0; i < iterations; i++)
	{
		if(real > 10000 || imag > 10000)
		{
			real = 0;
			imag = 0;
			return 0;
		}
		square();
		add(a_real, b_imag);
	}
	real = 0;
	imag = 0;
	return 1;
}

void complex::render(int iterations, double a_real, double a_imag, double zoom)
{
	int x;
	for(double i = (1/zoom + a_imag); i > (-1/zoom + a_imag); i-=(0.02/zoom))
	{
		for(double r = (-2/zoom + a_real); r < (2/zoom + a_real); r+=(0.01/zoom))
		{
			x = iterate((iterations), r, i);
			if(x==1)
			{
				cout<<" ";
			}
			else
			{
				cout<<"@";
			}
		}
		cout<<"\n";
	}
}
