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
	    ll n,present=0,res=0;
	    cin>>n;
	    string s;
	    cin>>s;
	    FOR(i,n)
	    {
	        if(s[i]=='P')
	            present++;
	    }
	    ll tmp = ceil( n * (0.75) );
	    //cout<<tmp<<" ";
	    if(present>=tmp)
	        cout<<0<<endl;
	    else
	    {
	        for(ll i=2;i<(n-2);i++)
	        {
	            if( s[i]=='A' && (s[i-2]=='P' || s[i-1]=='P') && (s[i+2]=='P' || s[i+1]=='P') )
	            {
	                res++;
	                present++;
	                if(present>=tmp)
	                    break;
	            }
	        }
	        if(present>=tmp)
	            cout<<res<<endl;
	        else
	            cout<<-1<<endl;
	    }
	}
	return 0;
}
