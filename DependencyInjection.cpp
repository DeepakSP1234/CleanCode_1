#include <iostream>
using namespace std;

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class BoschTPMS{
      public:
     ~BoschTPMS(){
            cout<<"BoschTPMS Destructed"<<endl;
        }

      BoschTPMS(){
            cout<<"BoschTPMS Constructed"<<endl;
        }
};

class Engine{
    public:
     ~Engine(){
            cout<<"Engine Destructed"<<endl;
        }
        
      Engine(){
            cout<<"Engine Constructed"<<endl;
        }
};

class Car{
    Engine engine;
    // Dependecy
    BoschTPMS *tpms_ptr;

    public:
        Car(BoschTPMS& tpms){ // Dependency Injection using constructor
            tpms_ptr = &tpms;
            cout<<"Car Constructed"<<endl;
        }
        void InstallTPMS(BoschTPMS& tpms) {  // Dependency Injection using method
                    tpms_ptr = &tpms;
                    cout<<"Install TPMS"<<endl;
        }

        ~Car(){
            cout<<"Car Destructed"<<endl;
        }
};

BoschTPMS tpms_frontright;

void buildCar(){
    Car alto(tpms_frontright);
}

int main() {
    // Write C++ code here
    buildCar();
    cout<< "end of main" << endl;
    return 0;
}
 
