#include <bits/stdc++.h>
using namespace std;

void print1(int num)
{

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}

void print2(int num){
    for (int i = 0; i <= num; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print3(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print4(int num){
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void print5(int num)
{
    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void print6(int num){

    for (int i = num; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void print7(int num){
  for(int i=1; i<=num;i++){
    for(int j=i; j<num;j++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    for(int j=1; j<i; j++){
        cout<<"*";

    }
    cout<<endl;
  }
}

void print8(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=num; j++){
            cout<<"*";
        }
        for(int j=i; j<num; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}


void print9(int num){
   for(int i=1; i<=num; i++){
    for(int j= i; j<num; j++){
        cout<<" ";
    }
    for(int j=1; j<=i; j++){
        cout<<"*";
    }
    for(int j=1; j<i; j++){
        cout<<"*";
    }
    cout<<endl;
   }

   for(int i=1; i<=num; i++){
    for(int j=1; j<i; j++){
        cout<<" ";
    }
    for(int j=i; j<=num; j++){
        cout<<"*";
    }
    for(int j=i; j<num; j++){
        cout<<"*";
    }
    cout<<endl;
   }

}

void print10(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i=1; i<=num; i++){
        for(int j=i; j<num; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print11(int num){
    int start=1;
    for(int i=1; i<=num; i++){
        if(i%2==0){
                start=0;
            }else{start =1;}

        for(int j=1; j<=i; j++){ 
            cout<<start;
            start=1-start;
        }
        cout<<endl;
    }
}

void print12(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<i; j++){
            cout<<j;
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<j;
        }

        cout<<endl;
    }
}

void print13(int num){
    int count =1;
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
    }
}

void print14(int num){
    char alphabets= 'A';
for(int i=1; i<=num; i++){
    for(int j= 1; j<=i; j++){
        cout<<alphabets;
        alphabets++;
    }
    cout<<endl;
    alphabets='A';
}
}

void print15(int num){
    char alphabets='A';
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<alphabets;
            alphabets++;
        }
        cout<<endl;
        alphabets='A';
    }
}

void print16(int num){
    char alphabets='A';
    for(int i=1; i<=num; i++){
        for(int j=1; j<=i; j++){
            cout<<alphabets;
        }
        cout<<endl;
        alphabets++;
    }
}

void print17(int num){
    char alphabets='A';
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<"-";
        }
        for(int j=1; j<i; j++){
            cout<<alphabets;
            alphabets++;
        }alphabets='A';
        for(int j=1; j<i-1; j++){
            cout<<alphabets;
            alphabets++;
        }
        cout<<endl;
        alphabets='A';
    }
}

void print18(int num){
    char alphabets='E';
for(int i=1; i<=num; i++){
    alphabets= 'E'-i+1;
    for(int j=1; j<=i; j++){
        cout<<alphabets;
        alphabets++;
        
    }
    cout<<endl;
}
}

void print19(int num){
    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<"*";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=num; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=num; i++){
        for(int j=1; j<=i;j++){
            cout<<"*";
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print20(int num){
    for(int i= 1; i<=num-1; i++){
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=i; j<num; j++){
            cout<<" ";
        }
        for(int j=1; j<=i; j++){
            cout<<"*";
        }
        cout<<endl;
    }

    for(int i=1; i<=num; i++){
        for(int j=i; j<=num; j++){
            cout<<"*";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=1; j<i; j++){
            cout<<" ";
        }
        for(int j=i; j<=num; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

void print21(int num){
    for(int i=1; i<=num; i++){
        for(int j=1; j<=num; j++){
            if(i==1 || i==num || j==1 || j==num){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}

void print22(int num){

}

int main()
{
    int n;
    cin >> n;
    print21(n);

    return 0;
}