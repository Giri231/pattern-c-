#include<iostream>
using namespace std;

int main()

{

    int i ,j ,k=0,n;
    cin>>n;

    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++){

        if(i%2==0)
            {
                k=k+1;
                cout<<k;

            }
            else
            {

                cout<<k;
               k=k-1;
            }

        }
        k=k+n;
        cout<<"\n";
    }
}
