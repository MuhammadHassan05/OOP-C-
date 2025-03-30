#include<iostream>
using namespace std;
class Point {
public:
	int x, y;
	Point(int a, int b) {
		this->x=a;
		this->y=b;
		cout << "constructor called for x = " << x << " and y= " << y << endl;

	}
	~Point()
	{
		cout << "destructor called for x = " << x << " and y= " << y << endl;
	}
	void print() {
		cout << x << " " << y << endl;
	}
	void operator++() {
		cout << "call ++ " << endl;
		x++;
		y++;

	}
};
int main() {
	Point p1(4, 6), p2(0, 0);
	++p2;
	p1.print();
	p2.print();
	return 0;
}