#include <iostream>
using namespace std;
#include "CalcLib.h"
//How to Use

int main() {

    //Examples
    cout<<"\nExamples of the library usage:\n\n";

    cout<<addInt(3, 1,2,3) + addDouble(2, 1.5,1.5)<<endl;

    cout<<subtractInt(2, 5,2) - subtractDouble(2, 4.5,3.5)<<endl;

    cout<<multiplyInt(2, 3,3) + multiplyDouble(2, 2.5,5.343)<<endl;

    cout<<divideInt(2, 4,2) + divideDouble(3, 2.5,3.5,4.75)<<endl;

    return 0;
}
