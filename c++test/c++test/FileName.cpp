#include<iostream>
class  point
{
public:
	void setx( const int a)
	{
		x = a;
	}
	void sety( const int b)
	{
		y =b;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}

private:
	int x;
	int y;
};
class circle
{
public:
	void setcircle_r(  const int &a )
	{
		r = a;//����һ��a,��a��ֵ����r
	}
	void setcircle_c( point & a)
	{
		M_point = a;
	}
	int  getcircle_r()
	{
		return r;
	}
	int getcircle_x()
	{
		return M_point.getx();
	}
	int getcircle_y()
	{
		return M_point.gety();
	}
private:
	int r;
	point  M_point;

};
void isinclircle(circle& c, point& a)
{
	if((c.getcircle_x()+10 - a.getx())*(c.getcircle_x()+10 - a.getx())+
		(c.getcircle_y()-a.gety())* (c.getcircle_y() - a.gety())
		< c.getcircle_r() * c.getcircle_r())
	{
		printf("��Բ��");
	}
	else if ((c.getcircle_x() - a.getx()) * (c.getcircle_x() - a.getx()) +
		(c.getcircle_y() - a.gety()) * (c.getcircle_y() - a.gety())
		> c.getcircle_r() * c.getcircle_r())
	{
		printf("��Բ��");
	}
	else
	{
		printf("��Բ��");
	}
}
int main()
{   
	circle c;
	point a;
	a.setx(10);
	a.sety(10);
	c.setcircle_r(10);
	c.setcircle_c(a);
	isinclircle(c,a);
	return 0;
}