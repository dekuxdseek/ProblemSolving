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
    int t ;
    cin>>t;
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

const int M = 1e9+7;
const int N = 1e6+13;

vector<bool>prime(N,true);
void sieve()
{
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

ll gcd(ll a, ll b)
{
    if(b == 0) return a;
    else return gcd( b , a%b);
}

ll lcm(ll a, ll b)
{
    return (a*b)/gcd(a,b);
}
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/



int function_to_get_ans_with_maximum_length_and_min_iterations(int a, int b,string s)
{

    // int one = 0, zero = 0;
    // int ctone = 0;
    // me(i,0,s.size())
    // {
    //     if(s[i] == '1') one++;
    // }
    // zero = s.size() - one;



    // int count = 0;
    // int sum = 0;
    // // one>zero
    // if(one>zero){
    //    me(i,0,s.size())
    // {
    //     if(s[i] == '0')
    //     {
    //         count++;
    //     }
    //     else if(s[i] == '1' && count != 0)
    //     {
    //         sum += (a*count + b);
    //         count = 0;
    //     }
    // }

    //    if(count >0 )
    // {
    //     sum += (count*a + b);
    // }
    
    // sum += (a*one + b);
    // return sum;
    // }

    // else{
    //    me(i,0,s.size())
    // {
    //     if(s[i] == '1')
    //     {
    //         count++;
    //     }
    //     else if(s[i] == '0' && count != 0)
    //     {
    //         sum += (a*count + b);
    //         count = 0;
    //     }

           

    // }

    // if(count >0 )
    // {
    //     sum += (count*a + b);
    // }
    
    
    // sum += (a*zero + b);
    // return sum;

    // }
}



void solve()
{
    //your code goes here

    int n, a , b;
    cin >> n >> a >> b;

    string s;
    cin >> s;

    if(b>=0)    // +,+  ; -,+
    {
        cout << n * (a + b) << endl;
    }
    
    else
    {
        // int ans = function_to_get_ans_with_maximum_length_and_min_iterations(a,b,s);

             int one = 0, zero = 0,ctone = 0,ctzero = 0;
        me(i,0,s.size())
        {
            if(s[i] == '1')one++;
            else if(s[i] != '1' && one != 0) {one = 0;ctone++;}
        }                               

        if(one>0)++ctone;

        me(i,0,s.size())
        {
            if(s[i] == '0')zero++;
            else if(s[i] != '0' && zero != 0) {zero = 0;ctzero++;}
        }
        if(zero>0)++ctzero;




        int m = ctone + ctzero;

     
       int ans =    a*n + (m/2 + 1)*b;

         cout << ans << endl;
    }

           
    // cout << a*n + max((m/2 + 1)*b, n*b) << endl;

}

/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/
/*--------------------------------------------------------------------------------------------------------------------------------------------------------------------*/


// © Copyright 2022 swastiksharma09_Template.ex