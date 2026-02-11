//calculadora com switch case
#include <iostream>
using namespace std;
float somar(float a, float b){
    return a+b;
}
float multiplicar(float a, float b){
    return a-b;
}
float subtrair(float a, float b){
    return a-b;
}
float divisao(float a, float b){
    return a/b;
}

int main(){
    float n1,n2;
    int opcao = -1;
    while(opcao!=0){
        cout << "\n1- Somar\n2- Multiplicar\n3- Subtrair\n4- Divisao\n0- sair\nEscolha: ";
        cin >> opcao;
        switch (opcao){
            case 1:
                cout << "Digite os dois numeros: ";
                cin >> n1 >> n2;
                cout << "Resultado: " << somar(n1, n2) << endl;
                break;
            case 2:
                cout << "Digite os dois numeros: ";
                cin >> n1 >> n2;
                cout << "Resultado: " << multiplicar(n1, n2) << endl;
                break;
            case 3:
                cout << "Digite os dois numeros: ";
                cin >> n1 >> n2;
                cout << "Resultado: " << subtrair(n1, n2) << endl;
                break;
            case 4:
                cout << "Digite os dois numeros: ";
                cin>> n1 >> n2;
                if(n2==0){
                    cout << "Erro: Nao e possivel dividir por zero!" << endl;
                }else{
                    cout << "Resultado da Divisao: " << divisao(n1, n2) << endl;
                }
                break;
            case 0:
                cout << "Encerrando...";
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
        }
        
    }
    return 0;
}
