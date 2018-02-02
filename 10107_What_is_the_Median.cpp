#include <iostream>
#include<algorithm>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    ll t,count=0,a[100000];
    while(cin>>t)
    {
        a[count]=t;
        count++;
        sort(a,a+count);
        if(count%2==0)
        {
            ll temp=(a[count/2]+a[(count/2)-1])/2;
            cout<<temp<<endl;
        }
        else
        {
            cout<<a[count/2]<<endl;
        }
    }
	return 0;
}