#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,row,i,top;
    cin>>n;
    for(row=-n; row<=n; ++row)
    {
        top=n-abs(row);
        /// cout<<top<<endl;
        for(i=0; i<abs(row); ++i)
            cout<<"  ";
        for(i=0; i<top; ++i)
            cout<<i<<" ";
        for(i=top; i>0; --i)
            cout<<i<<" ";
        cout<<0<<endl;

    }

}
