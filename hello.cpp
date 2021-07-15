#include<iostream>
using namespace std;

int main(){
    int age;
    cout<<"Enter the Age of citizen:";
    cin>>age;
    if(age>18){
        cout<<"the citizen is eligible for voting"<<endl;
    }
    else{
        cout<<"the citizen is not eligible for voting"<<endl;
    }
    cout<<"After the "<<18-age<<" years, you will be eligible for voting"<<endl;
    return 0;
}
