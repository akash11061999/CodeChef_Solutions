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
	    ll n,pos=0,neg=0;
	    cin>>n;
	    //ll a[n];
	    FOR(i,n)
	    {
	        ll tmp;
	        cin>>tmp;
	        if(tmp>0)
	            pos++;
	        else if(tmp<0)
	            neg++;
	    }
	    if(pos==0 || neg==0)
	        cout<<max(pos,neg)<<" "<<max(pos,neg)<<endl;
	    else
	        cout<<max(pos,neg)<<" "<<min(pos,neg)<<endl;
	}
	return 0;
}