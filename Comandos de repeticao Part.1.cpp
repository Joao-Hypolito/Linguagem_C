#include <iostream>

using namespace std;

int main(){
	
	int n;
	
	cout << "Digite um numero inteiro nao negativo\n";
	cin >> n;
	
	int soma = 0;
	int cont = 1;
	
	//while(cont <= n){
	//	soma += cont;
	//	cont ++;
	//}
	
	//do{
	//	soma += cont;
	//	cont++;
	//} while(cont <= n);
	
	for( int i = 1; i <= n; i++){
		soma += i;
	}
	
	
	cout << "A soma dos numeros de 0 ate " << n << " = " << soma <<  endl;
	
	return 0;
}
