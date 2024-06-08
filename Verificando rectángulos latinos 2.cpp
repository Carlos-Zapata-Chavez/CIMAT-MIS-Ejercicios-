#include <bits/stdc++.h>
//No es la mejor solución

using namespace std;

int main(){
    uint64_t r,c, t, rc;
    cin>>r>>c;
    rc =  r + c;

    uint64_t rec[r][c];
    bool size_r[r];
    bool size_c[c];
    fill_n(size_r, r, true);
    fill_n(size_c, c, true);


    vector <set <uint64_t>> repetidos_r;
    vector <set <uint64_t>> repetidos_c;

    repetidos_r.resize(r);
    repetidos_c.resize(c);


    for(uint64_t i=0; i<r;  i++){
        for(uint64_t j=0; j<c; j++){
            cin>>t;
            rec[i][j] = t;
            repetidos_r[i].insert(t);
            repetidos_c[j].insert(t);

            if(t > rc){
                size_r[i] = false;
                size_c[j] = false;
            }
        }
    }

    for(uint64_t i=0; i<r; i++){
        if(repetidos_r.at(i).size() < c){
            cout<<"0 ";
        } else if(size_r[i] == false){
            cout<<"0 ";
        } else {
            cout<<"1 ";
        }
    }

    cout<<endl;

    for(uint64_t i=0; i<c; i++){
        if(repetidos_c.at(i).size() < r){
            cout<<"0 ";
        } else if(size_c[i] == false){
            cout<<"0 ";
        } else {
            cout<<"1 ";
        }
    }

    cout<<endl;

    return 0;
}
