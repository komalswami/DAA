#include<iostream>
using namespace std;
int main()
{
    int row=5;
    for(int i=1;i<=row;i++)
    {
        for(int sp=i;sp<=row-1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    
    for(int i=4;i>=0;i--)
    {
        for(int sp=i;sp<=row-1;sp++)
        {
            cout<<" ";
        }
        for(int j=1;j<=(2*i-1);j++)
        {
            cout<<"*";
        }
        
        cout<<endl;
    }
    return 0;
}
