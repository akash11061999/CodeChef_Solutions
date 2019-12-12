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
        ll a[3],c[3],flag=1;
        vector<pair<ll,ll>> v;
        FOR(i,3)
            cin>>a[i];
        FOR(i,3)
        {
            cin>>c[i]; 
            v.pb(make_pair(a[i],c[i]));
        }
        sort(v.begin(),v.end());
        ll prev=v[0].second;
        FOR1(i,3)
        {
            if(v[i].first>v[i-1].first)
            {
                if(v[i].second<=v[i-1].second)
                {
                    flag=-1;
                    break;
                }
            }  
            else
            {
                if(v[i].second!=v[i-1].second)
                {
                    flag=-1;
                    break;
                }
            }
        }
        if(flag==-1)
            cout<<"NOT FAIR\n";
        else
            cout<<"FAIR\n";
	}
	return 0;
}

