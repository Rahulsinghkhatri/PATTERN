/*
A
B C
c D E 
D E F G 
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
        while(j<=i)
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