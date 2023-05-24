#include <iostream>
#include "FIGURE.h"
#include "TRIANGLE.h"
#include "SQUARE.h"
#include "RECTANGLE.h"
#include "CIRCLE.h"
#include "CIRCLE_IN_SQUARE.h"
using namespace std;

int main() {
	Triangle t1(10);
	cout << t1.Area() << "\n";
	cout << t1.Perimeter() << "\n" << "\n";

	Square s1(5);
	cout << s1.Area() << "\n";
	cout << s1.Perimeter() << "\n" << "\n";

	Rectangle r1(5, 10);
	cout << r1.Area() << "\n";
	cout << r1.Perimeter() << "\n" << "\n";

	Circle c1(3);
	cout << c1.Area() << "\n";
	cout << c1.Perimeter() << "\n" << "\n";

	CircleInSquare circleInSquare(6);
	cout << circleInSquare.AreaOutsideCircle() << "\n";
	cout << circleInSquare.CircleArea() << "\n";
	cout << circleInSquare.CirclePerimeter() << "\n";
	cout << circleInSquare.SquareArea() << "\n";
	cout << circleInSquare.SquarePerimeter() << "\n" << "\n";
}