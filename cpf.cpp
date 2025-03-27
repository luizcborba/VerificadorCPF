//Luiz Miguel Silvino, Matheus Alexandre Santos, Luiz Borba e  Carlos 


#include <iostream>
using namespace std;

int main(){
    int cpf, cpf_final;
    int dig1, dig2, dig3, dig4, dig5, dig6, dig7, dig8, dig9;
    int soma_verif1, dig_verif1, dig_verif2;
    

    cout<<"CPF: ";
    cin>>cpf;
    
    cpf_final = cpf;


    // colocar um if de inicio para verificar a quantidade dos 9 primeiros digitos 
    if (cpf < 10000000 or cpf > 999999999){ 
        cout<<"cpf inválido";

        return 0 ;
    }
    
    // separação da var int cpf
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

    // verificação do primeiro digito
    soma_verif1 = ((dig1 *  10) + (dig2 * 9) + (dig3 * 8) + (dig4 * 7) + (dig5 * 6) + (dig6 * 5) + (dig7 * 4) + (dig8 * 3) + (dig9 * 2)) % 11;
    if (soma_verif1 < 2) {
        dig_verif1 = 0;
     }else {
        dig_verif1 = 11 - soma_verif1;
        };
    
    // verificação do segundo digito
    soma_verif1 = ((dig1 * 11) + (dig2 * 10) + (dig3 * 9) + (dig4 * 8) + (dig5 * 7) + (dig6 * 6) + (dig7 * 5) + (dig8 * 4) + (dig9 * 3) + (dig_verif1*2)) % 11;
        if (soma_verif1 < 2) {
        dig_verif2 = 0;
     }else {
        dig_verif2 = 11 - soma_verif1;
        };
        
    cout << cpf_final<< '-' << dig_verif1<< dig_verif2 <<endl;

    cout<<"cpf válido";
    
}