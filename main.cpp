#include <iostream>

int main()
{
	float a;
	float b;
	float c;
	
	std::cin>>a;
	std::cin>>b;
	std::cin>>c;

	float p = (1/2.0f)*(a+b+c);
	float s = sqrt(p*(p-a)*(p-b)*(p-c));

	std::cout<<p<<std::endl; 
	std::cout<<s<<std::endl;

	return 0;
}