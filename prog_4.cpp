#include<bits/stdc++.h>
using namespace std;

class Savable{
    public:
    virtual void save() = 0;
};

class Loadable{
    public:
        virtual void load() = 0;
};

class DataManager : public Savable, public Loadable{
    public :
        void save(){
            cout<<"data is saved"<<endl;
        }
        void load(){
            cout<<"data is loaded"<<endl;
        }
};


int main(){

    DataManager obj;
    obj.load();
    obj.save();
    
    return 0;
}
