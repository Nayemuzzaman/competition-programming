#include<iostream>
using namespace std;

int main()
{
    float i;

    cin>>i;

    if(i >= 0 && i<=25.0000){
        cout<< "Intervalo [0,25]"<<endl;
    }
    else if(i>= 25.00001 && i<=50.0000000)
    {
        cout<<"Intervalo (25,50]"<<endl;
    }
    else if(i>=50.0000001 && i <= 100.00 ){
        cout<<"Intervalo (75,100]"<<endl;
    }
    else{
        cout<<"Fora de intervalo"<<endl;
    }
}
