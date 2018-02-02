#include <iostream>
using namespace std;
#define ll long long
char small[500][500],big[500][500];
ll cost(ll n,ll m)
{
  ll i,j,k,u,v,co=0;
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      ll count=0;
      if((i+m)<=n&&(j+m)<=n)
      {
        for(u=0;u<m;u++)
        {
          for(v=0;v<m;v++)
          {
            if(big[i+u][j+v]==small[u][v])
              count++;
          }
        }
        if(count==(m*m))
          co++;
      }
    }
  }
  return co;
}
void rotate(ll n)
{
  ll i,j,k;
  char temp[n][n];
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
    {
      temp[i][j]=small[n-j-1][i];
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<n;j++)
      small[i][j]=temp[i][j];
  }
}
int main() {
	// your code goes here
	ll n,m,i,j,k;
	while(cin>>n>>m,n!=0&&m!=0)
	{
	  for(i=0;i<n;i++)
	    cin>>big[i];
	  for(i=0;i<m;i++)
	    cin>>small[i];
	  for(i=0;i<4;i++)
	  {
	    cout<<cost(n,m);
	    if(i<3)
	      cout<<" ";
	    rotate(m);
	  }
	  cout<<endl;
	}
	return 0;
}