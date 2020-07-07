#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main(){
	FILE *f;
	int i;
	char count;

	f = fopen("test_C.bin", "rb");

	while(fread(&count, sizeof(char), 1, f) == 1) {
		
		char letter;
		int inum; 
		float fnum; 
		
		for (i = 0; i < count; i++) {
			
			fread(&letter, sizeof(char), 1, f);
			char name = letter; 
			printf("%c", name); 
		}
		
		printf("\n"); 
		
		fread(&inum, sizeof(int), 1, f);
		printf("%d\n", inum);  
		
		fread(&fnum, sizeof(float), 1, f);
		printf("%.9f\n", fnum); 
	}
	
	fclose(f);
}