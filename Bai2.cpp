#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <conio.h>

typedef struct {
	int integer_part;   
	int numerator;      
	int denominator;    
} MixedNumber;


int random_int(int min, int max) {
	return rand() % (max - min + 1) + min;
}

MixedNumber* create_mixed_number_array(int size) {
	MixedNumber* b = (MixedNumber*)malloc(size * sizeof(MixedNumber));
	if (b == NULL) {
		printf("Memory allocation failed.\n");
		return NULL;
	}

	srand(time(NULL));

	for (int i = 0; i < size; ++i) {
		b[i].integer_part = random_int(-10, 10);     
		b[i].numerator = random_int(1, 10);          
		b[i].denominator = random_int(1, 10);        
	}

	return b;
}


int main() {
	int size = 5;
	MixedNumber* mixed_numbers = create_mixed_number_array(size);

	if (mixed_numbers != NULL) {
		printf("Generated mixed numbers:\n");
		for (int i = 0; i < size; ++i) {
			printf("%d and %d/%d\n", mixed_numbers[i].integer_part, mixed_numbers[i].numerator, mixed_numbers[i].denominator);
		}
		free(mixed_numbers);
	}

	getch();
}
