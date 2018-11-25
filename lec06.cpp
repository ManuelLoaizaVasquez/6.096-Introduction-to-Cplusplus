#include <iostream>
using namespace std;

// Class: A user-defined datatype which groups together related pieces of information
class Point {
// Acces modifiers: Define where your fields/methods can be accessed from
private:
	double x, y;
public:
	// Constructor: Method that is called when an instance is created
	Point() {
		x = 0.0;
		y = 0.0;
		cout << "default constructor" << endl;
	}
	
	Point(double nx, double ny) {
		x = nx;
		y = ny;
		cout << "2-parameter constructor" << endl;
	} 
	
	Point(Point &o) {
		x = o.x;
		y = o.y;
		cout << "custom copy constructor" << endl;
	}

	double getX() { return x; }
	double getY() { return y; }
	void setX(double nx) { x = nx; }
	void setY(double ny) { y = ny; }

	void offset(double offsetX, double offsetY) {
		x += offsetX;
		y += offsetY;
	}

	void print() {
		cout << "(" << x << "," << y << ")";
	}
	
};

class Vector {
public: 
	Point start, end;
		
	void offset(double x, double y) {
		start.offset(x, y);
		end.offset(x, y);
	}
	
	void print() {
		start.print();
		cout << " -> ";
		end.print();
		cout << endl;
	}
};

class PUCPStudent {
	public:
		char *name;
		int id;
};

// Passing classes to functions
void offsetPoint(Point &p, double x, double y) {
	p.setX(p.getX() + x);
	p.setY(p.getY() + y);
}


int main() {
	// Instance: Occurrence of a class
	PUCPStudent student1;
	PUCPStudent student2;
	student1.name = "Manuel";
	student1.id = 20185048;
	student2.name = "Pulzatio";
	student2.id = 20164031;
	cout << "student1 name is " << student1.name << endl;
	cout << "student1 id is " << student1.id << endl;
	cout << "student2 name is " << student2.name << endl;
	cout << "student2 id is " << student2.id << endl;
	Vector vec;
	vec.start = Point(3.0, 4.0);
	vec.end = Point(5.0, 6.0);
	Point p(3.0, 4.0);
	offsetPoint(p, 1.0, 2.0);
	p.print();	
	cout << endl;
	// Methods: functions which are part of a class
	vec.print();
	vec.offset(1.0, 1.5);
	Point p1;
	Point q(2.0, 3.0);
	Point r = q;
	return 0;
}
