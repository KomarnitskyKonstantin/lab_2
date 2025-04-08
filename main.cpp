#include <iostream>
#include <math.h>
#include <iomanip> 
int main()
{
	int a = 4;
	int b = 2;
	int c = 5;
	float p = (1/2.0f)*(a+b+c);
	float s = sqrt(p*(p-a)*(p-b)*(p-c));


	std::cout<<c<<std::endl;
	std::cout<<p<<std::endl; 
	std::cout<<s<<std::endl;



	return 0;
}