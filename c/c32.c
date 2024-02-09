// functions to calculate area of a square, a circle, and a rectangle

#include <stdio.h>

float squareArea(float side) {
	return side*side;
}

float circleArea(float radius) {
	return 3.14*radius*radius;
}

float rectangleArea(float length, float breadth) {
	return length*breadth;
}

int main() {
	float length=5.0;
	float breadth=10.0;

	printf("%f\n", rectangleArea(length, breadth));

	return 0;
}

