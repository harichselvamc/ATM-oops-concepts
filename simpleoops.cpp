#include<iostream>
#include<string>
using namespace std;

//class

class house
{
    //public:
    private:
    //member variable
    int length=0, breadth=0;
    public:
    //member functions
    void setdata(int x , int y){
        length=x;
        breadth=y;
    }
    void area(){
      cout<<"Area of house: "<< length*breadth;
    }
    
};



int main()
{   
    house dream1,dream2;
    dream1.setdata(300,500);
    //dream.length=80; 

    dream1.area();

    dream2.setdata(100,200);
    dream2.area(); 
    return 0;
}