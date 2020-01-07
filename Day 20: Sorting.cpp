#include <bits/stdc++.h>

using namespace std;

int main() {
    int n,swap=0;
    cin >> n;
    vector<int> a(n);
    int temp[n];
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    // Write Your Code Here
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1;j++)
        {
            if(a[j]>a[j+1])
            {
                temp[i]=a[j];
                a[j]=a[j+1];
                a[j+1]=temp[i];
                swap++;
            }
            
        }
        if(swap==0)
        {
            break;
        }
    }
    cout<<"Array is sorted in "<<swap<<" swaps."<<endl;
    cout<<"First Element: "<<a[0]<<endl;
    cout<<"Last Element: "<<a[n-1]<<endl;
    return 0;
}

