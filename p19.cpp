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
    //forword
    for(int i=1;i<=5;i++)
    {
        
        //forward,pattern
        for(int j=1;j<=6-i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        //space
        for(int j=1;j<=i-1;j++)
        {
            cout<<" ";
        }
        //backword ,pattern
        for(int j=1;j<=6-i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }
    //backword
    for(int i=1;i<=5;i++)
    {
        
        //forward,pattern
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        //space
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        //space
        for(int j=1;j<=5-i;j++)
        {
            cout<<" ";
        }
        //backword ,pattern
        for(int j=1;j<=i;j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    return 0;
}

