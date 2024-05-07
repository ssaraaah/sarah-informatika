#include<iostream>
using namespace std;



int suma(int a) {
    return a + a;
}

int main ()
{
    cout << "Dvostruka vrijednost broja" << endl;
    int broj1;

    cout << "Broj: ";
    cin >> broj1;

    cout << broj1 << " + " << broj1 <<" = " << suma(broj1);

    return 0;
}
