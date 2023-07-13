#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int productCode, productNum;
    float price, sum;
    for(int i=0; i<2;i++)
    {
        cin>> productCode >>productNum >>price;
        sum = sum + productNum* price;
    }
    cout<< fixed<< setprecision(2)<<"VALOR A PAGAR: R$ X"<<sum<<endl;
    return 0;
}
