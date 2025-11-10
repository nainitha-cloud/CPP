#include <iostream>
using namespace std;
namespace one
{
	int a = 10;
}
namespace two
{
	int a=30;
}
int main()
{
	cout<<"Namespace one:"<<one::a<<endl;
	cout<<"Namespace two:"<<two::a;
	return 0;
}
