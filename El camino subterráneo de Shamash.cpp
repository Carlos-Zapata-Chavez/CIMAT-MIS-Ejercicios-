#include <bits/stdc++.h>

using namespace std;

uint64_t p60n( uint64_t n){
    uint64_t res = 60;
    n--;
    for(uint64_t i=0; i<n; i++){
        res *= 60;
    }

    return res;
}

string format(int num){
    string s = "";
    for(int i=0; i<int(num/10); i++){
        s += "L";
    }
    for(int i=0; i<(num%10); i++){
        s += "I";
    }

    return s;

}

int main(){
    uint64_t p;
    uint64_t pow60n;
    vector<string> res;
    uint64_t val;

    cin>>p;

    bool flag = false;
    for(int i=6; i>0; i--){
        pow60n = p60n(i);
        val = p/pow60n;

        if(!flag){
            if(val != 0){
                flag = true;
            }
        }

        if(flag){
            res.push_back(format(val));
        }

        p = p % pow60n;
        //cout<<"I : "<<i<<endl;
        //cout<<"pow60n"<<pow60n<<endl;

        //cout<<"Val: "<<val<<endl;
        //cout<<"p : "<<p<<endl;
    }
    //cout<<p<<endl;
    res.push_back(format(p));

    for(int i=0; i<res.size()-1; i++){
        cout<<res.at(res.size() - i - 1)<<".";
    }

    cout<<res.at(0);

    cout<<endl;


    return 0;
}
