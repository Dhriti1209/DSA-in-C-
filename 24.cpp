#include <iostream>
using namespace std;
//A* and A[ ] both works the same in formal parameter 
void fun(int *A, int n){
    for (int i=0;i<n;i++){
        cout<<A[i]<<" ";
    }
    cout<<endl;
    

}
void change(int *A, int n){
    A[0]=15;
}
int main(){
    int A[ ]={2,4,6,8,10};
    int n=5;
    fun(A,n);
    change(A,n);
    
    for (int x:A)
    cout<<x<<" ";
    return 0;
}