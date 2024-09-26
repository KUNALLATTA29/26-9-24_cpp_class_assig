#include<bits/stdc++.h>
using namespace std;

class Device{
    string model;
    public:
        
        Device(string one){
            model= one;
        }
        
        string sol(){
            return model;
        }
        
};

class Smartphone: public Device{
    public:
        Smartphone(string one):Device(one){}
        
        void getmodel(){
            cout<<sol()<<endl;
        }
};

class Tablet: public Device{
    public:
        Tablet(string one):Device(one){}
        
        void getmodel(){
            cout<<sol()<<endl;
        }
};

class Smartwatch: public Device{
    public:
        Smartwatch(string one):Device(one){}
        
        void getmodel(){
            cout<<sol()<<endl;
        }
};

int main(){

    Smartphone obj1("mobile");
    Tablet obj2("smart tablet");
    Smartwatch obj3("smart watch");
    obj1.getmodel();
    obj2.getmodel();
    obj3.getmodel();
    
    return 0;
}
