/*
1 2 3 4
  2 3 4
    3 4
      4
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
        while(j<=i)
        {
            cout<<"  ";
            j++;
        }

        int k=1+c;
        while(k<=n)
        {
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
        i++;
        c++;
    }
    return 0;
}