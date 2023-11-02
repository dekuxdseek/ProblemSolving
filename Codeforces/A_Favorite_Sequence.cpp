#include<iostream>
#include<vector>
#include<iterator>
using namespace std;


void solve()
{
    int n;
        cin>>n;
        vector<int>v(n);
        for(int &val : v)
        {
            cin>>val;
        }
        int left = 0;
        int right = n - 1;

        vector<int> sol(n);
        for(int i = 0; i<n; ++i)
        {
            if(i%2 == 0)
            {
                sol[i] = v[left++];
            }
            else
            {
                sol[i] = v[right--];
            }
        }

        for(auto val: sol)
        {
            cout<<val<<" ";
        }cout<<endl;


}
// int main()
// {
//     int t;
//     cin>>t;
//     while(t--)
//     {
//         int n;
//         cin>>n;
//         vector<int> v;
//         for(int i =0; i<n; ++i)
//         {
//             int el;
//             cin>>el;
//             v.push_back(el);
//         }

//         vector<int>sol;
//         vector<int> :: iterator beg = v.begin();
//         vector<int> :: iterator end = v.end() - 1;

//         int l = beg - v.begin();
//         int r = end - v.begin();

//         while(beg <= end)
//         {
//             if(beg < end)
//             {
//                 sol.push_back(*beg);
//             sol.push_back(*end);
//             ++beg;
//             --end;
//             }
//             else{
//                 sol.push_back(*beg);
//                 ++beg;
//             }
//         }

//          for(int val: sol)
//          {
//             cout<<val<<" ";
//          }cout<<endl;
//     }
// }

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       solve();
    }
}