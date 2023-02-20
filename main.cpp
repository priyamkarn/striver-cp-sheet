/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    int ans=0;
    int X=0;
    while(t--)
    {
        string s;
        cin>>s;
        if(s=="X++" ||s=="++X")
        {
            ans+=1;
        }
        else
        {
            ans-=1;
        }
    }
    cout<<ans<<endl;
}
