

#include <iostream>

using namespace std;

int removeDuplicates(int arr[])
{
    int arr2[10],exists,key;
    for(int i=0,j=0;i<10;i++)
    {
         key=arr[i];
         exists=0;
        for(int k=0;k<j;k++)
        {
            if(arr2[k]==key)
            {
                exists=1;
            }
        }
        if(!exists)
        {
            arr2[j]=arr[i];
            j++;
        }
    }
    for(int i=0;i<10;i++)
    {
        cout<<" "<<arr2[i];
    }
    return 0;
}

int main()
{
    int arr[10];
    cout<<"Enter the values in array: ";
    for(int i=0;i<5;i++)
    {
        cout<<"\n Enter value at"<<" "<<i+1<<
        "position: ";
        cin>>arr[i];
    }
    cout<<removeDuplicates(arr);

    return 0;
}
