#include <stdio.h>
#include <stdlib.h>
#include <math.h>
struct RECT {
	int width, length;
};
typedef struct RECT Rect;
int Area(Rect rect);
int main() {
	Rect rect;
	rect.length = 3;
	rect.width = 4;
	printf("Area of rectangle is %d\n", Area(rect));
	return 0;
}
int Area(Rect rect) {
	return rect.length * rect.width;
}
