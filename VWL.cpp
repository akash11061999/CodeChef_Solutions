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
	ll n;
	cin>>n;
	string s;
	set<char> st;
	cin>>s;
	FOR(i,n)
	{
	    if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
	        st.insert(s[i]);
	}
	if(st.size()>=4)
	    cout<<"Yes";
	else 
	    cout<<"No";
	return 0;
}
