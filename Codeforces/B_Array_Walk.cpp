#include <iostream>
#include <vector>
#include <map>
#include <list>
#include <set>
#include <algorithm>
#include <queue>
#include <stack>
#include <cstring>
#include <cmath>
#include <bitset>
#include <string>
#include <unordered_set>
#include <unordered_map>
#include <cstdlib>
#include <iomanip>
#define f               first
#define s              second
#define ll               long long
#define pb               push_back
#define mp               make_pair
#define pii              pair<int,int>
#define vi               vector<int>
#define mii              unordered_map<int,int>
#define pqb              priority_queue<int>
#define pqs              priority_queue< int,vi,greater<int> >
#define setbits(x)       __builtin_popcountll(x)
#define zrobits(x)       __builtin_ctzll(x)
#define mod              1000000007
#define inf              1e10
#define ps(x,y)          fixed<<setprecision(y)<<x
#define mk(arr,n,type)   type *arr=new type[n];
#define w(x)             int x; cin>>x; while(x--)
#define me(i,start,end)  for(int i=start;i<end;i++)
#define he(i,end,start) for(int i=end-1;i>=start;i--)
#define all(v)         v.begin(),v.end()
using namespace std;


int f(vi &v, int idx, int k , int z, vector<vi>  &dp)
{
    if(k < 0 || idx == v.size()) return 0;

    if(dp[idx][z] != -1) return dp[idx][z];
    int prev = 0;

    if(z != 0)
    {
        if(idx > 0  && idx < v.size()-1)
        {
            int l = f(v, idx - 1, k - 1, z - 1, dp);
            int r = f(v, idx + 1, k - 1 , z ,dp);

            prev = max(l,r);
        }

        if(idx == 0)
        {
            int r = f(v, idx + 1, k - 1, z, dp);
            prev = r;
        }
    }

    if(z == 0)
    {
        int r = f(v, idx + 1, k - 1, z ,dp);

        prev = r;

    }


    return dp[idx][z] = prev + v[idx];
}


int main()
{
    // Your code goes here
    w(t)
    {
        int n, k, z;
        cin >>n >> k >> z;
        vi a(n,0);
        me(i,0,n)
        {
            cin >> a[i];
        }
        vector<vi> dp(n+1, vi(z+1, -1));
        
        cout << f(a, 0, k , z , dp) << endl;
    }
    return 0;
}