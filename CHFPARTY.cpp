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
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,past=0;
	    cin>>n;
	    ll a[n];
	    FOR(i,n)
	    {
	        cin>>a[i];
	    }
	    sort(a,a+n);
	    FOR(i,n)
	    {
	        if(past>=a[i])
	            past++;
	    }
	    cout<<past<<endl;
	}
	return 0;
}
