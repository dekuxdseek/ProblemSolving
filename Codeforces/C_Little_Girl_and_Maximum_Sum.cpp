/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

#include<algorithm>
#include<iostream>
#include<iterator>
#include<map>
#include<vector>
#include<set>
#include<unordered_map>
#include<unordered_set>
#include<numeric>
#include<queue>
#include<stack>
#include<climits>



//Swastik Sharma
#define f                       first
#define s                       second
#define ll                      long long
#define pb                      push_back
#define mp                      make_pair
#define pii                     pair<int,int>
#define vi                      vector<int>
#define mii                     unordered_map<int,int>
#define me(i,start,end)         for(int i =start; i<end; ++i)
#define she(i,start,end)        for(int i =end-1; i>=start; --i)
#define all(v)                  v.begin() , v.end()
#define w(x)                    int x;cin>>x;while(x--)

using namespace std;


void solve()
{
    //your code goes here
    ll n,q;
    cin>>n>>q;
    vector<ll> v(n,0);
    for(auto &val: v)cin>>val;
    vector<ll> d(n+2,0);



    while(q--)
    {
        ll a,b;
        cin>>a>>b;
        d[a]+= 1;
        d[b+1]-= 1;
    }

    for(int i =1; i<=n+1; ++i)
    {
        d[i] += d[i-1];
    }

    sort(all(d));
    sort(all(v));

    ll ct=0;
    for(int i =0; i<n;++i)
    {
        ct += d[i+2]*v[i];
    }
    cout<<ct<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    t=1;
    while(t--)
    {
        solve();
    }return 0;
}


// © Copyright 2022 swastiksharma09_Template.ex