#include <stdio.h>

int main() {
int x;
int y;
int i;
int k;
char ch;
int array[4][4];
scanf("%d%d",&x,&y);

if (x>= 3 || x<0 || y>=3 || y<0) {
	return(0);
}

for(i=0; i<=3; i++) {    

for(k=0; k<=3; k++) {

if(i==x && k==y) {
   
    continue;
}
scanf("%d", &array[i][k]);


}

}

for(i=0; i<=3; i++) { 

for(k=0; k<=3; k++) {
       
if(x==i && y==k ) {
  printf("    ");
}
else {
printf("%-4d", array[i][k]);
}
}
printf("\n");
}
}