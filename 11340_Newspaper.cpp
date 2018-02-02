#include <iostream>
using namespace std;
#define ll long long
int main() {
	// your code goes here
	ll t,i,j,k;
	cin>>t;
	while(t--)
	{
	    ll a[256];
	    for(i=0;i<256;i++)
	        a[i]=0;
	    ll n;
	    cin>>n;
	    while(n--)
	    {
	        char c;
	        ll temp;
	        cin.ignore();
	        cin>>c>>temp;
	        a[c]=temp;
	    }
	    string s;
	    ll val[256];
	    for(i=0;i<256;i++)
	        val[i]=0;
	    cin>>n;
	    cin.ignore();
	    while(n--)
	    {
	        getline(cin,s);
	        for(i=0;i<s.length();i++)
	            val[s[i]]++;     
	    }
	    ll cost=0;
	    char cv=' ';
	    val[cv]=0;
	    cv='\n';
	    val[cv]=0;
	    for(i=0;i<256;i++)
	        cost=cost+(a[i]*val[i]);
	   ll cent=cost%100;
	   ll dollar=cost/100;
	   if(cent<=9)
	    cout<<dollar<<".0"<<cent<<"$"<<endl;
	   else
	    cout<<dollar<<"."<<cent<<"$"<<endl;
	}
	return 0;
}