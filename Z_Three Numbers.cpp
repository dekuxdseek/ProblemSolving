#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int k,s;
    cin>>k>>s;
    int c = 0;
    for(int x = 0; x<=k;x++)
    {
        for(int y =0; y<=k;y++)
        {
            int z = s -x -y;
            if(z<= k && z>=0)
            {
                c++;
            }
        }
    }
    cout<<c<<endl;
    }
}