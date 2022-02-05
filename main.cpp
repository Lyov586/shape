#include "shape.hpp"

#include <iostream>
#include <cassert>

int main()
{
	// Test Rectangle	
	rectangle r(5, 6);
	rectangle a;
	rectangle s(r);
	//r.operator=(s);
	a = s;
	assert(r.get_h() == a.get_h());
	assert(r.get_w() == a.get_w());
	assert(r == a);
	// Test triangle	
	triangle t1;
	triangle t2(3, 4);
	triangle t(t2);
	triangle t4(88, 94);
	t1 = t2;
	assert(t.get_h() == t1.get_h());
	assert(t.get_area() == t1.get_area());
	assert(t1.get_w() == t2.get_w());
	assert(t1.get_area() != t4.get_area());
	// Test circle	
	circle c(5);
	circle c1;
	circle c2(c);
	c1 = c;
	assert(c1 == c2);
	std::cout << c.get_area() << "  "<< c1.get_area() <<std::endl;
	std::cout << t.get_h() << "  "<< t.get_w() <<std::endl;
	//std::cout << r.get_h() << r.get_w() <<std::endl;
	std::cout << t4.get_area() <<std::endl;
	return 0;
}



