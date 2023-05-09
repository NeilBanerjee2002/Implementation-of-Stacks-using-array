#include <iostream>
using namespace std;
#define n 100
class stack{
    int* arr;
    int top;

    public:
    stack(){
        arr = new int[100];
        top = -1;
    }
    void push(int x){
        if(top==n-1){
            cout<<"stack overflow"<<endl;
            return;
        }
        top++;
        arr[top]=x;
    }
    void pop(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
            return;
        }
        top--;
    }
    int Top(){
        if(top==-1){
            cout<<"No element to pop"<<endl;
        }
        return arr[top];
    }
    
};
int main(){
    stack st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    cout<<st.Top()<<endl;
    return 0;
}