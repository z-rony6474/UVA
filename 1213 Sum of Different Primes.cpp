#include<bits/stdc++.h>
using namespace std;
int dp[1125][15];
int a[1125];
int cnt=0;
void SieveOfEratosthenes()
{
	bool prime[1120 + 1];
	memset(prime, true, sizeof(prime));

	for (int p = 2; p * p <= 1120; p++) {
		if (prime[p] == true) {
			for (int i = p * p; i <= 1120; i += p)
			prime[i] = false;
		}
	}
	int i=0;
	for (int p = 2; p <= 1120; p++)
		if (prime[p])
		{
			a[i]=p;i++;cnt++;
		}		
}
 
void solve(int n,int k)
{
    dp[0][0] = 1 ;
    for(int i = 0 ; i <n ; i++ ){
        for( int j = 1120 ; j >= a[i] ; j-- )
            for(int  k = 1 ; k < 15 ; k++ ){
                dp[j][k] += dp[ j - a[i] ][k - 1];
        }
    }
}
int main()
{
    int n,k;
    SieveOfEratosthenes();
    solve(cnt,15);
    while(cin>>n>>k,(n&&k))
    {
        cout<<dp[n][k]<<endl;
    }
 
}