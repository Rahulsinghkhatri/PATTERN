/*
1
2 2
3 3 3
4 4 4 4
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int i=1;
    int c=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<c<<" ";    //cout<<i<<" ";    //without using c
            j++;
        }
        cout<<endl;
        c++;
        i++;

    }
}