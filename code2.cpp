#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
					
int main(){

	ios_base::sync_with_stdio(false);
     cin.tie(NULL);
	
   ll n,a,b;
   cin>>n;
   vector<pair<ll,ll>>v;
   while(n--){
      cin>>a>>b;
      v.push_back({a,b});
   }

  sort(v.begin(),v.end());
  ll total=0;
  ll first=0;
  for(ll i=0;i<v.size();i++){
  	first=first+v[i].first;
  	 total=total+v[i].second-first;
  }
  cout<<total<<endl;

	return 0;
}
