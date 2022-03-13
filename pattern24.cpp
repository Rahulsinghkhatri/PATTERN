/*
1 1 1 1
  2 2 2 
    3 3 
      4
*/


#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int c=0;
    int i=1;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
          cout<<"  ";
          j++;
        }
        int k=1;
        while(k<=n-c)
        {
             cout<<i<<" ";
             k++;
        }
        cout<<endl;
        i++;
        c++;
    }
    return 0;
}