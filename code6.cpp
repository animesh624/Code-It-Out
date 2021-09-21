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
 /////Same as coin change permutation  
   ll n;
   cin>>n;
   ll dp[n+1]={0};
   dp[0]=1;
  for(ll i=1;i<=n;i++){
     for(ll j=1;j<=6;j++){
        if(i-j>=0){
         dp[i]=(dp[i]%mod+dp[i-j]%mod)%mod;
        }
     }
  }
  cout<<dp[n]<<endl;


   return 0;
}

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef vector<int> vi;
// typedef pair<int, int> pi;
// #define endl "\n"

// ll mod=1000000007;
					
// int main(){

// 	ios_base::sync_with_stdio(false);
//      cin.tie(NULL);
	
//    ll n;
//    cin>>n;
//    ll dp[n+1]={0};
//   dp[1]=1;
//    ll k;
//    for(ll i=2;i<=n;i++){
//        ll count=6;
//        k=i-1;
//        if(i<=6 && i>=2)
//        		dp[i]++;
//        while(count--){
//           dp[i]=((dp[i]%(mod))+(dp[k]%(mod)))%mod;
//           k--; 
//           if(k<=0)
//           	break;
//        }
//    }
//    cout<<dp[n]<<endl;


// 	return 0;
// }
