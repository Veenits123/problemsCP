#include<bits/stdc++.h>
using namespace std;

//#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define endl '\n'

int main(){
  
  ios_base:: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  // code starts

  int t;cin>>t;while(t--){
  	int n,a,b;cin>>n>>a>>b;
  	string s="";
  	for(int i=0;i<n;i++){
  		s+=('a'+i%b);
  	}
  	cout<<s<<endl;
  }
    
  
  return 0;
}