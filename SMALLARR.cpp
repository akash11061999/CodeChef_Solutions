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
	int n,x;
	cin>>n>>x;
    int a[n];
    float sum=0;
	FOR(i,n)
	{
	    cin>>a[i];
	    sum+=a[i];
	}
	int mx = INT_MIN, mxend = 0; 
    for (int i = 0; i < n; i++) 
    { 
        mxend = mxend+a[i]; 
        if (mx<mxend) 
            mx=mxend; 
        if (mxend< 0) 
            mxend=0; 
    } 
    //cout<<mx<<" ";
    float tmp=(float)mx-((float)mx/x);
    sum-=tmp;
    cout<<sum;
	return 0;
}
