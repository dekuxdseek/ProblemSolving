/*
कर्मण्येवाधिकारस्ते मा फलेषु कदाचन।
मा कर्मफलहेतुर्भूर्मा ते सङ्गोऽस्त्वकर्मणि॥
*/

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

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
#include<bits/stdc++.h>
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
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n);
void solve();
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);  
    int t =1;
    // cin>>t;
    while(t--)
    {
        solve();
    }return 0;
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
bool isprime(int n)
{
    for(int i =2; i*i<n; ++i)
    {
        if(n%i ==0)return false;
    }
    return n>1;
}

const int N = 1e6+13;
vector<bool>prime(N);
void sieve()
{
    fill(prime.begin(),prime.end(),true);
        
    prime[0] = prime[1] = false;

    for(int i =2; i*i<=N; ++i)
    {
        if(isprime(i))
        {
            for(int j = i*i; j<=N; j += i)
            {
                prime[j] = false;
            }
        }
    }    
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/

void solve()
{
    // sieve();
    //your code goes here
    int n;
    cin>>n;
    // int a,b = 0;
    // for(int i = 2; i<n; ++i)
    // {
    //      a = i;
    //      b = n - i;
        
    //     if(prime[a] == false && prime[b] == false)
    //     {
    //          break;
    //     }
    // } cout<<a<<" "<<b<<" "<<endl;

    if(n%2 == 0) cout<<8<<" "<< n-8<<endl;
    else cout<<9<<" "<<n-9<<endl;


   
}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex