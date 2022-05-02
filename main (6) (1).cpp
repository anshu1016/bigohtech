
#include <iostream>
#include<string>
using namespace std;


bool isnamevalid(string s)
{
    int count=0;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||
        s[i]=='I'||s[i]=='O'||s[i]=='U')
        {
            count++;
        }
    }
    if(count>1)
    {
        cout<<"It contains more than one vowel. Means there are"<<" "<<count<<" vowels"<<"\n";
    }
    else
    {
        cout<<"there are only one vowel in the whole string.That's Good!! \n";
    }
    return (count<=1?true:false);
}

string checknamevalid(string s)
{
int count=0;
string result;
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='S')
        {
            count++;
            
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(count>2&&s[i]=='S')
        {
            result+=s[i];
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<" "<<result;
    }
    return result;
}


int main()
{
    string s;
    string result;
    int count=0;
    cout<<"enter the string: ";
    cin>>s;
    cout<<"\n";
   // cout<<isnamevalid(s);

    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='S')
        {
            count++;
            
        }
    }
    for(int i=0;i<s.length();i++)
    {
        if(count>2&&s[i]=='S')
        {
            result+=s[i];
        }
    }
    for(int i=0;i<s.length();i++)
    {
        cout<<" "<<result;
    }
    
    cout<<checknamevalid(s);
    cout<<isnamevalid(s);
    return 0;
}