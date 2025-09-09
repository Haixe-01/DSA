#include<bits/stdc++.h>
using namespace std;

int smthng(int &num){
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl;
    num+=5;
    cout<<num<<endl; 
    
}

int main(){

    int num=10;
    smthng(num);

    cout<<"original is: "<<num;

    return 0;
}