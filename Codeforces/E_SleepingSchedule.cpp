#include <bits/stdc++.h>
#define f first
#define s second
#define ll long long
#define pb push_back
#define mp make_pair
#define pii pair<int, int>
#define vi vector<int>
#define mii unordered_map<int, int>
#define me(i, start, end) for(int i = start; i < end; ++i)
#define she(i, start, end) for(int i = end-1; i >= start; --i)
#define all(v) v.begin(), v.end()
#define w(x) int x; cin >> x; while (x--)

using namespace std;
int mod = 1e9 + 7;

int ct;
int f(int idx , vi & a, int t , int n,  int l , int r , int h, vector<vi> &dp)
{
    
    // cout << idx << " " << t << endl;
    if(idx == n) return 0;

    if(dp[idx][t] != -1) return dp[idx][t];

    ct++;
    int sub = max(f(idx +1, a , (t + a[idx+1] - 1)%h , n, l , r , h, dp), f(idx + 1 , a , (t + a[idx + 1])%h , n,  l , r , h, dp));

    t %= h;
    if(t>= l && t <= r) return dp[idx][t] = sub + 1;
    return dp[idx][t] = sub;
}

int main() {
    int n, h, l ,r ;
    cin >> n >> h >> l >> r;

    vi a(n,0);
    for(auto &val : a){cin >> val;}

    vector<vi> dp(n+1, vi(h+1, -1));

    // for(auto &i: dp)
    // {
    //     for(auto &j : i)
    //     {
    //         cout << j << " ";
    //     }cout << endl;
    // }

    
    cout << max(f(0, a, a[0], n, l , r , h,dp), f(0, a, a[0] -1, n , l , r, h, dp)) << endl;
    // cout << ct << endl;
}  