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
// 	ll t;
// 	cin>>t;
// 	while(t--)
// 	{
	    ll n,res=0,cnt=0;
	    cin>>n;
	    ll tmp;
	    set<ll> s;
	    FOR(i,n)
	    {
	        cin>>tmp;
	        s.insert(tmp);
	    }
	    if(s.size()>1)
	    {
    	    for(auto i=s.rbegin();i!=s.rend() && cnt<2;i++)
    	    {
    	        res=(*i);
    	        cnt++;
    	    }
	    }
	    else
	        res=0;
	    cout<<res;
	//}
	return 0;
}
