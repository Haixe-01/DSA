#include<bits/stdc++.h>
using namespace std;

int a =1; 

void recursion(){

    if(a == 10){
        return;
    }
    else{
        cout<<a<< endl;
        a++;
        recursion();
    }

}

void printName(string name){
    if(a==6){
        return;
    }
    else{
        cout<<name<<endl;
        a++;
        printName(name);
    }
}


void linerlyPrint1toN(int i, int n){
    if(i==n+1){
        return;
    }
    else{
        cout<<i;
        i++;
        linerlyPrint1toN(i, n);
    }
    
}

void lineralyPrintNto1(int i, int n){
    if(i==0){
        return;
    }
    else{
        cout<<i<<" ";
        i--;
        lineralyPrintNto1(i, n);
    }
}

void backtracking1toN(int i, int n){
    if(i<1){
        return;
    }else
    {
        backtracking1toN(i-1,n);
        cout<<i<< " ";
    }
}

void backtrackingNto1(int i, int n){
    if(i>n){
        return;
    }
    else{
        backtrackingNto1(i+1, n);
        cout<<i<< " ";
    }
}

void parameterisedSum(int n, int sum){
    if(n<1){
        cout<<" = "<<sum;
        return;
    }
    else{
        cout<<n;
        if(n>1)cout<<" + ";
        parameterisedSum(n-1, sum+n);
    }

}

int functionalSum(int n){
    if(n==0){
        return 0;
    }
    else{
        return n+functionalSum(n-1);
    }

}

int recursionFactorial(int n){
    if(n==0){
        return 1;
    }
    else{
        return n * recursionFactorial(n-1);
    }
}

void reverseArray(int i, int arr[], int n){
    if(i>=n){
        return;
    }
    else{
        swap(arr[i], arr[n]);
        reverseArray(i+1, arr, n-1);
    }
}

int main(){

    // recursion();

    // printName("ken");
    int i =0;
    int n;
    cin>>n;

    // linerlyPrint1toN(i,n);

    // lineralyPrintNto1(n, n);

    // backtracking1toN(n, n);

    // backtrackingNto1(i, n);
    
    // int sum = 0;
    // parameterisedSum(n, sum);

    // int sum =functionalSum(n);
    // cout<<"sum is:"<<sum;

    // int factorial = recursionFactorial(n);
    // cout<<"factorial is:"<<factorial; 

    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    reverseArray(i, arr, n-1);

    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    return 0;
}

