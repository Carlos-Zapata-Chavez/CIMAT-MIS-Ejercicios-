#include <bits/stdc++.h>
//No es la mejor solución

using namespace std;

int main(){
    uint64_t r,c, t, rc;
    cin>>r>>c;
    rc =  r + c;

    uint64_t rec[r][c];

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
        }
    }

    bool flag_a;
    for(uint64_t i=0; i<r; i++){
        if(repetidos_r.at(i).size() < c){
            cout<<"0 ";
        } else {
            flag_a = false;
            for(uint64_t j=0; j<c; j++){
                if(rec[i][j] > rc){
                    cout<<"0 ";
                    flag_a = true;
                    break;
                }
            }
            if(!flag_a) cout<<"1 ";
        }
    }

    cout<<endl;

    bool flag_b;
    for(uint64_t i=0; i<c; i++){
        if(repetidos_c.at(i).size() < r){
            cout<<"0 ";
        } else {
            flag_b = false;
            for(uint64_t j=0; j<r; j++){
                if(rec[j][i] > rc){
                    cout<<"0 ";
                    flag_b = true;
                    break;
                }
            }

            if(!flag_b) cout<<"1 ";
        }
    }

    cout<<endl;

    return 0;
}
