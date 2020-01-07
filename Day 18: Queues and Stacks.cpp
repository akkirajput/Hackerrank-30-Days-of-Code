#include <iostream>

using namespace std;

class Solution {
    //Write your code here
    int front,rear,top;
    char data[100],stackdata[100];
 public:   Solution()
    {
        front=rear=-1;
        top=-1;
    }
   void pushCharacter(char s)
    {
        stackdata[++top]=s;
        
    }
    void enqueueCharacter(char s)
    {
        if(front==rear)
        {
            front=rear=0;
            data[front]=s;
            rear++;
        }
        else
        {
            data[rear]=s;
            rear++;
        }
    }
    char popCharacter()
    {   
        if(top>=0)
        return stackdata[top--];
        else return 0;
    }
    char dequeueCharacter()
    {
        if(front<rear)
        return data[front++];
        else return 0;
    }

};

int main() {
