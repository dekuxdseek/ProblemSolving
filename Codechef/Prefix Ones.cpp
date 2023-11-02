#include <bits/stdc++.h>
using namespace std;

int main() 
{
    int tt;
    cin >> tt;

    while(tt--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
   
        int i;
        int maxi = INT_MIN;
        int ct = 0;
        for(i=0;i<n;i++)
        {
            if(s[i] == '1'){ct++;}
            else {ct = 0;}

            maxi = max(maxi,ct);
        }
        
        if(s[0] == '0')cout << maxi << endl;
        else
        {
            int one = 0;
            int ind  = 0;
            int maxi = 0;
            
            for(i=0;i<n;i++)
            {
                if(s[i] =='1')one++;
                else break;
            }
            int ct = 0;
            
            for(i;i<n;i++)
            {
                if(s[i] == '1')ct++;
                else ct = 0;
                maxi = max(ct, maxi);
            }
            cout << one + maxi << endl;
        }
      
    }
}