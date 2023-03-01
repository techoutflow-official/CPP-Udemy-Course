// TechOutflow: www.techoutflow.com

#include <bits/stdc++.h>

using namespace std;

class A{

protected:
    void display_a(){
        cout<<"Display class A"<<endl;
    }
};

class B : public A{
public:
    void display_b(){
        cout<<"display_b"<<endl;
        display_a();
    }
};

int main(){

    A obj_a; // object of a
    B obj_b; // object of b

    obj_b.display_b();
    // obj_b.display_a();

    // obj_a.display_a();

    return 0;
}
