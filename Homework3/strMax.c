#include <stdio.h>
#include <string.h>
#include <stdlib.h>


char* str_max(char* first, char* second){
	int counter = 0;
	int shorter = strlen(second);
	int longer = strlen(first);
	char* final;
	if(longer < shorter){
		str_max(second, first);
	}else{
		final = malloc(longer + 1);
		for(int i = 0; i < shorter; i++){
			if(first[i] > second[i]){
				final[i] = first[i];
			}else{
				final[i] = second[i];
			}
			counter++;
		}
	}
	
	for(int i = shorter; i < longer; i++){
		final[counter] = first[i];
		counter++;
	}
	final[longer] = '\0';
	return final;
	free(final);
}

int main(int argc, char *argv[]) {
	printf("%s\n", str_max(argv[1], argv[2]));
	return 0;
}