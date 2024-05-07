#include<iostream>
using namespace std;


int kub(int a) {
    return a * a * a;
}

int main ()
{
    cout << "Kub broja" << endl;
    int broj1;

    cout << "Broj: ";
    cin >> broj1;

    cout << broj1 << "\tKub broja = " << kub(broj1);

    return 0;
}
