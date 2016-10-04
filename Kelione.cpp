#include <iostream>
#include <fstream>
using namespace std;
//Kelione
int n;
double m, kk, k, a, islaiduSkirtumas, bilietuKaina;
bool GetB = false;
void Nuskaitymas(double & k, double & m, double & kk, int & n, double & bilietuKaina);
void KelionesKaina(double & islaiduSkirtumas, double k, double m, double kk, int n, bool GetB);

int main(){
    Nuskaitymas(k, m, kk, n, bilietuKaina);
    KelionesKaina(islaiduSkirtumas, k, m, kk, n, GetB);
    return 0;
}

void Nuskaitymas(double & k, double & m, double & kk, int & n, double & bilietuKaina){
    ifstream File("Duomenys.txt");
    if(GetB == true){
        double b;
        File>>b;
        bilietuKaina = b*n;
    }else{
        File >> k >> m >> kk >> n;
        File >> a;
    }
}

void KelionesKaina(double & islaiduSkirtumas, double k, double m, double kk, int n, bool GetB){
    double degaluKaina;
    degaluKaina = m/100*k*kk;
    ofstream Failas("Rezultatai.txt");
    for(int i = 0; i<a; i++){
        GetB = true;
        Nuskaitymas(k, m, kk, n, bilietuKaina);
        islaiduSkirtumas = degaluKaina - bilietuKaina;
        Failas << islaiduSkirtumas << endl;
    }
    Failas.close();
}
