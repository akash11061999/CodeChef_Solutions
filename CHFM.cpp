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
	    ll n,sum=0;
	    cin>>n;
	    vector <ll> a(n);
	    FOR(i,n)
	    {
	        cin>>a[i];
	        sum+=a[i];
	    }
	    double tmp=(double)sum/n;
	    //cout<<tmp<<" ";
	    auto it=find(a.begin(),a.end(),tmp);
	    if(it==a.end())
	        cout<<"Impossible\n";
	    else
	        cout<<(it-a.begin()+1)<<endl;
	}
	return 0;
}
