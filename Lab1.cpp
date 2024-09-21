       #include <iostream>
    using namespace std;
    int main(){
    int A;
    cout<<"enter num";
    cin>>A;


    if(A>=89&&A<101){
    cout<<"A";
    
    } else if(A>=81&&A<=89){
    cout<<"B";
    } else if(A>=74&&A<81){
        cout<<"C";
    } else if(A>=66&&A<74){
        cout<<"D";
    } else if(A>=59&&A<66){
        cout<<"E";
    } else if(A>=34&&A<59){
        cout<<"FX";
    } else if(A>=1&&A<34){
        cout<<"F";

    } else {cout<< "num";}
    }
