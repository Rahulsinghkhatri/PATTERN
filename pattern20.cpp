/*
A 
A B 
A B C  
A B C D 
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    // int t=0;
    // char c='A';
    while(i<=n)
    {
        int j=1;
        char c='A';
        while(j<=i)
        {
            // cout<<char(c+t)<<" ";
            cout<<c<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
    }
}