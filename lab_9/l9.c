
#include<stdio.h>
#include<string.h>


struct record {

char name[50];
int num1;
float num2;

};

struct record save(const char *name, int num1, float num2) {

struct record p;
p.num1=num1;
p.num2=num2;
strcpy(p.name,name);
return p;


}

int main() {


 FILE *fp1,*fp2;
 fp1=fopen("name.txt","r");
 fp2=fopen("name.bin","wb");
 if(fp1==NULL){
 
 printf("Can't open name.txt");
 return(0);
 
 }
 char name2[50];
 int num1;
 float num2;
 fgets(name2,50,fp1);
 while(fscanf(fp1,"%d\n%f\n",&num1,&num2)!=EOF) {

    struct record record1;
    record1=save(name2,num1,num2);
    //printf("%s%d\n%f\n",record1.name,record1.num1,record1.num2);
    fwrite(record1.name,sizeof(record1.name[0]),sizeof(record1.name)/sizeof(record1.name[0]),fp2);
    fwrite(&record1.num1,sizeof(int),1,fp2);
    fwrite(&record1.num2,sizeof(float),1,fp2);
    fgets(name2,50,fp1);
 
 }
 fclose(fp1);
 fclose(fp2);
 
 


}
