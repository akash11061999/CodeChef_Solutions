#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007;
using namespace std;

int main() {
	// your code goes here
	fast;
	ll n,res=0,sum=0;
	cin>>n;
	ll a[n];
	unordered_map<int, int> m;
	FOR(i,n)
	{
	    cin>>a[i];
	    m[a[i]]++;
	}
	FOR(i,n)
	{ 
		res += m[sum-a[i]]; 
		if (sum-a[i] == a[i]) 
			res--; 
	}
	cout<<(res/2);
	return 0;
}
