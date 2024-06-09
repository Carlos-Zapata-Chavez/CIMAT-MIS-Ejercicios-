#include <iostream>

using namespace std;

int main(){
    uint64_t s;
    cin>>s;

    uint64_t minuto = 60;
    uint64_t hora = 60 * minuto;
    uint64_t dia = 24 * hora;
    uint64_t anio = 365 * dia;

    cout<<int(s / anio)<<" ";
    s = s % anio;
    cout<<int(s / dia)<<" ";
    s = s % dia;
    cout<<int(s / hora)<<" ";
    s = s % hora;
    cout<<int(s / minuto)<<" ";
    s = s % minuto;
    cout<<s<<endl;

    return 0;
}
