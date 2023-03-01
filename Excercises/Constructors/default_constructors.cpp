// TechOutflow: www.techoutflow.com

#include <bits/stdc++.h>

using namespace std;

int num_objects = 0; // number of objects

class Car{
public:
    Car(){
        num_objects++; // Increment

        cout<<"Number_of_objects_created : "<<num_objects<<endl;
    }
};

int main(){

    Car car1;
    Car car2;

    return 0;
}
