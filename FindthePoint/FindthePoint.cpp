#include <iostream>

using namespace std;


int* FindthePoint(int px, int py, int qx, int qy) {
    int ax = 0, ay = 0;
    ax = qx - px;
    static int r[2];
    r[0] = qx + ax;
    ay = qy - py;
    r[1] = qy + ay;

    return r;
}
