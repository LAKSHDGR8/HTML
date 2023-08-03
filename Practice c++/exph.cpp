// Write a program to create a class shape and derived class rect and triangle.
//2 rect values 3 triangle values.
#include<iostream>
using namespace std;
class shape{
    public:
    void displayshape(){
        cout<<"Shape is:"<<endl;
    }
};
class rec: public shape{
    int l,b;
    public:
    rec(int a,int b){
        l=a;
        this->b=b;
    }
    void display(){
        displayshape();
        cout<<"Rectangle"<<endl;
    }
};
class tri: public shape{
    int x,y,z;
    public:
    tri(int a,int b,int c){
        x=a;
        y=b;
        z=c;
    }
    void display(){
        displayshape();
        cout<<"triangle"<<endl;
    }
};
int main(){
    
    try{
        int n;
        cout<<"parameter:"<<endl;
        cin>>n;
        if(n==3){
            throw tri(3,4,2);
        }else if(n==2){
            rec r1(4,5);
            r1.display();
            cout<<"Computed rec succesfully";
        }else{
            throw 4;
        }
    }catch (tri t1){
        t1.display();
        cout<<"Cannot compute triangle99"<<endl;
    }catch(int a){
        cout<<"neither rec nor tri";
    }
}