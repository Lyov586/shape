#include "shape.hpp"
#include <iostream>

int main()
{

	rectangle r(5, 6);
	rectangle s(r);

	std::cout << r.get_h() << r.get_w() <<std::endl;
	std::cout << r.get_area() <<std::endl;



}



