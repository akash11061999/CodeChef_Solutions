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
	int t;
	cin>>t;
	while(t--)
	{
        int n,res=INT_MIN;
        cin>>n;
        int a[n],b[n];
        FOR(i,n)
        {
            cin>>a[i];
        }
        FOR(i,n)
        {
            cin>>b[i];
            int tmp=(a[i]*20)-(b[i]*10);
            res=max(res,tmp);
        }
        res=max(res,0);
        cout<<res<<endl;
	}
	return 0;
}

