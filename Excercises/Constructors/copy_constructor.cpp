#include <bits/stdc++.h>

using namespace std;

class Person{
public:
    string name;
    string gender;

    // Parameterized Constructor
    Person(string name, string gender){
        this->name = name;
        this->gender = gender;
    }

    // copy constructor
    Person(const Person&p){
        this->name = p.name;
        this->gender = p.gender;
    }
};

int main(){

    Person p1("Ram", "Male");

    cout<<p1.name<<endl;
    cout<<p1.gender<<endl;

    Person p2 = p1;

    cout<<p2.name<<endl;
    cout<<p2.gender<<endl;

    return 0;
}
