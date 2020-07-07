#include <stdio.h>
#include <stdlib.h>

struct rec {
	int inum;
	float fnum;
	char firstName[50];
	char lastName[50];
};

int main() {
	
	int i; //counter
	struct rec my_rec;
	
	FILE *ptr;
	
	ptr = fopen("name.bin", "rb");
	
	while(!feof(ptr)) {//for(i = 1; i <= 10; i++){
		fread(&my_rec, sizeof(struct rec), 1, ptr);
		printf("%s %s\n", my_rec.firstName, my_rec.lastName);
		printf("%d\n", my_rec.inum);
		printf("%f\n", my_rec.fnum);
		
	}

	fclose(ptr);
	return 0;



}