// Online C++ compiler to run C++ program online
 
#include <iostream>
#include <string>

using namespace std;

class RC{

    string vehicleRegNo;

     public:

	~RC(){

	cout<<"RC Destructed"<<endl;

     }

     RC(){

	 cout<<"RC Constructed"<<endl;

     }

	};
 

class TPMS{

    public:

    ~TPMS(){

        cout<<"TPMS Destructed"<<endl;

        }
        
    virtual string getCurrentValue() =0;
    virtual void installTPMS(TPMS* ptr) =0;

		protected:
		TPMS()=default;

};

class BoschTPMS : public TPMS{

    public:

    ~BoschTPMS(){

        cout<<"Bosch TPMS Destructed"<<endl;

        }
        
    virtual string getCurrentValue() override
    {
       return (getCurrentValueInPSI());
    }
    
    string getCurrentValueInPSI(){
        return "";
    }    

		BoschTPMS(){

		cout<<"Bosch TPMS Constructed"<<endl;

        }
        
    void installTPMS(TPMS* ptr){
      cout << "Install Bosch TPMS" <<endl;
    }    

};

class NexDigitronTPMS: public TPMS{

    public:

    ~NexDigitronTPMS(){

        cout<<"NexDigitron TPMS Destructed"<<endl;

        }

		NexDigitronTPMS(){

		cout<<"NexDigitron TPMS Constructed"<<endl;

        }
        
    string getCurrentValue(){
        return "";
    } 
    
        void installTPMS(TPMS* ptr){
      cout << "Install NexDigitron TPMS" <<endl;
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

	TPMS* tpms;

    string regNumber;

	public:

	Car(TPMS* ptr):tpms{ptr}{

		cout<<"Car Constructed"<<endl;

	}

	~Car(){

			cout<<"Car Destructed"<<endl;

		}

	void installTPMS(TPMS* ptr){

			tpms=ptr;

	}

};
 
void buildCar(BoschTPMS* ptr){

    Car alto{ptr};

}

void buildCar(NexDigitronTPMS* ptr){

    Car swift{ptr};

}
 
 
int main() {
 
    // Write C++ code here
  // TPMS Tpms;
	BoschTPMS bTpms;

	NexDigitronTPMS ndTpms;

    buildCar(&bTpms);

	buildCar(&ndTpms);

    return 0;
 
}

 
