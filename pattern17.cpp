/*
1 2 3
2 3 4
3 4 5
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    int c=0;
    while(i<=n)
    {
        int j=1;
        while(j<=n)
        {
            cout<<j+c<<" ";
            j++;
        }
        cout<<endl;
        i++;
        c++;
    }
    return 0;
}