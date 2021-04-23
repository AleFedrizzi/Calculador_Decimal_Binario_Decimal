#include <iostream>
#include <locale.h>
#include <math.h>
#define TAM 2


using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese"); // Usado para o CodeBlocks reconhecer a lingua portuguesa como idioma.

    // Declaração de variáveis
    int temp=0, i=0, j=0, pot=7, numero, opcao, binario;
    int resto[i], digito[i];

    // Menu de interação
    cout << "Calculadora de Conversão\n\n";
    cout << "Escolha a opção desejada: \n\n\n";
    cout << "Digite 1: Decimal para binário\n";
    cout << "Digite 2: Binário para decimal\n\n";
    cin >> opcao;

    //Decimal para binário
    if(opcao == 1){
        cout << "\nDigite o número: ";
        cin >> numero;
        while(numero!=0){ // Laço onde ocorre a divisão do número por 2, enquanto esse número for diferente de 0"
            resto[i] = numero%2; //O resto da divisão é guardado no vetor "resto" na posição "i", ao final do laço é feito um incremento na posição do vetor
            numero/=2;
            i++;
        }
        cout << "\nO número em binário é: ";
        for(int j=i-1; j>=0; j--){ // Laço que imprime os valores do vetor "resto", da última posição até a primeira
            cout << resto[j]; // Saída
        }

    // Binário para decimal
    }else if(opcao == 2){
        cout << "Digite um número em binário: \n\n";
        cin >> binario;

        //Laço que separa o número digitado em casas de um bit
        for(i=0; i<8; i++){
            digito[i]=binario%10;
            binario/=10;
        }
        /*laço que faz a multiplicação de cada digito com a potência de 2 elevado a pot,
        sendo que pot está inicializada em 7 e recebe um decremento a cada loop*/
        for(i=7; i>=0; i--){
            digito[i]=digito[i]*pow(TAM,pot);
            pot--;
        }
        /*Laço que soma o resultado da multiplicação de cada posição*/
        for(j=0; j<8; j++){
            temp=temp+digito[j];
        }
        cout<<"\n\nO número em decimal é:" << temp; //Saída

        }

    return 0;
}
