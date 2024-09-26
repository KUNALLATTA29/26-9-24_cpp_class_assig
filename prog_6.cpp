#include<bits/stdc++.h>
using namespace std;

class Artist{
    string name;
    public:
        
        Artist(string one){
            name= one;
        }
        
        string sol(){
            return name;
        }
        
};

class Painter: public Artist{
    public:
        Painter(string one):Artist(one){}
        
        void getart(){
            cout<<sol()<<endl;
        }
};

class Sculptor: public Artist{
    public:
        Sculptor(string one):Artist(one){}
        
        void getart(){
            cout<<sol()<<endl;
        }
};

class Musician: public Artist{
    public:
        Musician(string one):Artist(one){}
        
        void getart(){
            cout<<sol()<<endl;
        }
};

int main(){

    Painter obj1("painting");
    Sculptor obj2("real art");
    Musician obj3("singing");
    obj1.getart();
    obj2.getart();
    obj3.getart();
    
    return 0;
}
