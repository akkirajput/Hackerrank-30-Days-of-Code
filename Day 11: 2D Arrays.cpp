#include <bits/stdc++.h>
using namespace std;

int main()
{
    int  arr[6][6];
    for (int i = 0; i <=5; i++) {

        for (int j = 0; j <=5; j++) {
            cin >> arr[i][j];
        }

    }
    int n=1,sum=0,max[16],m=0,l=n;
    while(l<=16)
    { 
        for (int i = m; i <=m+2; i++) 
        {
            for (int j = n-1; j <=n+1; j++) 
            {
                if(i!=m+1)
                {
                    sum+=arr[i][j];
                }
                else 
                {
                    if(n==j)
                   sum+=arr[i][j];
              }               
            }      
         }
    
        n++;

        max[l-1]=sum;
        sum=0;
        if(l%4==0&&l<=12)
        {
            m=m+1;
            n=1;

        }
      
        l++;
    
    }
    
    sort(max,max+16);
    
    cout<<max[15]<<endl;
    return 0;
}
