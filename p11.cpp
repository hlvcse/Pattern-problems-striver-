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
    for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i;j++)
        {  
            if(j==1){
                cout<<1-prev_first;
                t=prev_first;
                prev_first=1-prev_first;
                
            }
            else{
                cout<<t;
                t=1-t;
            }
           
         }
          cout<<"\n";
    }

    return 0;
}
