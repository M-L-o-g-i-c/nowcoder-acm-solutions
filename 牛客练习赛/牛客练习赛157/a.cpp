
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--) {
        int x, y;
        cin>>x>>y;
        //c++ 保证 x - y 不小于0
        if(y > x) swap(x, y);
        int diff = x - y;
        /*
        if(diff % 3) {
            if(diff % 2) cout<<"Bob"<<endl;
            else cout<<"Alice"<<endl;
        }
        else {
            if(diff % 2) cout<<"Alice"<<endl;
            else cout<<"Bob"<<endl;
        }

        */
        int mod6 = diff % 6;
        if(mod6 == 0 || mod6 == 1 || mod6 == 5) cout<<"Bob"<<endl;
        else cout<<"Alice"<<endl;
    }
}
