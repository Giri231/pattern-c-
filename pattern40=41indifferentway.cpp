#include<iostream>

using namespace std;

int main()

{
    int i,j,m,n;

    for(i=1;i<=5;i++)
    {
        for(j=1;j<=9;j++)
        {
            if(j<=6-i || j>=4+i)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
     for(m=1;m<=5;m++)
    {
        for(n=1;n<=9;n++)
        {
            if(n<=m || n>=10-m)
            {
                cout<<"*";
            }
            else
            {
                cout<<" ";
            }
        }
        cout<<"\n";
    }
}
