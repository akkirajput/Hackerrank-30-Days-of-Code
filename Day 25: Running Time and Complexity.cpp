#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    while(t--)
    {
        long int n,prime=0;
        cin>>n;  
        if(n==1)
        cout<<"Not prime"<<endl;
        else
        {
        for(long int i=2;i<=sqrt(n);i++)
        {
            if(n%i==0)
               prime=1;
        }
        if(prime==1)
        cout<<"Not prime"<<endl;
        else
        cout<<"Prime"<<endl;
        }
    }
    return 0;
}
