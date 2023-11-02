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

bool f(vector<string> vs, int i , int j , vector<vi> visit, int bcnt)
{
    cout << i << " " << i << " " << bcnt << '\n';

    if(visit[i][j] || vs[i][j] == 'W' || j >= vs[0].size()) return 0;
    if(bcnt == 1) return 1;

    visit[i][j] = 1;
    --bcnt;

    bool left = f(vs, i , j + 1, visit, bcnt);
    
    bool vert;
    if(i == 0) vert = f(vs, i + 1, j , visit, bcnt);
    else vert = f(vs, i - 1 ,j , visit, bcnt);

    return vert || left;

}

int main() {
    int n;
    cin >> n;
    string a,b;
    cin >> a >> b;
    vector<string> vs = {a,b};
    vector<vi> visit(2,vi(n, 0));
    int bcnt = 0;
    for(auto &i : vs)
    {
        for(auto &j : i)
        {
            if(j == 'B') bcnt++;
        }
    }
    cout << f(vs, 0 , 0 , visit, bcnt) || f(vs, 1, 0, visit, bcnt) << '\n';
}