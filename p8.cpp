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
    int t=0;
     for(int i=1;i<=5;i++)
    {
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=10-i-t;j++)
        {
            cout<<"*";
        }
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        t++;
        cout<<endl;
    }


    return 0;
}
