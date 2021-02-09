#include <iostream>

using namespace std;

int main(){
    int p;
    cout<<"Digite um numero para ser verificado: ";
    cin>>p;
    int divisivel1 = 0;
    int divisivel2 = 0;

    for(int i=1;i<=p;i++){
        if(p%i==0){
            divisivel1 = divisivel1+1;
        }
    }
    for(int i=1;i<=(2*p+1);i++){
        if((2*p+1)%i==0){
            divisivel2 = divisivel2+1;
        }
    }

    if(divisivel1==2){
        if(divisivel2==2){
            cout<<"O numero "<<p<<" e primo de Sophie-Germain."<<endl;
        }else{
            cout<<"O numero "<<p<<" e primo mas nao de Sophie-Germain pois "<<2*p+1<<" nao e primo."<<endl;
        }
    }else{
        cout<<"O numero "<<p<<" nao e primo."<<endl;
    }
    return 0;
}
