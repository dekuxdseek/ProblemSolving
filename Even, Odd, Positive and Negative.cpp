#include <bits/stdc++.h>
#include <vector>
#include<algorithm>
using namespace std;

int main() 
{
    int n;
    cin>>n;
    vector<int> sol(4);

    vector<int>arr(n);
    for(int i =0; i<n; i++)
    {
        cin>>arr[i];
    }


   for(int i = 0; i<n; i++)
    {
        if(arr[i]%2 == 0) sol[0]++;
        else sol[1]++;

        if(arr[i] >0) sol[2]++;
        else if (arr[i]<0) sol[3]++;
    }

    cout<<"Even: "<<sol[0]<<endl;
    cout<<"Odd: "<<sol[1]<<endl;
    cout<<"Positive: "<<sol[2]<<endl;
    cout<<"Negative: "<<sol[3]<<endl;


}
 