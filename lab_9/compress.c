#include<stdio.h>
#include<stdlib.h>
#include<string.h>


struct stuff{
		char name[50];
		int inum;
		float fnum;
};
	
void main() {
	FILE *f, *fb;
	struct stuff si;
	
	int i;
	char *n;
	char s1[50], s2[50];
	
	f = fopen("name.txt", "r");
	fb = fopen("test_C.bin", "wb");
	
	if (f == NULL | fb == NULL){
		exit;
	}
  
	while (!feof(f)){	
		fgets(si.name,sizeof(si.name), f);
		i = 0;
		
		if ((n = strchr(si.name, '\n')) != NULL){
			*++n = '\0';
		}
		
		fgets(s1,sizeof(s1), f);
		fgets(s2,sizeof(s2), f);
		
		si.inum = atoi(s1);
		si.fnum = atof(s2); 
		
		i = strlen(si.name)-2;
		char char_i = (char) i;
		
		fwrite(&char_i , 1, sizeof(char), fb);
		fwrite(si.name, 1, i, fb);
		fwrite(&si.inum, 1, sizeof(int), fb);
		fwrite(&si.fnum, 1, sizeof(float), fb);	
	}
		 
	fclose(f);
	fclose(fb); 
}