/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include<math.h>

using namespace std;

int main()
{
    int number,first,end,swap,digit,divide;
    cout<<"Enter numbre";
    cin>>number;
    digit=log10(number);
    divide=pow(10,digit);
    first=number/divide;
    number=number%divide;
    end=number%10;
    number/=10;
    swap=end * divide+number*10+first;
    cout<<"swap value is: "<<swap;
    return 0;
    

}
