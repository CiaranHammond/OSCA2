#include <stdio.h>
#include <string.h>

int main() {
	system("egrep '^#([a-fA-F0-9]{6}|[a-fA-F0-9]{8})' colours.txt | cut -c 4,5");
	
	/*int num;
	scanf("%x", &num);
	printf("%d", num);*/
	return 0;
}
