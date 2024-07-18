#include<bits/stdc++.h>
using namespace std;

void insertSorted(stack<int> &st , int element){
    if(st.empty() || element >st.top()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();

    insertSorted(st,element);

    st.push(temp);
}
void sortStack(stack<int> &st){
    if(st.empty()){
        return;
    }
    int temp=st.top();
    st.pop();

    sortStack(st);

    insertSorted(st,temp);
}

int main(){

    stack<int> st;
    st.push(10);
    st.push(60);
    st.push(20);
    st.push(32);
    st.push(800);
    st.push(30);
    sortStack(st);

    while(!st.empty()){
        cout<<st.top()<<" ";
        st.pop();
    }
    return 0;

}
