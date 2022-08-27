/*                        Bismillahir Rahmanir Rahim                                    */
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
typedef long long ll;
void solve()
{
  ll a,b;
  while(cin>>a>>b)
  {
  	ll Max=0;
  	ll p=max(a,b);
  	ll q=min(a,b);
    for(ll i=q;i<=p;i++)
    {
      ll n=i,c=1;
      while(n!=1)
  	  {
  		if(n%2)n=3*n+1;
  		else n=n/2;
  		c++;
  	  }
      Max=max(Max,c);
    }
     cout<<a<<" "<<b<<" "<<Max<<endl;	
  }
}

int main()
{
    solve();
    ses;
}
