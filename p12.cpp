/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int t=1;int prev_first=0;
    for(int i=1;i<=4;i++)
    {   
        //pattern
        for(int j=1;j<=i;j++)
        {  
            cout<<j;
         }//space
         for(int j=1;j<=4-i;j++)
             cout<<" ";
         //space
         for(int j=1;j<=4-i;j++)
             cout<<" ";
         //reverse pattern
         for(int j=i;j>=1;j--)
        {  
            cout<<j;
         }
          cout<<"\n";
    }


    return 0;
}
