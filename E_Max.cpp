#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int> v;
    for(int i = 0; i<n; i++)
    {
        int el;cin>>el;
        v.push_back(el);
    }
    cout<< *max_element(v.begin(),v.end())<<endl;

}