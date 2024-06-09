#include <bits/stdc++.h>

using namespace std;

uint64_t da = 1;
uint64_t ma = 1;
uint64_t ya = 2001;
uint64_t de = 0;

uint64_t df, mf, yf;

void cambiarDia(){
    de++;
    de = de%7;
    //cout<<"*********************************************"<<de<<endl;
}

void sumarAnio(){
    ya++;
}

void sumarMes(){
    if(ma == 12){
        ma = 1;
        sumarAnio();
    }else{
        ma++;
    }
}

void sumarDia(){
    if( ma == 2){
        if((ya % 5) == 0){
            if(da == 58){
                da = 1;
                cambiarDia();
                sumarMes();
            } else {
                da++;
                cambiarDia();
            }
        } else if(da == 59){
            da = 1;
            cambiarDia();
            sumarMes();
        } else{
            da++;
            cambiarDia();
        }
    } else if(da == 57){
        da = 1;
        cambiarDia();
        sumarMes();
    } else{
        da++;
        cambiarDia();
    }
}

int num_bi(){//2001 y yf-2
    uint64_t i = 2001;
    uint64_t num = 0;

    //cout<<"while "<<i<<" <= ("<< yf - 2<<")"<<endl;
    while(i <= (yf-2)){
        if((i%5) == 0){
            num ++;
            //cout<<"bi"<<i<<endl;
        }
        i++;
    }

    return num;
}

int main(){
    cin>>df>>mf>>yf;

    //cout<<df<< "/"<<mf<<"/"<<yf<<endl;

    if((yf-ya) >= 2){
        uint64_t nbi = num_bi();
        //cout<<"num bi"<<nbi<<endl;
        uint64_t c_dias = ((yf-ya-1)*686) - nbi;
        //cout<<"Anios a contar"<<yf-ya-1<<endl;
        //cout<<"Anio final cuanta rapida: "<<yf -1<<endl;
        //cout<<"cantidad dias"<<c_dias<<endl;
        de =  c_dias%7;
        ya = yf - 1;
    }

    while( (da != df) || (ma != mf) || (ya != yf)){
        sumarDia();
        //cout<<da<<" "<<ma<< " "<<ya<<endl;
    }

    cout<<de+1<<endl;

    return 0;
}
