#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
          
int main(){

  ios_base::sync_with_stdio(false);
     cin.tie(NULL);
  
  ll n;
  cin>>n;
  ll arr[n+1]={0};
  for(ll i=1;i<=n;i++)
     cin>>arr[i];
   ll f=1,b=n;
  ll count=0;
  ll la=-1;
  string s;
  while(1){
      if(arr[f]>la && arr[b]>la){
         if(arr[f]>arr[b]){
          la=arr[b];
          count++;
          b--;
          s.push_back('R');
         }
         else{
          la=arr[f];
          count++;
          f++;
          s.push_back('L');
         }
      }
      else if(arr[f]>la){
         la=arr[f];
         count++;
         f++;
         s.push_back('L');
      }
      else if(arr[b]>la){
         la=arr[b];
         count++;
         b--;
         s.push_back('R');
      }
      else
        break;
     if(b<f)
      break;
  }
  cout<<count<<endl;
  cout<<s<<endl;

  return 0;
}
