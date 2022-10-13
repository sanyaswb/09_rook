#include <iostream>
#include <string>

bool rook(int x1, int y1, int x2, int y2) {
	return x2 == x1 || y2 == y1 ? true : false;
}
