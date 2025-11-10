#include <iostream>
using namespace std;
class Complex
{
	private:
		int real,imag;
		public:
			void get()
			{
				cout<<"Enter values for real and imaginary:";
				cin>>real>>imag;
			}
			Complex add(Complex c)
			{
				cout<<real+c.real<<"+"<<imag+c.imag<<"i";
			}
		

};
int main()
{
	Complex c1,c2;
	cout<<"Enter complex number 1:"<<endl;
	c1.get();
	cout<<"Enter complex number 2:"<<endl;
	c2.get();
	c1.add(c2);
	return 0;
	
}

