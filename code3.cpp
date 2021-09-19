#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
					
int main(){

	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	
  ll n,x;
  cin>>n>>x;
  ll arr[n+1]={0};
  for(ll i=1;i<=n;i++)
      cin>>arr[i];

  map<ll,ll>m;
  m[0]=1;
  ll sum=0;
  ll count=0;

  for(ll i=1;i<=n;i++){
  	sum=sum+arr[i];
       auto it=m.find(sum-x);
        if(it!=m.end()){
        	count=count+((*it).second);
        }
       m[sum]++;
  }
  // cout<<m.size()<<endl;

  // for(auto i:m)
  // 	cout<<i.first<<" "<<i.second<<endl;

  cout<<count<<endl;


	return 0;
}
