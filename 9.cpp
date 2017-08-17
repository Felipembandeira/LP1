#include <iostream>
#include <string>

using namespace std;


bool par(int n);
bool impar(int n);
bool continuar();

int main(int argc, char const *argv[]){
    
    int m, n;

    do{
        cout << "Informe o valor de n:" << endl;
        cin >> n;

        if(par(n)){
            cout << n << " eh um numero par" << endl;
        }
        else{
            cout << n << " eh um numero impar" << endl;
        }


    }while(continuar());

    return 0;
}


bool par(int n){
    if(n==0){
        return true;
    }
    else if (n>0){
        impar(n-1);
    }
    else{
        par(-n);
    }
}        



bool impar(int n){
    if(n==0){
        return false;
    }
    else if (n>0){
        par(n-1);
    }
    else{
        impar(-n);
    }
} 

bool continuar(){

    string resposta;

    do{
        cout << "Continuar (s/n)?";
        cin >> resposta;
        // cout << resposta << endl;
    }while(resposta != "s" && resposta != "n");

    return resposta.compare("s") == 0;

}
