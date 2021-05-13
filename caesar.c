#include <stdio.h>
#include <stdlib.>
#include <string.h>

void caesar_encrypt(char* Text, int key);

int main()
{
	
	int key = 3;
	char Text[100];
	
	printf("zadej text, který chceš zašifrovat: ");
	
	fgets(Text, sizeof(Text), stdin);
	
	printf("zašifrovaný text je: ");
	
	caesar_encrypt(Text, key);
	
}

void caesar_encrypt(char* Text, int key)
{
	
	int i=0;
	int cypherV;
	char cypher;
	
	while(Text[i] != '\0' && strlen(Text)-1 > i)
	{
		cypherV = ((int)Text[i] -65 + key) % 26 + 65;
		cypher = (char)(cypherV);
		
		printf("%c", cypher);
		i++;
	}
	printf("\n");
}