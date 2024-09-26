#include<bits/stdc++.h>
using namespace std;

class Chargeable{
    public:
    virtual void charge() = 0;
};

class Operable{
    public:
        virtual void operate() = 0;
};

class ElectricDevice : public Chargeable, public Operable{
    public :
        void charge(){
            cout<<"charged"<<endl;
        }
        void operate(){
            cout<<"operated"<<endl;
        }
};


int main(){

    ElectricDevice obj;
    obj.charge();
    obj.operate();
    
    return 0;
}
