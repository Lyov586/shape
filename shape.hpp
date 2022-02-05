#ifndef SHAPE_HPP
#define SHAPE_HPP

class shape
{
	protected:
		int h;
		int w;
	public:
		shape();
	public:
		int get_h() const;
		int get_w() const;
		void set_h(int i);
		void set_w(int i);
		virtual int get_area() = 0;
		
};

class rectangle: public shape
{
	public:
		rectangle();
		rectangle(int a, int b);
		rectangle(const rectangle& c);
		rectangle& operator=(const rectangle& b);
		bool operator==(const rectangle& b);
	public:
		int get_area();
};


class triangle: public shape
{
	public:
		triangle();
		triangle(int a, int b);
		triangle(const triangle& c);
		triangle& operator=(const triangle& b);
		bool operator==(const triangle& b);
	public:
		int get_area();
};

class circle: public shape
{
	private:
		int radius;
	public:
		circle();
		circle(int a);
		circle(const circle& c);
		circle& operator=(const circle& b);
		bool operator==(const circle& b);
	public:
		int get_radius();
		int get_area();
};

#endif
