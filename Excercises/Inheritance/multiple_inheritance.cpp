// TechOutflow: www.techoutflow.com

#include <bits/stdc++.h>

using namespace std;

class GearLess{
public:
    bool gearless = true;
};

class FourWheeler{
public:
    bool gearless;
};

class GearLess_car : public GearLess, public FourWheeler{
};

int main(){

    GearLess_car obj;

    cout<<obj.gearless;

    return 0;
}
