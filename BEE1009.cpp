//BEE1009
#include <stdio.h>

int main(){
	
 char texto;
 double fixo, vendas, comissao, total;
 
 	scanf("%s %lf %lf", &texto, &fixo, &vendas);
 	comissao = (vendas * 15) / 100;
 	total = comissao + fixo;
 
 
 printf("TOTAL = R$ %.2lf\n", total);
	
	return 0;	
}