#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=n-1;
    int k=1;
    while(n--)
    {
        for(int i=0;i<c;i++)
        cout<<" ";
        for(int i=0;i<k;i++)
        cout<<"#";
        cout<<endl;
        k++;
        c--;
    }
}
