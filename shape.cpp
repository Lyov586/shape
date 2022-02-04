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

int rectangle::get_area()
{
	return h*w;
}


