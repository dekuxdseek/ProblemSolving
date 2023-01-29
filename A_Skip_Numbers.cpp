#include<bits/stdc++.h>
using namespace std;



int main()
{
    int n, x;
    cin >> n >> x;
    if(x%3){
    cout << x - x/3 << endl;}
    else cout << -1 << endl;
}