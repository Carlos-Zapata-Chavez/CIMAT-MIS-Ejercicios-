#include <bits/stdc++.h>

using namespace std;

list <string> peleadores;

int main(){
    bool flag = false;
    string s,a;
    string contenido;
    string accion;

    while(getline(cin, s)){
        istringstream is(s);
        while(is>>a){
            if(flag){//Nombre o Numero
                contenido = a;
            } else {//R o P
                accion = a;
            }
            flag = !flag;
        }
        //cout<<"A:"<<accion<<"   C:"<<contenido<<endl;
        if(accion == "R"){
            peleadores.push_back(contenido);
        } else {
            if(peleadores.size() < stoi(contenido)){
                cout<<"IMPOSIBLE"<<endl;
            } else {
                for(uint64_t i=0; i<stoi(contenido);i++){
                    cout<<peleadores.front()<<" ";
                    peleadores.pop_front();
                }
                cout<<endl;
            }
        }
    }

    cout<<endl;

    return 0;
}
