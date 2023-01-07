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
    int n,m,k;
    cin>>n>>m>>k;
    vi arr(n,0);
    for(auto &val: arr)cin>>val;

    //storing operations in matrix
    vector<vector<int>> operations(m,vector<int>(3,0));
    for(auto &i: operations)
    {
        for(auto &j : i)
        {
            cin>>j;
        }
    }

    //creating frequency array to know how many times a operation must be done
    vi freq(n+1,0);
    me(i,0,k)
    {
        int x,y;
        cin>>x>>y;x--;y--;
        freq[x]++;
        freq[y+1]--; 
    }
    

    //taking prefix of frequency array
    me(i,1,n+1)
    {
        freq[i] += freq[i-1];
    }
    

    vi diff(n+1,0);

    //accessing operations by their index and operating them on diff[]{0}, our k here will be frequency*d
    me(i,0,m)
    {
        int l,r,d,k;
        l = operations[i][0];l--;
        r = operations[i][1];r--;
        d = operations[i][2];
        k = freq[i]*d;
        diff[l] +=k;
        diff[r+1] -= k;
    }

   //prefixing diff array
    me(i,1,n+1)
    {
        diff[i] += diff[i-1];
    }

    //adding updates in the diff array to our original array
    me(i,0,n)
    {
        arr[i] += diff[i];
    }

    //printing values of our updated arr[]
    for(auto &val: arr) cout<<val<<" ";
    cout<<endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}


// © Copyright 2022 swastiksharma09_Template.ex