#include<iostream>
#include<fstream>
#include<cmath>
#include<iomanip>
using namespace std;

int main ()

{
    int s, a, k;

    cin >> s;
    int skir=0;
    a=s%10; //paskutins sk//
    s=s/10;

    while(s>0)

    {
        k=s%10;
        if (k!=a)
        skir++;
        a=k;
        s=s/10;
    }

    if (skir>0 ) cout << "skirtingi" << endl;
    else cout << "vienodi" << endl;



}
