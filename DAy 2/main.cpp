/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
    /*for(int i=1;i<8;i++)
    {
        int k=1;
        k++;
        for(int j=1;j<8;j++)
        {
          
            k<=4?
            {
               if(j==i||j==(8-i))
               {
                   cout<<"/";
               }
               else
               {
                   cout<<"*";
               }
            }
            else
            {
                if(j==(8-i)&&j==i)
                {
                    cout<<"l";
                }
                else
                {
                    cout<<"*";
                }
            }
        }
        cout<<"\n";
    }*/
    for(int i=1;i<5;i++)
    {
        for(int j=1;j<8;j++)
        {
            if(j==i||j==(8-i))
            {
                if(j<4)
                {
                    cout<<"\\";
                }
                else
                {
                    cout<<"/";
                }
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }
    for(int i=5;i<8;i++)
    {
        for(int j=1;j<8;j++)
        {
            if(j==(8-i)||j==i)
            {
                if(j>4)
                {
                    cout<<"\\";
                }
                else
                {
                    cout<<"/";
                }
            }
            else
            {
                cout<<"*";
            }
        }
        cout<<"\n";
    }

    return 0;
}
