#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
using namespace std;

void solve()
{
    map<string, int>m;
    int n;
    cin>>n;
    for(int i =0; i<n; ++i)
    {
        string s;
        cin>>s;

        if(m[s] >= 1)
        {
            cout<<"YES"<<endl;
            m[s]++;
        }
        else{
            cout<<"NO"<<endl;
            m[s]++;
        }

    }
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}