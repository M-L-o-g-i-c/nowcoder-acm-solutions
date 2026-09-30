
#include <bits/stdc++.h>
using namespace std;


int a[200001];

int l = 0, h = 100001, m;


int avg(int a, int b) {
	int result = (a&b) + ((a^b)>>1);
	return result;
}


int k_final = 100000, lowest, highest;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int n;
        cin>>n;
        for(int i=0;i<n;i++) cin>>a[i];
        l = 0;
        h = 100001; //二分答案
        sort(a, a + n);
        bool success = true;
        while(l < h) {
            m = avg(l, h);
            lowest = a[0] - m; //b[i]一定要选最小的
            success = true;
            for(int i=0;i<n;i++) {
                highest = a[i] + m; //b[i]不能超过这个数
                if(a[i]-m>lowest) lowest = a[i]-m; //能选的里面最小的
                else if(lowest > highest) {
                    success = false;
                    break;
                }
                lowest++; //选掉了
            }
            if(success) {
                k_final = m;
                h = m;
            } //看看能不能更小
            else l = m + 1; //太小了网上找
        }
        cout<<k_final<<endl;
    }
}
