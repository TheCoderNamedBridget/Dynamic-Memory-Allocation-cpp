/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <iostream>
using namespace std;

int main()
{
    cout<<"Enter size of list: "<<endl;
    
    int sizeOfList;
    
    cin>>sizeOfList;
    
    int *p2;
    p2 = new int[sizeOfList];

    
    int numList[sizeOfList];
    
    cout<<endl<<"Enter list: ";

    for ( int i = 0; i < sizeOfList; i++)
    {
        cin>>p2[i];
    }
    
    int max = p2[0];
    
    for ( int i = 0; i < sizeOfList; i++ )
    {
        cout<<max<<" "<<p2[i]<<endl;
        
        if ( max < p2[i])
        {
            max = p2[i];
        }
        cout<<"Object "<<i<<"Value: "<<p2[i]<<endl;
    }
    cout<<"Largest Element: "<<max<<endl;
    return 0;
}

