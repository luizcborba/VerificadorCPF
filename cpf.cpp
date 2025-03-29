//Luiz Miguel Silvino, Matheus Alexandre Santos, Luiz Borba e  Carlos 


#include <iostream>
using namespace std;

int main(){
    int cpf;
    long cpf_final;
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9;
    int soma_verif, dig_verif1, dig_verif2;
    

    cout<<"Insira um CPF com 8 ou 9 dígitos: ";
    cin>>cpf;
    
    cpf_final = cpf;


    // If para verificação da quantidade de dígitos do CPF informado. Caso tenha menos de 8 ou mais de 9 dígitos, o programa é encerrado.
    if (cpf < 10000000 or cpf > 999999999){ 
        cout<<"cpf inválido";

        return 0 ;
    }
    
    // Algorítimo para separar os dígitos do CPF informado como int:
    dig9 = cpf % 10;
    cpf = cpf/10;
    dig8 = cpf % 10;
    cpf = cpf/10;
    dig7 = cpf % 10;
    cpf = cpf/10;
    dig6 = cpf % 10;
    cpf = cpf/10;
    dig5 = cpf % 10;
    cpf = cpf/10;
    dig4 = cpf % 10;
    cpf = cpf/10;
    dig3 = cpf % 10;
    cpf = cpf/10;
    dig2 = cpf % 10;
    cpf = cpf/10;
    dig1 = cpf % 10;
    cpf = cpf/10;


    // Algorítimo para formar o primeiro dígito verificador
    soma_verif = (dig1*10 + dig2*9 + dig3*8 + dig4*7 + dig5*6 + dig6*5 + dig7*4 + dig8*3 + dig9*2) % 11;
    if (soma_verif < 2) {
        dig_verif1 = 0;
     }else {
        dig_verif1 = 11 - soma_verif;
        }
    
    // Algorítimo para formar o segundo dígito verificador
    soma_verif = (dig1*11 + dig2*10 + dig3*9 + dig4*8 + dig5*7 + dig6*6 + dig7*5 + dig8*4 + dig9*3 + dig_verif1*2) % 11;
    if (soma_verif < 2) {
        dig_verif2 = 0;
    }else {
        dig_verif2 = 11 - soma_verif;
        };
    
    // Inserindo os dígitos verificadores na variável cpf_final
    cpf_final = (cpf_final * 10) + dig_verif1;
    cpf_final = (cpf_final * 10) + dig_verif2;

    //Verificando se tem 10 ou 11 dígitos no cpf_final e caso tenha 10 insere o 0 no início da saída
    if (cpf_final < 10000000000){
        cout << endl << "0" << cpf_final;
    }else{
    cout << endl << cpf_final ;
        }

    cout << endl<<"cpf válido";
    
    
}
