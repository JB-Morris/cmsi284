#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *keys[] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};	
int scale_size = 7;
int current;
int notes = 12;

int iterator_start(char* key){
	int counter = 0;
	while(strcmp(key, keys[counter]) != 0 && counter < notes){
		counter++;
	}
	return counter;
}
void return_to_start(){
	if(current >= 12){
		current = 0;
	}
}
void major_scale(char* key){
//Major: W-W-H-W-W-W-H
	printf("%s major: ", key);

	current = iterator_start(key);
	for(int i = 0; i < scale_size; i++){
		if(i == 2 || i == 6){
			printf("%s ", keys[current]);
			current++;
			return_to_start();
		}else{
			printf("%s ",keys[current]);
			current++;
			return_to_start();
			current++;
			return_to_start();
		}
		
	}
	printf("\n");

}

void minor_scale(char* key){
//Minor: W-H-W-W-H-W-W
printf("%s minor: ", key);
	current = iterator_start(key);
	for(int i = 0; i < scale_size; i++){
		if(i == 1 || i == 4){
			printf("%s ",keys[current]);
			current++;
			return_to_start();
		}else{
			printf("%s ",keys[current]);
			current++;
			return_to_start();
			current++;
			return_to_start();
		}
	}
	printf("\n");
}


int main(int argc, char *argv[]){
    // iterator_start("A");
	major_scale(argv[1]);
	minor_scale(argv[1]);
	return 0; 
}