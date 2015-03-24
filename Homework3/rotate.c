#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int index = 0;
char* final;

void return_to_start(int stop){
	if(index >= stop){
		index = 0;
	}
}
void rotate(char* str, int turns){
    final = malloc(strlen(str));
	int length = strlen(str);
    index = turns % length;
	for(int i = 0; i < length; i++){
		final[i] = str[index];
		index++;
		return_to_start(length);
	}
	printf("%s\n", final);
	free(final);
}

int main(int argc, char *argv[]) {
	int value = atoi(argv[2]);
	rotate(argv[1], value);
	return 0;
}
