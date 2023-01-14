#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        string s;
        cin>>s;
        if(s.length()<=10) cout<<s<<endl;
        else{
            cout<<*s.begin()<<s.length()-2<<*(s.end()-1)<<endl;
        }
    }
}