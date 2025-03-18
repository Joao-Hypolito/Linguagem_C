//bee2165

#include <stdio.h>

int main(){
	int qtsCaracteres, i;
	char tweet[510];

	scanf("%[^\n]", tweet);

	i = 0;
	while (tweet[i++])
		qtsCaracteres++;

	if (qtsCaracteres > 140)
		printf("MUTE\n");
	else
		printf("TWEET\n");

}