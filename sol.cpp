#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int n;
	cin >> n;
	int a[n];
	int sum1=0;
	for(int i=0; i<n; ++i) {
		cin >> a[i];
		sum1+=a[i];
	}
	sum1/=2;
	sort(a, a+n);
	int sum2=0, cnt=0;
	for(int i=n-1; i>=0; --i) {
		sum2+=a[i];
		cnt++;
		if(sum2>sum1)
			break;
	}
	cout << cnt << "\n";
}
