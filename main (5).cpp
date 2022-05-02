/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int main()
{
   string s="www.uschn";
   int length;
   
   length=s.size();
   cout<<"\nsize of string: "<<length;
    for(int i=0;i<length;i++)
    {
        if(s[0]=='w'&&s[1]=='w'&&s[2]=='w'&&s[3]=='.'&&s[i+4]>='a'&&s[i]<='z'||s[i+4]>='A'&&s[i]<='Z')
        {
           cout<<"\n all ok";
           break;
        }
    }
    return 0;
}
