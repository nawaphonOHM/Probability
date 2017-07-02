#include<stdio.h>

int main(){
	int probability_function[3][13] = {0}, i, j;
	float sample_spaces = 36.0;
	
	for(i = 1; i <= 6; i++){
		for(j = 1; j <= 6; j++){
			probability_function[!(i % 2) + !(j % 2)][i + j]++;
		}
	}
	
	for(i = 0; i < 3; i++){
		for(j = 0; j < 13; j++){
			printf("P(X = %d, Y = %d) = %d/%.0f = %.4f\n", j, i, 
			probability_function[i][j], sample_spaces, probability_function[i][j] / sample_spaces);
		}
	}
}
