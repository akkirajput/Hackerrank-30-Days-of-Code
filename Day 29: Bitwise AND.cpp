#include<iostream>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long int n,k;
        cin>>n>>k;
        int max=0;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<=n;j++)
            {
                if((i&j)>max)
                {
                    if((i&j)<k)
                     max=i&j;
                }
            }
            
        }
        cout<<max<<endl;
        
    }
    return 0;
}
