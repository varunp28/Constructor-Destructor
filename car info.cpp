#include<iostream>
using namespace std;
class Vehicles{
    int yr;
    char brand[50];
    char type[50];
    double cost;
    public:
  Vehicles();
  void display();
};
Vehicles::Vehicles(){
    cout<<"Enter The Brand ";
    cin>>brand;
    cout<<"Enter The Type of Vehicle ";
    cin>>type;
    cout<<"Enter The year of manufacture ";
    cin>>yr;
    cout<<"Enter The cost of the Vehicle ";
    cin>>cost;
}
void Vehicles::display(){
    cout<<endl<<"Brand: "<<brand<<"\t"<<endl<<"Type: "<<type<<endl<<"cost: "<<cost<<endl;
}
int main(){
    Vehicles v1;
    v1.display();
    return 0;
}

//Enter The Brand Maybach
//Enter The Type of Vehicle Light Motor Luxury Vehicle
//Enter The year of manufacture Enter The cost of the Vehicle 
//Brand: Maybach	
//Type: Light
//cost: 4.94066e-324


//=== Code Execution Successful ===
