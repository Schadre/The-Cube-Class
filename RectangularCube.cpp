#include <iostream>
#include<map>
#include<string>
#include<vector>
using namespace std;
#include "RectangularHeader.h"

int main() {
    RectangularCube rectangularcube1;
    RectangularCube rectangularcube2("White", 7, 3, 12);

    cout << "The Volume of the Rectangular Cube is: "
        << rectangularcube1.getVolume() << endl;
    cout << "The Surface Area is: "
        << rectangularcube1.getSurfaceArea() << endl;

    
    cout << "The Volume of the Rectangular Cube is: "
        << rectangularcube2.getVolume() << endl;
    cout << "The Surface Area is: "
        << rectangularcube2.getSurfaceArea() << endl;
    return 0;
}