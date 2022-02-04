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
	public:
		int get_area();
};
#endif
