#include <iostream>
//#include <cmath>

using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long pow = 1;
    int count = 0;

    for (int i = 0; i <= 63; i++) {
        if (n & pow) count++;
        pow *= 2;
    }
    cout << count;
}

