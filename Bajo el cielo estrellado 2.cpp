#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t estrellas[50001];
    set<uint64_t> num_estrellas;
    fill_n(estrellas, 50001, UINT64_MAX);

    uint64_t n,x,y;
    cin>>n;

    for(uint64_t i=0; i<n; i++){
        cin>>x>>y;
        if(estrellas[x] > y){
            estrellas[x] = y;
            num_estrellas.insert(x);
        }
    }

    cout<<num_estrellas.size()<<endl;

    for(const auto& elem : num_estrellas){
        cout<<elem<<" "<<estrellas[elem]<<endl;
    }


    return 0;
}
