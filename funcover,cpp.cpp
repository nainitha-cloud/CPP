#include <iostream>
using namespace std;
class sample
{
	
	public:
		void display(int a,int b)
		{

			cout<<"a+b int = "<<a+b<<endl;
		}
		void display(float a,float b)
        {
        	cout<<"Sum of two float numbers = "<<a+b<<endl;
				}	
		void display(int a,int b,int c)
		{
			cout<<"sum of 3 int numbers:"<<a+b<<endl;
			}	
			
		void display(double a,double b)
		{
			cout<<"sum of two double numbers:"<<a+b<<endl;
		}
	
	
};
int main()
{
	sample s;
	
	s.display(10,20);
	s.display(3.7329,5.23932);
	s.display(1,2,3);
	s.display(1.1f,0.0f);
	return 0;
	
	}
