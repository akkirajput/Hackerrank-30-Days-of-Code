#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int dr,mr,yr,de,me,ye;
    cin>>dr>>mr>>yr;
    cin>>de>>me>>ye;
    if((dr<=de && mr<=me && yr<=ye) || yr<ye)
    cout<<"0";
    else if(yr==ye && mr==me)
    cout<<15*(dr-de);
    else if(yr==ye)
    cout<<500*(mr-me);
    else
    cout<<"10000";
    return 0;
}
