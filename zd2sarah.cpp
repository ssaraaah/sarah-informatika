#include<iostream>
using namespace std;

int proizvod(int a) {
    return a * a;
}

int main ()
{
    cout << "Kvadrat broja" << endl;
    int broj1, p;

    cout << "Broj: ";
    cin >> broj1;

    cout << broj1 <<  " * " << broj1 <<  " = " <<  proizvod(broj1);

    return 0;
}

