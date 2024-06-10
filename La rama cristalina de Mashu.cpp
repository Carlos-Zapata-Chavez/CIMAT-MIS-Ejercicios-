#include <bits/stdc++.h>

using namespace std;

int main(){
    uint64_t n, k;
    string rama;
    uint64_t r = 0;
    cin>>n>>k>>rama;

    uint64_t inicio = 0, diamentes = 0, antimonios = 0;

    for(uint64_t fin=0; fin<n; fin++){
        if(rama[fin] == 'D'){
            diamentes++;
        } else {
            antimonios++;
        }

        while(antimonios > k){
            if(rama[inicio] == 'D'){
                diamentes--;
            } else{
                antimonios--;
            }

            inicio++;
        }

        r = max(r, diamentes);
    }

    cout<<r<<endl;

    return 0;
}
