/*
1
2 1
3 2 1
4 3 2 1
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
        c=i;
        while(j<=i)
        {
            cout<<c<<" ";
            j++;
            c--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}