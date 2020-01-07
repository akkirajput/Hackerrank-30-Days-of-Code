#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n,num;
    string name;
    cin>>n;
    cin.ignore();
    map<string,long> phone;   
     
    for(long int i=0;i<n;i++)
    {   
        
        cin>>name;
        cin>>num;
        phone.insert(pair<string,long>(name,num));
    }
    
    while(cin>>name)
    {
        if(phone.count(name)>0)
            cout<<name<<"="<<phone.find(name)->second<<endl;
        else
            cout<<"Not found"<<endl;
        
    
    }
    return 0;
}

