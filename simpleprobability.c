#include<stdio.h>

int main(){
	int i, j, k, sum_of_3_dires[19] = {0};
	float sample_spaces = 0.0;
	for(i = 1; i <= 6; i++){
		for(j = 1; j <= 6; j++){
			for(k = 1; k <= 6; k++){
				printf("(%d,%d,%d), ", i, j, k);
				sum_of_3_dires[i + j + k]++;
				sample_spaces++;
			}
			printf("\b\b ");
			printf("\n");
		}
	}
	printf("--------------------------------------------------------------------------\n");
	printf("Sample Spaces: %.0f\n", sample_spaces);
	printf("--------------------------------------------------------------------------\n");
	for(i = 0; i < 19; i++){
		printf("Probability sum %d is %d/%.0f = %.4f\n", i, sum_of_3_dires[i], sample_spaces, sum_of_3_dires[i] / sample_spaces);
	}
}
