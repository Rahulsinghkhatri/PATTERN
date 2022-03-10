/*     * * * *
       * * * *
       * * * *
       * * * *
*/

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;

    int i=1;   //intializarion

    while(i<=n)
    {
        int j=0;        //int j=1;
        while(j!=n)     //while(j<=n)
        {
         cout<<"* ";
         j++;
        }
        cout<<endl;
        i++;
    }

    return 0;
}