/*
1 
2 3
3 4 5
4 5 6 7 
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
            c++;
        }
        cout<<endl;
        i++;
    }
}