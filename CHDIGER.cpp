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
	    ull n,d;
	    cin>>n>>d;
	    ull tmp=n;
	    vector<ll> v;
	    while(tmp!=0)
	    {
	        v.push_back(tmp%10);
	        tmp=tmp/10;
	    }
	    reverse(v.begin(),v.end());
	    ull len=v.size();
	    if(v[len-1]>d)
	        v[len-1]=d;
	    for(ll i=len-2;i>=0;i--)
	    {
	        if(v[i]>v[i+1])
	        {
	            //v[i]=v[i+1];
	            //v[i+1]=0;
	            v.erase(v.begin()+i);
	            v.push_back(d);
	        }
	    }
	    string s="";
	    for(ll i=0;i<v.size();i++)
	    {
	       // if(v[i]==0)
	       //     continue;
	        //tmp=(tmp*10)+v[i];
	        s.append(to_string(v[i]));
	    }
	    cout<<s<<endl;
	}
	return 0;
}
