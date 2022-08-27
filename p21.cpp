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
    //backword
    for(int i=1;i<=4;i++)
    {
        
        //forward,pattern
        if(i==4 || i==1)
        {
            for(int j=1;j<=4;j++)
           {
              cout<<"*";
           }
        }
        else{
            cout<<"*";
            for(int j=1;j<=2;j++)
           {
              cout<<" ";
           }
           cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}
