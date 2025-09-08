#include <iostream>
#include <cmath>   // для sqrt() і abs()

using namespace std;

int main() {
    double a = -1, b = -4, c = 6.3;
    double f;

    // формула
    f = sqrt(a / ((b - a) / (b * b + a * b))) - abs(b + 2);

    cout << "f = " << f << endl;

    return 0;
}
