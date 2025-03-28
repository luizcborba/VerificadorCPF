# Validador de CPF

## Descrição
Este é um programa desenvolvido em C++ para a disciplina de **Algoritmos e Programação 1** da **Universidade do Vale do Itajaí (UNIVALI), campus Itajaí**. O objetivo do programa é gerar os dígitos verificadores de um CPF a partir dos primeiros 8 ou 9 dígitos informados pelo usuário.

## Autores
O projeto foi desenvolvido em grupo pelos seguintes alunos:
- Luiz Miguel Silvino
- Matheus Alexandre Santos
- Luiz Borba
- Carlos

## Como funciona?
1. O usuário insere um CPF com **8 ou 9 dígitos**.
2. O programa valida se a quantidade de dígitos está correta.
3. Se válido, o programa separa os dígitos e calcula os dois dígitos verificadores.
4. Os dígitos verificadores são adicionados ao CPF.
5. O programa exibe o CPF completo e informa se ele é válido.

## Como compilar e executar?
Para compilar e rodar o programa, utilize um compilador C++ como `g++`. No terminal, execute os seguintes comandos:

```sh
# Compilar
g++ -o validador_cpf validador_cpf.cpp

# Executar
./validador_cpf
```

## Estrutura do Código
O programa segue a seguinte lógica:
1. Recebe a entrada do usuário e verifica se o CPF tem 8 ou 9 dígitos.
2. Separa cada dígito individualmente.
3. Calcula os dois dígitos verificadores usando a fórmula padrão do CPF.
4. Adiciona os dígitos verificadores ao final do CPF.
5. Exibe o CPF completo e indica se ele é válido.

## Requisitos
- Compilador C++ (g++, Clang, MSVC, etc.)
- Terminal para execução do programa

---
Desenvolvido para fins acadêmicos na UNIVALI - Itajaí.

