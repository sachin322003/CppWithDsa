#include<iostream>
using namespace std;
int main()
{
    int i,j,s;
    for(i=5;i>=1;i--)
    {
        for(s=1;s<=i;s++)
        {
            cout<<"_";
        }
        {
            for(j=i;j<=5;j++)
            {
                cout<<j;
            }
            cout<<endl;
        }
    }
    
}