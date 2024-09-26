#include<bits/stdc++.h>
using namespace std;

class Flyable{
    public:
    virtual void fly() = 0;
};

class Swimmable{
    public:
        virtual void swim() = 0;
};

class Peguin : public Flyable, public Swimmable{
    public :
        void fly(){
            cout<<"paguin is flying"<<endl;
        }
        void swim(){
            cout<<"paguin is swimming"<<endl;
        }
};


int main(){

    Peguin obj;
    obj.fly();
    obj.swim();
    
    return 0;
}
