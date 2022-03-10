/*
A
B B 
C C C
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    char c='A';
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<c<<" ";
            j++;
        }
        cout<<endl;
        i++;
        c++;
    }
    return 0;
}