
#include <bits/stdc++.h>
using namespace std;


int main() {
	int n;
	cin>>n;
	n *= 2;
	char x;
	int y, rs1 = 0, rs2 = 0;
	for(int i=0;i<n;i++) {
		cin>>x;
		y = (x == '1');
		if(y) rs2++;
		else rs1++;
	}
	cout<<rs1<<' '<<rs2<<endl;
}
