#include<iostream>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int l1,l2,r1,r2;
        cin>>l1>>r1>>l2>>r2;
        
        if((l1<l2&&r1<l2) || (l1>r2&&r1>r2)) cout<<"-1"<<endl;
        else{
            int l = max(l1,l2);
            int r = min(r1,r2);
            cout<<l<<" "<<r<<endl;
        }
    }
}