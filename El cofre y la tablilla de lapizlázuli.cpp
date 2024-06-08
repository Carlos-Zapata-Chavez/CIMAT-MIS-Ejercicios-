#include <iostream>

using namespace std;

uint64_t x,y,z;

bool cabe(uint64_t i, uint64_t j, uint64_t k){
    if(i <= x && j<=y && k<=z){
        cout<<"1"<<endl;
        return true;
    } else{
        return false;
    }

}

int main(){
    uint64_t a, b, c;
    cin>>a>>b>>c>>x>>y>>z;

    if(cabe(a, b, c)) return 0;
    if(cabe(a, c, b)) return 0;
    if(cabe(b, a, c)) return 0;
    if(cabe(b, c, a)) return 0;
    if(cabe(c, a, b)) return 0;
    if(cabe(c, b, a)) return 0;

    cout<<"0"<<endl;

    return 0;
}
