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
	    ll n,k,v,sum,suma=0,res=0;
	    cin>>n>>k>>v;
	    //sum=(n+k)*v;
	    ll a[n];
	    FOR(i,n)
	    {
	        cin>>a[i];
	        suma+=a[i];
	    }
	    sum=(n+k)*v;
	    ll tmp=sum-suma;
	    //cout<<suma<<" ";
	    if((tmp>0) && ((tmp%k)==0))
	        res=tmp/k;
	    else
	        res=-1;
	    cout<<res<<endl;
	}
	return 0;
}
