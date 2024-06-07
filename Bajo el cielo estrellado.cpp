#include <bits/stdc++.h>

using namespace std;

int main()
{
    uint64_t n_estrellas;
    cin>> n_estrellas;

    map<uint64_t, uint64_t> estrellas;

    uint64_t x, y;
    map<uint64_t, uint64_t>::iterator existe;

    for(uint64_t i = 0; i < n_estrellas; i++){
        cin>>x>>y;
        existe = estrellas.find(x);
        if(existe != estrellas.end()){//existe
            if(estrellas[x] > y) {
                estrellas[x] = y;
            }
        } else{// no existe
            estrellas[x] = y;
        }
    }

    cout<<estrellas.size()<<endl;

    for(const auto& par : estrellas) {
        cout << par.first << " " << par.second << endl;
    }

    return 0;
}
