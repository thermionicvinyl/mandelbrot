#ifndef complex_numbers_h
#define complex_numbers_h

class complex
{
	private:
	double real;
	double imag;
	
	public:
	complex();
	complex(double a_real, double b_imag);
	void display();
	void square();
	void add(double a_real, double b_imag);
	int iterate(int iterations, double a_real, double b_imag);
	void render(int iterations, double a_real, double a_imag, double zoom);
};
#endif