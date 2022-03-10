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
        while(j<=i)
        {
            cout<<"  ";
            j++;
        }
        int k=1;
        while(k<=n-i)
        {
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}