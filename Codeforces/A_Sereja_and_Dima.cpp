#include<iostream>
#include<algorithm>
#include<vector>
#include<iterator>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(auto &val : v)
    {
        cin>>val;
    }

    int l = 0;
    int r = n-1;

    int s = 0;
    int d = 0;
    for(int i = 0; i<n; ++i)
    {
        if(i%2 == 0) //s turn
        {
            if(v[l] > v[r])
            {
                s = v[l];
                ++l;
            }

            else if(v[l] < v[r])
            {
                s = v[r];
                --r;
            }
        }
        else{

            if(v[l] > v[r])
            {
                d = v[l];
                ++l;
            }
            
            else if(v[l] < v[r])
            {
                d = v[r];
                --r;
            }

        }
    }

    cout<<s<<" "<<d<<endl;
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