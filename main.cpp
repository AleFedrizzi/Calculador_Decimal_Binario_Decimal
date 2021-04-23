#include <iostream>
#include <locale.h>
#include <math.h>
#define TAM 2


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Usado para o CodeBlocks reconhecer a lingua portuguesa como idioma.

    // Declara��o de vari�veis
    int temp=0, i=0, j=0, pot=7, numero, opcao, binario;
    int resto[i], digito[i];

    // Menu de intera��o
    cout << "Calculadora de Convers�o\n\n";
    cout << "Escolha a op��o desejada: \n\n\n";
    cout << "Digite 1: Decimal para bin�rio\n";
    cout << "Digite 2: Bin�rio para decimal\n\n";
    cin >> opcao;

    //Decimal para bin�rio
    if(opcao == 1){
        cout << "\nDigite o n�mero: ";
        cin >> numero;
        while(numero!=0){ // La�o onde occore a divisao do n�mero por 2, enquanto esse n�mero for diferente de 0"
            resto[i] = numero%2; //O resto da divis�o � guardado no vetor "resto" na posi��o "i", ao final do la�o � feito um incremento na posi��o do vetor
            numero/=2;
            i++;
        }
        cout << "\nO n�mero em bin�rio �: ";
        for(int j=i-1; j>=0; j--){ // La�o que imprime os valores do vetor "resto", da �ltima posi��o at� a primeira
            cout << resto[j]; // Sa�da
        }

    // Bin�rio para decimal
    }else if(opcao == 2){
        cout << "Digite um n�mero em bin�rio: \n\n";
        cin >> binario;

        //La�o que separa o numero digitado em casas de um bit
        for(i=0; i<8; i++){
            digito[i]=binario%10;
            binario/=10;
        }
        /*la�o que faz a multiplica��o de cada digito com a potencia de 2 elevado a pot,
        sendo que pot est� icializada em 7 e recebe um decremento a cada loop*/
        for(i=7; i>=0; i--){
            digito[i]=digito[i]*pow(TAM,pot);
            pot--;
        }
        /*La�o que soma o resultado da multiplica��o de cada posi��o*/
        for(j=0; j<8; j++){
            temp=temp+digito[j];
        }
        cout<<"\n\nO n�mero em decimal �:" << temp; //Sa�da

        }

    return 0;
}
