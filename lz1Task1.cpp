#include <iostream>
#include <cmath>   // ��� sqrt() � abs()

using namespace std;

int main() {
    double a = -1, b = -4, c = 6.3;
    double f;

    // �������
    f = sqrt(a / ((b - a) / (b * b + a * b))) - abs(b + 2);

    cout << "f = " << f << endl;

    return 0;
}
