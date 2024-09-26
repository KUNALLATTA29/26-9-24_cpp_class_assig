#include<bits/stdc++.h>
using namespace std;

class House{
string address;
public:
    House(string one){
        address=one;
    }
    string sol(){
        return address;
    }
};

class Apartment : public House{
public:
    Apartment(string one):House(one){};
    void getAddress(){
        cout<<sol()<<endl;
    }
};

int main(){

    Apartment obj1("bikaner");
    obj1.getAddress();
    return 0;
}
