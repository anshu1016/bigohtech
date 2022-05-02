/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int sumoftriplets(int values[],int n)
{
    int target =1843;
     for(int i=0;i<n;i++)
    {
       for(int j=i+1;j<n;j++)
       {
           for(int k=j+1;k<n;k++)
            {
               if((values[i]+values[j])+values[k]==target)
               {
                   cout<<""<<values[i]<<" + "<<""<<values[j]<<" + "<<""<<values[k]<<" makes the "<<" "<<target<<"\n";
                   
               }
            }
           
           
       }
   }
   return 0;
}

int ascendingtriplets(int values[],int n)
{
    int temp[10];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(values[i]<values[j])
            {
                temp[i]=values[i];
                values[i]=values[j];
                values[j]=temp[i];
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<values[i]<<"\n";
    }
      cout<<sumoftriplets(values,n);
    return 0;
}
/*int ascendingdigits(int values[],int n)
{
    int i=j=0,temp[10],rem=0;
    for(i=0;i<n;i++)
    {
        while(values[i]!=0)
        {
            temp[i] = values[i]%10;
            if(temp[i]<temp[i+1])
            {
                temp2[i]=temp
            }
        }
        *** FACING PROBLEM IN SORTING THE DIGITS OF ARRAY 
    }
}*/

int main()
{
   int arr[10],result=0,i,target=15,n,j;
   cout<<"Enter the value of n: \n";
   cin>>n;
   cout<<"Ener value of array: \n";
   for(i=0;i<n;i++)
   {
       cin>>arr[i];
   }
   cout<<ascendingtriplets(arr,n);

   
    return 0;
}
