#include <iostream>
#include "FindthePoint/FindthePoint.h"
#include "MaximumDraws/MaximumDraws.h"
#include "Handshake/Handshake.h"
#include "FindthePoint/FindthePoint.h"

using namespace std;


int main()
{

    /** Find the Point */
    /*
    cout << "Find the Point" << endl;

    int px = 0;
    cout << "Px" << endl;
    cin >> px;

    int py = 0;
    cout << "Py" << endl;
    cin >> py;

    int qx = 0;
    cout << "Qx" << endl;
    cin >> qx;

    int qy = 0;
    cout << "Qy" << endl;
    cin >> qy;
    
    int* Rxy;
    Rxy = FindthePoint(px, py, qx, qy);

    cout << "Rx: " << *(Rxy) << " Ry: " << *(Rxy + 1) << endl;
    */

    /** Maximum Draws */
    /*
    cout << "Maximum Draws" << endl;

    int number = 0;
    cout << "Enter number of colors of sucks" << endl;
    cin >> number;

    int match = MaximumDraws(number);

    cout << "the minimum number of socks: " << match << endl;
    */

    /** Handshake */
    /*
    cout << "Handshake" << endl;

    int number = 0;
    cout << "the number of attendees" << endl;
    cin >> number;

    int match = Handshake(number);

    cout << "the number of handshakes: " << match << endl;
    */

    return 0;
}
