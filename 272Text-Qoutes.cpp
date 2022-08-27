/*                        Bismillahir Rahmanir Rahim                                    */
#include <bits/stdc++.h>
#include <iostream>
#include <math.h>
#include <set>
#include <vector>
#include <iomanip>
#include <map>
#include <string.h>
/*                                 [ Define ]                                              */

#define                 ci(n) cin>>n
#define                 co(n) cout<<n
#define                 new cout<<endl
#define                 ses return 0

#define foR0(num)       for(ll i = 0; i < num; i++)
#define foR1(num)       for(ll i = 1; i <= num; i++)
#define foRev(num)      for(ll i = num - 1; i >= 0; i--)
#define forIn0(arr,num)  for(ll i = 0; i < num; i++) ci(arr[i]);
#define forIn1(arr,num) for(ll i = 1; i <= num; i++) ci(arr[i]);
#define pb              push_back
#define pob             pop_back
#define pf              push_front
#define pof             pop_front
#define l(s)            s.size()
#define asort(a)        sort(a,a+n)
#define tcas(t)         while(t--)
#define all(v)          (v).begin(), (v).end()
#define TESTGO          ll t;cin>>t;while(t--)

#define no   cout << "NO" <<endl
#define yes  cout << "YES" <<endl
#define a_print  for(ll i=0;i<n;i++){cout<<a[i]<<" ";}
#define ld   long double

using namespace std;

typedef long long ll;
/*                                   :(Solve                                              */
ll gcd(ll a, ll b) { return !b ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return (a / gcd(a, b)) * b; }
bool isPrime=true;
ll prime(ll n)
{
    // 0 and 1 are not prime numbers
    if (n == 0 || n == 1)
    {
        isPrime = false;
    }
    else
    {
        for (ll i = 2; i <= n / 2; ++i)
        {
            if(n%i==0)
            {
                isPrime = false;
                break;
            }
        }
    }
}
/*bool sec(pair<ll,ll> a,pair<ll,ll> b)
{
    if(a.S!=b.S)
    {
        if(a.S<b.S)return false;
        return true;
    }
    else
    {
        if(a.F>b.F)return false;//sort 2nd elements as descending order: use ->sort(all(a),sec)
        return true;
    }
}*/
template <typename T>
bool cmpr(string a, string b)
{
    return a.size()<b.size();
}

bool ck(string a, string b)
{
    if(b.find(a)==-1) return false;
    else return true;
}

void solve()
{
  char s;
  ll c=1;
  while(scanf("%c",&s)==1)
  {
  	if(s=='"')
  	{
  		if(c%2)cout<<"``";
  		else cout<<"''";
  		c++;
  	}
  	else cout<<s;
  }


}
// call..........
int main()
{
     solve();
    ses;
}
/* [ZahidulIslamRoni] */
/*.......(END)......    :)
......(Alhamdulillah)..........*/
