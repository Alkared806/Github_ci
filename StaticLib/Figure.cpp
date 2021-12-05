#include <stdio.h> 
void diagonals(char sign, int w) { 
	int i, j; 
	
	for (i = 0; i < w; i++) {
		for (j = 0; j < w; j++) {
			if (i == j || i + j == w - 1) 
				putchar(sign); 
			else 
				putchar(' '); 
		} 
		putchar('\n'); 
	} 
}