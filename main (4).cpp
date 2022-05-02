/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    int target=45;
    int largest,temp,result=0,i;
    for(i=2;i<target;i++)
    {
        for(int j=2;j<=i/2;j++)
        {
              temp=i%10;
                if(temp%j!=0)
                {
                    result+=temp;
                }
                temp=i/10;
               
            
        }
    }
    cout<<"\n "<<result;

    return 0;
}
