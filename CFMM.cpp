#include <bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define FOR(i,n) for(ll i=0;i<n;i++)
#define FOR1(i,n) for(ll i=1;i<n;i++)
#define FORn1(i,n) for(ll i=1;i<=n;i++)
#define pb(x) push_back(x)
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
	    ll n,res=0;
	    cin>>n;
	    string s[n];
	    map<char,ll> mp;
	    FOR(i,n)
	    {
	        cin>>s[i];
	        ll len=s[i].length();
	        FOR(j,len)
	            mp[s[i][j]]++;
	    }
	    while(1)
	    {
	        if(mp['c']>=2 && mp['e']>=2 && mp['o']>=1 && mp['d']>=1 && mp['h']>=1 && mp['f']>=1 )
	        {
	            res++;
	            mp['c']-=2;
	            mp['e']-=2;
	            mp['o']-=1;
	            mp['d']-=1;
	            mp['h']-=1; 
	            mp['f']-=1;
	        }
	        else
	            break;
	    }
	    cout<<res<<endl;
	}
	return 0;
}
