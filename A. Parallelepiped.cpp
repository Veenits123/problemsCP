#include<bits/stdc++.h>
using namespace std;

#define int long long int
#define ld long double
#define F first
#define S second
#define P pair<int,int>
#define pb push_back
#define endl '\n'

int32_t main(){
  
  ios_base:: sync_with_stdio(false);
  cin.tie(NULL); cout.tie(NULL);

  #ifndef ONLINE_JUDGE
  freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  #endif

  // code starts

  //int t;cin>>t;while(t--){}
    int s1,s2,s3;cin>>s1>>s2>>s3;
    int a=sqrt((s3*s1)/s2);
    int b=sqrt((s2*s1)/s3);
    int c=sqrt((s2*s3)/s1);
  	cout<<4*(a+b+c);
  return 0;
}