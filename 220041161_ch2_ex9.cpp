#include<iostream>

using namespace std;

int main()
{
    int n1, n2, n3, n4;
    char div;

    cout<<"Enter first fraction: ";
    cin>> n1 >> div>> n2;
    cout<<"Enter second fraction: ";
    cin>> n3 >> div >> n4;

    int nume1, nume2, numer, den, sum;

    nume1=n1*n4;
    nume2=n2*n3;
    numer=nume1+nume2;
    den=n2*n4;

    cout<<"Sum = "<<numer<<"/"<< den<< endl;

    return 0;
}
