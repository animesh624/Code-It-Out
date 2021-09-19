#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef pair<int, int> pi;
#define endl "\n"
               
int main(){

   ios_base::sync_with_stdio(false);
     cin.tie(NULL);
   
   string s;
   cin>>s;
   ll l=s.length();
   ll counth=0;
   ll countm=0;
   for(ll i=0;i+4<l;i++){
      if(s.substr(i,5)=="heavy")
         counth++;
      else if(s.substr(i,5)=="metal"){
          countm=countm+counth;
      }
   } 
   cout<<countm<<endl;


   return 0;
}
