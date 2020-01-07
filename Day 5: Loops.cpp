#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
        for(int j=1;j<=10;j++)
        {
            cout<<n<<" x "<<j<<" = "<<n*j;
            cout<<endl;
        }
    

    return 0;
}
