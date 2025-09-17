#include<iostream>
using namespace std;
class volume{
int x,y,z;
double vol;
    public:
  volume(int l,int b,int h){
      vol=l*b*h;
  }
 void display(){
    cout<<endl<<"Volume: "<<vol;
}
};

int main(){
    int a,b,c;
    cout<<"Enter the dimentions (length,breadth,height): ";
    cin>>a>>b>>c;
    volume v1(a,b,c);
    v1.display();
    return 0;
}

//Enter the dimentions (length,breadth,height): 14
//12
//13

//Volume: 2184

=== Code Execution Successful ===
