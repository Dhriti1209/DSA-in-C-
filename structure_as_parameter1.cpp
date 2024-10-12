#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
struct Rectangle{
    int length;
    int breadth;
};
//call by value 
// void fun(struct Rectangle *p){
//     p->length=50;
//     cout<<"Length ="<<p->length<<endl;
//     cout<<"Breadth ="<<p->breadth<<endl; 
// }
// int main(){
//     struct Rectangle r={15,20};
//     fun(&r);
//     cout<<"Length = "<<r.length<<endl;
//     cout<<"Breadth ="<<r.breadth<<endl;
//     return 0;

// }

//call by address 
// void fun(struct Rectangle *p){
//     p->length=50;
//     cout<<"Length ="<<p->length<<endl;
//     cout<<"Breadth ="<<p->breadth<<endl; 
// }
// int main(){
//     struct Rectangle r={15,20};
//     fun(&r);
//     cout<<"Length = "<<r.length<<endl;
//     cout<<"Breadth ="<<r.breadth<<endl;
//     return 0;

// }

//created in heap 
struct Rectangle *fun(){
    struct Rectangle *p;
    p=new Rectangle ;
    //p=(struct Rectangle *)malloc(sizeof(struct Rectangle));
    //works same 
    p->length=15;
    p->breadth=7;
    return p;


}
int main(){
    struct Rectangle *ptr=fun();
    cout<<"Length ="<<ptr->length<<endl<<"Breadth="<<ptr->breadth<<endl;
    return 0;

}