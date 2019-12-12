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
	    string s;
	    cin>>s;
	    int n=s.length(),cnt0=0,cnt1=0;
	    FOR(i,n)
	    {
	        if(s[i]=='0')
	            cnt0++;
	        else
	            cnt1++;
	    }
	    if(cnt0%2==0 && cnt1%2==0)
	        cout<<"LOSE\n";
	    else if(cnt0%2==0 && cnt1%2!=0)
	        cout<<"WIN\n";
	    else if(cnt0%2!=0 && cnt1%2==0)
	        cout<<"LOSE\n";
	    else
	        cout<<"WIN\n";
	}
	return 0;
}

