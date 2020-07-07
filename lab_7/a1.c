
#include<stdio.h>

int main() {
	int i;
	int j;
	int s;

int input;
scanf("%d", &input);
int array[input][input];
int count=0;
for(i=0; i<= input-1; i++) {
for(j=0; j<= input-1; j++) {
scanf("%d", &array[i][j]);
}

}

for(i=0; i<= input-1; i++) { 

for(j=0; j<= input-1; j++) {  
       
        if(array[j][i] == 1) {
        
       
        for(s = 0; s<=input-1;s++) {
         
        array[j][s] = array[j][s] || array[count][s];
       }
  
        
    }
 
 }
 count++;


}

for(i=0; i<= input-1; i++) {
for(j=0; j<= input-1; j++) {
printf("%d", array[i][j]);
}
printf("\n");

}






return(0);
}
