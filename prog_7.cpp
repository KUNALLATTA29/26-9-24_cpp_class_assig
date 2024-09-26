#include<bits/stdc++.h>
using namespace std;

class Course{
    string name;
    public:
        
        Course(string one){
            name= one;
        }
        
        string sol(){
            return name;
        }
        
};

class OnlineCourse: public Course{
    public:
        OnlineCourse(string one):Course(one){}
        
        void getformate(){
            cout<<sol()<<endl;
        }
};

class InPersonCourse: public Course{
    public:
        InPersonCourse(string one):Course(one){}
        
        void getformate(){
            cout<<sol()<<endl;
        }
};

class HybridCourse: public Course{
    public:
        HybridCourse(string one):Course(one){}
        
        void getformate(){
            cout<<sol()<<endl;
        }
};

int main(){

    OnlineCourse obj1("online");
    InPersonCourse obj2("onsite");
    HybridCourse obj3("hybrid");
    obj1.getformate();
    obj2.getformate();
    obj3.getformate();
    
    return 0;
}
