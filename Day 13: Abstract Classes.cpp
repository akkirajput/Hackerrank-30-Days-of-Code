#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
class Book{
    protected:
        string title;
        string author;
    public:
        Book(string t,string a){
            title=t;
            author=a;
        }
        virtual void display()=0;

};

class MyBook: Book
{
    private: string title;
                string author;
                int price;

    public:  MyBook(string title,string author,int price):Book(title,author)
             {
                    this->title=title;
                    this->author=author;
                    this->price=price;
            }
            void display()
            {
                cout<<"Title: "<<title<<endl;
                cout<<"Author: "<<author<<endl;
                cout<<"Price: "<<price<<endl;
            }
};


int main() {
