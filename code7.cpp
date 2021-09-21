#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
ll mod=1000000007;
				
int main(){

	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	ll n,x;
	cin>>n>>x;
	ll arr[n+1]={0};
	for(ll i=1;i<=n;i++)
		cin>>arr[i];
	ll dp[x+1]={0};
	dp[0]=1;
	ll min=10e5;
	ll a;
	for(ll i=1;i<=x;i++){
		a=10e3;
		min=10e5;
         for(ll j=1;j<=n;j++){
         	 if(i-arr[j]==0)
         	 	a=1;
         	 else if(i-arr[j]>0){
         	 	if(dp[i-arr[j]]==0)
         	 		continue;
         	 	  a=dp[i-arr[j]]+1;
         	 }
         	 else
         	 	continue;
         	
             
         	  if(a<=min){
         	 	min =a;
         	   dp[i]=a;
         	 }
         	 
         }
	}
	// for(ll i=0;i<=x;i++)
	// 	cout<<dp[i]<<" ";
	// cout<<endl;
	if(dp[x]==0)
		cout<<-1;
    else
	cout<<dp[x]<<endl;
    


	return 0;
}
