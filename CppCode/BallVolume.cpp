#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#define PI 3.14159
int main()
{
    int r;
    cin >> r;
    cout<< fixed <<setprecision(3)<<"VOLUME = "<<(4/3.0)*PI*pow(r,3)<<endl;
    return 0;
}
