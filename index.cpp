#include <iostream>
#include <string>

bool rook(int x1, int y1, int x2, int y2) {
	return x1 == x2 || y1 == y2 ? true : false;
}
