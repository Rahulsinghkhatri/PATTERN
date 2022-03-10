/*
A B C
B C D
D E F
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    int t=0;
    while(i<=n)
    {
        int j=1;
        char c='A';
        while(j<=n)
        {
            cout<<char(c+t)<<" ";
            j++;
            c++;
        }
        cout<<endl;
        i++;
        t++;
    }
    return 0;
}