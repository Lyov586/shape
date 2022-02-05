#include "shape.hpp"

shape::shape()
{
	h = 0;
	w = 0;
}

int shape::get_h() const
{
	return h;
}

int shape::get_w() const
{
	return w;
}

void shape::set_h(int i)
{
	h = i;
}

void shape::set_w(int i)
{
	w = i;
}

rectangle::rectangle()
{
	h = 0;
	w = 0;
}

rectangle::rectangle(int a, int b)
{
	//set_h(a);
	//set_w(b);
	h = a;
	w = b;
}

rectangle::rectangle(const rectangle& c)
{
	set_h(c.h);
	set_w(c.w);
}

rectangle& rectangle::operator=(const rectangle& b)
{
	set_h(b.h);
	set_w(b.w);
	return *this;
}

bool rectangle::operator==(const rectangle& b)
{
	if (h == b.h && w == b.w) {
		return true;
	}
	return false;
}

int rectangle::get_area()
{
	return h*w;
}

triangle::triangle()
{
	h = 1;
	w = 1;
}

triangle::triangle(int a, int b)
{
	h = a;
	w = b;
}

triangle::triangle(const triangle& c)
{
	set_h(c.h);
	set_w(c.w);
}

triangle& triangle::operator=(const triangle& b)
{
	set_h(b.h);
	set_w(b.w);
	return *this;
}

bool triangle::operator==(const triangle& b)
{
	if (h == b.h && w == b.w){
		return true;
	}
	return false;
}

int triangle::get_area()
{
	return (h*w)/2;
}

circle::circle()
{
	radius = 1;
	h = w = 2*radius;

}

circle::circle(int a)
{
	radius = a;
	h = w = 2*radius;
}

circle::circle(const circle& c)
{
	radius = c.radius;
	h = w = 2*radius;
}

circle& circle::operator=(const circle& b)
{

	radius = b.radius;
	h = w = 2*radius;
	return *this;
}

bool circle::operator==(const circle& b)
{
	if (radius == b.radius) {
		return true;
	}
	return false;
}

int circle::get_radius()
{
	return radius;
}

int circle::get_area()
{
	return 3.14*radius*radius;
}
