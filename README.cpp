//calculadora com switch case
#include <iostream>
using namespace std;

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
                cout << "Resultado: " << n1+n2 << endl;
                break;
            case 2:
                cout << "Digite os dois numeros: ";
                cin >> n1 >> n2;
                cout << "Resultado: " << n1*n2 << endl;
                break;
            case 3:
                cout << "Digite os dois numeros: ";
                cin >> n1 >> n2;
                cout << "Resultado: " << n1-n2 << endl;
                break;
            case 4:
                cout << "Digite os dois numeros: ";
                cin>> n1 >> n2;
                if(n2==0){
                    cout << "Erro: Nao e possivel dividir por zero!" << endl;
                }else{
                    cout << "Resultado da Divisao: " << n1/n2 << endl;
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
