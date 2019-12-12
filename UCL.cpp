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
	    string s1,s2,s3,answer[2];
	    ll tmp1,tmp2,res1=0,res2=0;
	    map <string, ll> mp1,mp2;
	    //map<string, pair<ll,ll>> ans;
	    FOR(i,12)
	    {
	        cin>>s1>>tmp1>>s2>>tmp2>>s3;
	        if(tmp1>tmp2)
	            mp1[s1]+=3;
	        else if(tmp2>tmp1)
	            mp1[s3]+=3;
	        else
	        {
	            mp1[s1]++;
	            mp1[s3]++;
	        }
	        mp2[s1]+=(tmp1-tmp2);
	        mp2[s3]+=(tmp2-tmp1);
	    }
	    for(auto i=mp1.begin();i!=mp1.end();i++)
	    {
	        //ans[i->first]={i->second,mp2[i->first]};
	        if( ((i->second)>res1) )
	        {
	            answer[0]=i->first;
	            res1=i->second;
	            res2=mp2[i->first];
	        }
	        else if( ((i->second)==res1) && (mp2[i->first]>res2) ) 
	        {
	            answer[0]=i->first;
	            res1=i->second;
	            res2=mp2[i->first];
	        }
	    }
	    mp1.erase(answer[0]);
	    mp2.erase(answer[0]);
	    res1=0;
	    res2=0;
	    for(auto i=mp1.begin();i!=mp1.end();i++)
	    {
	        //ans[i->first]={i->second,mp2[i->first]};
	        if( ((i->second)>res1) )
	        {
	            answer[1]=i->first;
	            res1=i->second;
	            res2=mp2[i->first];
	        }
	        else if( ((i->second)==res1) && (mp2[i->first]>res2) ) 
	        {
	            answer[1]=i->first;
	            res1=i->second;
	            res2=mp2[i->first];
	        }
	    }
	   // for(auto i=mp1.begin(), j=mp2.begin();i!=mp1.end() && j!=mp2.end();i++)
	   //     cout<<i->first<<" "<<i->second<<endl;
	    cout<<answer[0]<<" "<<answer[1]<<endl;
	}
	return 0;
}
