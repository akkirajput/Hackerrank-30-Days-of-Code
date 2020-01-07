#include <iostream>
#include <vector>

using namespace std;


class Person{
	protected:
		string firstName;
		string lastName;
		int id;
	public:
		Person(string firstName, string lastName, int identification){
			this->firstName = firstName;
			this->lastName = lastName;
			this->id = identification;
		}
		void printPerson(){
			cout<< "Name: "<< lastName << ", "<< firstName <<"\nID: "<< id << "\n"; 
		}
	
};

class Student :  public Person{
	private:
		vector<int> testScores;  
	public:
    Student(string firstname,string lastname,int idd,vector<int> scores)    :Person(firstname,lastname,idd)
    {
        firstName=firstname;
        lastName=lastname;
        id=idd;
        testScores=scores;
        
    }
    char calculate()
    {

       int sum=0;
        for(auto i=testScores.begin();i!=testScores.end();++i)
        {
            sum=sum+(*i);
        }
        if(90<=(sum/testScores.size())&&(sum/testScores.size())<=100)
        return 'O';
        if(80<=(sum/testScores.size())&&(sum/testScores.size())<90)
        return 'E';
        if(70<=(sum/testScores.size())&&(sum/testScores.size())<80)
        return 'A';
        if(55<=(sum/testScores.size())&&(sum/testScores.size())<70)
        return 'P';
        if(40<=(sum/testScores.size())&&(sum/testScores.size())<55)
        return 'D';
        else
        return 'T';
    }
    
};



int main() {
	string firstName;
  	string lastName;
	int id;
  	int numScores;
	cin >> firstName >> lastName >> id >> numScores;
  	vector<int> scores;
  	for(int i = 0; i < numScores; i++){
	  	int tmpScore;
	  	cin >> tmpScore;
		scores.push_back(tmpScore);
	}
	Student* s = new Student(firstName, lastName, id, scores);
	s->printPerson();
	cout << "Grade: " << s->calculate() << "\n";
	return 0;
}
