#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll s,b,i,j,k;
	while(cin>>s>>b,s!=0&&b!=0)
	{
	  ll l[s+4],r[s+4];
	  for(i=1;i<=(s+1);i++)
	  {
	    l[i]=i-1;
	    r[i]=i+1;
	  }
	  l[1]=-1;
	  r[s]=-1;
	  while(b--)
	  {
	    ll u,v;
	    cin>>u>>v;
	    r[l[u]]=r[v];
	    l[r[v]]=l[u];
	    if(l[u]==-1)
        cout<<"* ";	
      else
      {
        r[l[u]]=r[v];
        cout<<l[u]<<" ";
      }
      if(r[v]==-1)
        cout<<"*"<<endl;	
      else
      {
        l[r[v]]=l[u];
        cout<<r[v]<<endl;
      }
	  }
	  cout<<"-"<<endl;
	}
	return 0;
}