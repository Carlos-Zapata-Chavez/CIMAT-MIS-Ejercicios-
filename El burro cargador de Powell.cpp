#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t n;
    uint64_t pi = 0;
    uint64_t pd = 0;
    uint64_t ti = 0;
    uint64_t td = 0;
    string si = "";
    string sd = "";

    cin>>n;

    uint64_t t;
    for(uint64_t i = 0; i < n; i++){
        cin>>t;

        if(pi == pd){
            pi += t;
            ti ++;
            si += to_string(i + 1);
            si += " ";
        } else if(pi < pd){
            pi += t;
            ti ++;
            si += to_string(i + 1);
            si += " ";
        } else{
            pd += t;
            td ++;
            sd += to_string(i + 1);
            sd += " ";
        }
    }

    cout<<ti<<endl;
    cout<<si<<endl;
    cout<<td<<endl;
    cout<<sd<<endl;

    return 0;
}
