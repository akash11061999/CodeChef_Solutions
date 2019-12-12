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
	    ll n,res=0;
	    cin>>n;
	    string s,p;
	    cin>>s>>p;
	    FOR(i,n)
	    {
	        if(p[i]=='N')
	            continue;
	        else if(s[i]==p[i])
	            res++;
	        else
	            i++;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
