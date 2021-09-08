#include <iostream>
#include<math.h>

using namespace std;
class Point
{
public:
	Point();
	Point(double, double);
	~Point();
	void setX(double);
	double getX();
	void setY(double);
	double getY();
	void setXY(double,double);
	double distance(double, double);
	double distance(Point);
private:
	double x, y;
};

Point::Point()
{
}
Point::Point(double x ,double y) {
	this->x = x;
	this->y = y;
}
void Point::setX(double x) {
	this->x = x;
}
double Point::getX() {
	return x;
}
void Point::setY(double y) {
	this->y = y;
}
double Point::getY() {
	return y;
}
void Point::setXY(double x, double y) {
	this->x = x;
	this->y = y;
}
double Point::distance(double a, double b) {
	return (sqrt(a * a + b * b));
}
double Point::distance(Point a) {
	return sqrt((x - a.x) * (x - a.x) + (y - a.y) * (y - a.y));
}
Point::~Point()
{
}
int main() {
	Point p1(1.5, 6.7);
	Point p2(2.8, 3.2);
	cout << p1.distance(p2) << endl;
	cout << p1.distance(2.34, 7.8) << endl;
	return 0;
}

/dm mịa kiếp/
