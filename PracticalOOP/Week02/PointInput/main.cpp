#include "Point.h"

int main()
{
	float x = 0.0f, y = 0.0f;	
	cout << "Nhap x: ";
	cin >> x;
	cout << "Nhap y: ";
	cin >> y;
	Point p(x, y);
	cout << "Toa do diem: " << p.getX() << ", " << p.getY() << endl;
	return 0;
}