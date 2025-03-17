#include <iostream>

using namespace std;

int main() {
    float nota1, nota2;
    float media;

    cout << "Informe a nota 1: ";
    cin >> nota1;

    cout << "Informe a nota 2: ";
    cin >> nota2;

    media = (nota1 + nota2) / 2;

    cout << "Media = " << media << endl;

    //if (media >= 5) {
    //    cout << "Aluno aprovado\n";
    //}
    
    //if(media >= 5){
    //    cout << "Aluno aprovado\n";
    //} else{
    //    cout << "Aluno reprovado\n";
    //}

    if(media < 2.5){
        cout << "Nota Final: D\n";
    }else if (media < 5){
        cout << "Nota final: C\n";
    }else if (media < 7.5){
        cout << "Nota final: B\n";
    }else{
        cout << "Nota final: A\n";
    }

    return 0;
}
