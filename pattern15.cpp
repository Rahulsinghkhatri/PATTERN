/*
A B C
A B C
A B C
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    while(i<=n)
    {
        int j=1;
        char c='A';
        while(j<=n)
        {
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}