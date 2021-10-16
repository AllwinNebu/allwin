#include<iostream>
using namespace std; 

class Car
{
    public :
    string brand = "Dodge";
    
    protected:
    string str= "the protected stuff";
};

class Vintage
{
    public :
    string name = "Vintage";
};

class model: public Car
{
    public :
    string model = "Charger";
    
    void printprotect(){ cout << str; }
}; 

class modelyear: public model , public Vintage
{
    public:
    int modelyear = 1970;
};  

int main()
{
    modelyear obj;
    cout << "Brand : " << obj.brand << "\n" << "Model : " << obj.model << "\n" << "Year : " << obj.modelyear << "\n"
         << obj.name << "\n";
    obj.printprotect();
    
    return 0; 
}