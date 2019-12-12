#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define FORmap(i,mp) for(auto i=mp.begin();i!=mp.end();i++)
#define vll vector<ll>
#define vs vector<string>
#define pb(x) push_back(x)
#define fast  ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define mod 1000000007
using namespace std;

int main() {
	// your code goes here
	fast;
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n;
	    cin>>n;
	    vector<ll> v(n);
	    FOR(i,n)
	        cin>>v[i];
	    int i=0;
	    FOR(j,n-2)
	    {
	        if((v[i]>=v[i+1] && v[i]<=v[i+2]) || (v[i]<=v[i+1] && v[i]>=v[i+2]))
	            v.erase(v.begin(),v.begin()+1);
	        else if((v[i+1]>=v[i] && v[i+1]<=v[i+2]) || (v[i+1]<=v[i] && v[i+1]>=v[i+2]))
	            v.erase(v.begin()+1,v.begin()+2);
	        else if((v[i+2]>=v[i+1] && v[i+2]<=v[i]) || (v[i+2]<=v[i+1] && v[i+2]>=v[i]))
	            v.erase(v.begin()+2,v.begin()+3);
	    }
	    FOR(i,v.size())
	        cout<<v[i]<<" ";
	    cout<<"\n";
	}
	return 0;
}

