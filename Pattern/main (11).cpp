
#include <iostream>
using namespace std;
int main() {
    // Write C++ code here
    int i,j,n,s;
    cout<<"Enter the no. of rows you want: ";
    cin>>n;
    for(int i=n/2;i>0;i--)
    {
        for(s=n;s>i;s--)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<"* ";
            
        }
        cout<<"\n";
       
    }
    //Another Triangle 
    for(int i=1;i<n/2+1;i++)
    {
        for(s=n;s>i;s--)
        {
            cout<<" ";
        }
        for(j=0;j<i;j++)
        {
            cout<<"* ";
            
        }
        cout<<"\n";
       
    }
    

    return 0;
}