/*
* * * *
* * *
* *
*
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
     
    int i=0;

    while(i<=n)
    {
        int j=1;
        while(j<=n-i)
        {
            cout<<"* ";
            j++;
        }
        i++;
        cout<<endl;
    }
    return 0;
}