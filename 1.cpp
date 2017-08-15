#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    char block[50],hash[26]={0};
    cin>>block;
    int len=strlen(block),num=0;
    for(int i=0;i<len;i++)
    {
        hash[block[i]-'A']++;
    }
    for(int j=0;j<26;j++)
    {
        if(hash[j]>0)   num++;
    }
    if(num<=2) 
        cout<<num;
    else 
        cout<<0;
    return 0;
}