#include <stdio.h>
#include <string.h>

int main() {
	FILE *green;
	green = fopen("green.txt", "r");
	char line[84];

	if(fgets(line, 84, green)){
		puts(line);
	}
	char* token = strtok(line, ",");
	
	while(token != NULL){
		printf("%d,", token);
		token = strtok(NULL, ",");
	}

	/*while(fscanf(green, "%x", line))
	{ 
		printf("%d, ", line);
	}*/
	
	fclose(green);
	
	/*int num;
	scanf("%x", &num);
	printf("%d", num);*/
	return 0;
}
