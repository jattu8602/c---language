//pointers to derived class
#include<iostream>
using namespace std;
class BaseClass{
    public:
    int var_base;
    void display()
{
    cout<<"displaying base class variable var_base:"<<var_base<<endl;

}
};
class DerivedClass : public BaseClass{
    public:
    int var_derived =1;
    void display(){
    cout<<"displaying base class variable var_derived:"<<var_derived<<endl;
    cout<<"displaying base class variable var_base:"<<var_base<<endl;


    }

};

int main(){
    BaseClass * base_class_pointer;
    BaseClass obj_base;
    DerivedClass Obj_derived;
    DerivedClass * derived_class_pointer;
    
    base_class_pointer = &obj_derived;
    base_class_pointer->display();


    
    return 0;
}