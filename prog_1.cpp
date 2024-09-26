#include<bits/stdc++.h>
using namespace std;

class Products{
int productid ;
int price;
public:
    Products(int one, int two){
        productid=one;
        price=two;
    }
    int sol(){
        return price;
    }
};

class Electronics : public Products{
public:
    Electronics(int one , int two):Products(one, two){};
    void getPrice(){
        cout<<sol()<<endl;
    }
};

int main(){

    Electronics obj1(1, 200);
    obj1.getPrice();
    return 0;
}
