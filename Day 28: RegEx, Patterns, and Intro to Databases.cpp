#include<iostream>
#include<bits/stdc++.h>
#include<string.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    string s;
    bool flag=false;
    vector<string> ss;
    while(t--)
    {
        
        getline(cin,s);
        if((s.substr(s.length()-10,10))=="@gmail.com")
        flag=true;
        else
        flag=false;
        if(flag)
        {   int i=0;
            string name;
            while(s[i]!=' ')
            {
                name+=s[i];
                i++;
            }
            ss.push_back(name);
        }
    }
    sort(ss.begin(),ss.end());
    for(int i=0;i<ss.size();i++)
    cout<<ss[i]<<endl;
    return 0;
}
