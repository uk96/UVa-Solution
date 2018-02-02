#include <iostream>
#include<algorithm>
#include<map>
#include<iomanip>
using namespace std;
#define ll long long
int main() {
	// your code goes here
    ll t;
    cin>>t;
    cin.ignore();
    cin.ignore();
    while(t--)
    {
        ll count=0;
        map<string,ll> m;
        string temp;
        while(getline(cin,temp),temp!="")
        {
            //cout<<temp<<endl;
            if(m.find(temp)==m.end())
                m[temp]=1;
            else
                m[temp]++;
            count++;
        }
        cout<<fixed;
        for(map<string,ll>::iterator it=m.begin();it!=m.end();it++)
        {
            cout<<it->first<<" "<<setprecision(4)<<(double)(1.0*(it->second)/count)*100<<endl;
        }
        if(t!=0)
            cout<<endl;
    }
	return 0;
}