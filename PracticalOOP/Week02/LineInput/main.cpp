#include "Line.h"

int main()
{
	float x1 = 0.0f, y1 = 0.0f, x2 = 0.0f, y2 = 0.0f;
	cout << "Enter the coordinates of the first point: ";
	cin >> x1 >> y1;
	cout << "Enter the coordinates of the second point: ";
	cin >> x2 >> y2;
	Line line(x1, y1, x2, y2);
	cout << "Line: " << "(" << line.getX1() << ", " << line.getY1() << ")" << " (" << line.getX2() << ", " << line.getY2() << ")" << endl;
	return 0;
}