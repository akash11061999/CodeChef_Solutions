#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define FORmap(i,mp) for(auto i=mp.begin();i!=mp.end();i++)
#define pb(x) push_back(x)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
using namespace std;

vector<ll> solve(ull n)
{
    vector<ll> v(n);
    v[0]=1;
    FOR1(i,n)
    {
        v[i]=(v[i-1]%mod);
        v[i]=(v[i]*(i+2))%mod;
        v[i]=(v[i]+(i+1))%mod;
    }
    return v;
}


int main() {
	// your code goes here
	fast;
	vector<ll> v=solve(1000001);
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    cout<<v[n-1]<<endl;
	}
	return 0;
}
