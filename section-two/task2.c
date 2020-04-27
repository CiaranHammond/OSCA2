#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	FILE *green;
	green = fopen("green.txt", "r");

	char line[84];
	int hex;

	if(fgets(line, 84, green)){
		puts(line);
	}

	char* token = strtok(line, ",");

	while(token != NULL){
		hex = atoi(token);
//	printf("%d,", hex);
		token = strtok(NULL, ",");
	}

fclose(green);

	/*int num;
	scanf("%x", &num);
	printf("%d", num);*/
	return 0;
}
