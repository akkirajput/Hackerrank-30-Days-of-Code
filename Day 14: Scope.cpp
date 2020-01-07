#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;
        Difference(vector<int> elements)
        {
            this->elements=elements;
        }
 
    int computeDifference()
    {
        sort(elements.begin(),elements.end());
         maximumDifference=elements.back()-elements.front();
        return maximumDifference;
    }
      
   

}; 

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}
