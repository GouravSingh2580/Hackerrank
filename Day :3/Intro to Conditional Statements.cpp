#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    if(!(N%2==0)&&(N!=24))
    {
        cout<<"Weird";
    }
    if((N%2==0)&&(2<N<5)&&(N!=24))
    {
        cout<<"Not Weird";
    }
    if((N%2==0)&&(6<N<20)&&(N!=24))
    {
        cout<<"Weird";
    }
    if(N==24)
    {
        cout<<"Not Weird";
    }


    return 0;
}
