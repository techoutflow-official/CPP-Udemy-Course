#include <bits/stdc++.h>

using namespace std;

class Electronic_gadgets{
public:
    void usage(){
        cout<<"The electronic gadgets are very useful";
    }
};

class Laptop : public Electronic gadgets{
public:

    Laptop(){
        cout<<"Laptop constructor"<<endl;
    }

    void prog(){
        cout<<"Laptop can be used for programming"<<endl;
    }

    void gaming(){
        cout<<"Laptop can be used for gaming"<<endl;
    }

    void internet(string use){
        cout<<"Internet Use: "<<use<<endl;
    }

    void internet(string use, string danger){
        cout<<"Internet Use: "<<use<<endl;
        cout<<"Internet Danger: "<<danger<<endl;
    }
};

int main(){

    Laptop laptop_obj;

    string use = "Internet is useful to collect info";
    string danger = "Privacy may be compromised";

    laptop_obj.internet(use);
    laptop_obj.internet(use,danger);

    return 0;
}
