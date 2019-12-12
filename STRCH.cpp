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
	    ll n,tmp,res=0;
	    cin>>n;
	    string s;
	    char x;
	    vector<ll> v;
	    cin>>s>>x;
	    tmp=n;
	    ll tmpn=n;
	    ll prev=-1,curr;
	    FOR(i,n)
	    {
	        curr=i+1;
	        if(s[i]==x)
	        {
	            res+=tmp;
	            //v.push_back(i+1);
	            if(prev!=-1)
	            {
	                res-=(((n-prev)*prev)-((curr-prev-1)*prev));
	            }
	            prev=curr;
	        }
            tmpn-=2;
            tmp+=tmpn;
	    }
	   // ll len=v.size();
	   // FOR(i,len-1)
	   // {
	   //     res-=(((n-v[i])*v[i])-((v[i+1]-v[i]-1)*v[i]));
	   // }
	    cout<<res<<endl;
	}
	return 0;
}
