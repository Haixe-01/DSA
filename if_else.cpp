#include<bits/stdc++.h>
using namespace std;

int main(){
    // int age;

    // cout<<"Enter you age:";
    // cin>>age;
    

    // if(age>18){
    //     cout<<"you are an adult";
    // }
    // else{
    //     cout<<"you are not an adult";
    // }


    int grades;

    cout<<"Enter your grades: ";
    cin>>grades;

    if(grades<25){
        cout<<"F";
    }
    else if(grades>=25 && grades<45){
        cout<<"E";
    }
    else if(grades>=45 && grades<50){
        cout<<"D";
    }
    else if(grades>=50 && grades<60){
        cout<<"C";
    }
    else if(grades<=79){
        cout<<"B";
    }
    else if(grades<=100){
        cout<<"A";
    }


    return 0;
}
