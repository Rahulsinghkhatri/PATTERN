/*  PRINT THE PATTERN
    * * * * *
      * * * *
        * * *
          * *
            *      */
    
#include<iostream>                    
using namespace std;
int main()
{
  for(int i=0;i<5;i++)
  {
       for(int j=0;j<i;j++)       // no of spaces = no of rows -1
      {
            cout<<"  ";
      }
      for(int k=5;k>i;k--)        // no of * = 5-i
      {
           cout<<"* ";
      }
      cout<<endl;
  }
    return 0;
}