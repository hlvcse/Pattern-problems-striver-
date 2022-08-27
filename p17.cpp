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
    for(int i=1;i<=4;i++)
    {
        char ch='A';
        //spaces
        for(int j=1;j<=4-i;j++)
        {
            cout<<" ";
        }
        //forward,pattern
        for(int j=1;j<=i;j++)
        {
            cout<<ch++;
        }
        //backword.pattern
        ch=ch-2;
        for(int j=1;j<=i-1;j++)
        {
            cout<<ch--;
        }
        cout<<endl;
    }

    return 0;
}

