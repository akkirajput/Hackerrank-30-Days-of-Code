#include<bits/stdc++.h>
using namespace std;
int main()
{   int n,rem=0,count=0,s=0;
cin>>n;
    while(n>0)
        {
        rem=n%2;
        n=n/2;
        if(rem==1)
         {   s++;
           if(s>=count)
           count=s;
        }
        else
            s=0;
          
    }

   cout<<count;
    return 0;
}
