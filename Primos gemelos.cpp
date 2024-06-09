#include <bits/stdc++.h>

using namespace std;

bool isPrime(uint64_t a){
    if(a == 1) return false;
    if(a == 2) return true;
    for(uint64_t i=2; i<int(sqrt(a))+1; i++){
        if((a % i) == 0) return false;
    }

    return true;
}

int main(){
    uint64_t n;
    cin>>n;

    while(true){
        if(isPrime(n)){
            if(isPrime(n + 2)){
                cout<<n<<" "<<n+2<<endl;
                break;
            }
        }

        n++;
    }

    return 0;
}
