#include <stdio.h>
#include <math.h>

double frequency_calc(double key);
int NUMBER_OF_KEYS = 88; 
int count = 0;  

double frequency_calc(double key) 
{
	return pow(2,(key - 49) / 12) * 440; 
}

int main(void)
{
	char *keys[] = {"A", "A#", "B", "C", "C#", "D", "D#", "E", "F", "F#", "G", "G#"};
	for (int i = 0; i < NUMBER_OF_KEYS; i++)
	{
		double frequency = frequency_calc(i+1);
		printf("%s %.4f\n", keys[count], frequency);
		count++;
		if (count == 12) count = 0; 
	}	
	return 0; 
}
