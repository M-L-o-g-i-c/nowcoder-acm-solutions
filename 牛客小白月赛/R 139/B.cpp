
#include <bits/stdc++.h>
using namespace std;

int x;

long long rs = 0;

int main() {
	int t;
	cin>>t;
	while(t--) {
		int n;
		cin>>n;
		rs = 0;
		for(int i=1;i<=n;i++) {
			cin>>x;
			rs += 1LL * x * i;
		}
		cout<<rs<<endl;
	}
}
