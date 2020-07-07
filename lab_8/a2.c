#include <stdio.h>

int main() {
int x;
int y;
int i;
int k;
char ch;
int array[4][4];
scanf("%d%d",&x,&y);

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

scanf("%c", &ch);
int sign = 0;

while(sign==0) {


while(ch == ' '|| ch== '\t' || ch == '\n'  ) { 

scanf("%c", &ch);


} 


if(ch=='q') {

return(0);

}



while(ch != 'u' && ch != 'd' && ch != 'l' && ch != 'r' ) {



printf("No Such Command\n");
scanf("%c", &ch);
break;

}



while(ch == 'u' || ch == 'd' || ch == 'l' || ch == 'r' || ch=='q') {

switch(ch) {

 case 'u' :
   
  if(x-1<0) {
  printf("Not a valid move");
  scanf("%c", &ch);
  break;
  }
  else {
    
    
  int temp = array[x-1][y];
  array[x][y] = temp;
  x =  x-1;
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
   
  
  scanf("%c", &ch);
  break;
  
  }
  

 
case 'd' :

 if(x+1>3) {
   printf("Not a valid move");
  scanf("%c", &ch);
  break;
 }
   
 else {
 
    
  int temp = array[x+1][y];
  array[x][y] = temp;
  x =  x+1;
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
   
  scanf("%c", &ch);
  break;
}
 
  


case 'l' :

  if(y-1<0) {
  printf("Not a valid move");
  scanf("%c", &ch);
  break;
   
  }
else {
int temp = array[x][y-1];
array[x][y] = temp;
y =  y-1;
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
   
  scanf("%c", &ch);
  break;
}


   case 'r' :
  if(y+1>3) {
  printf("Not a valid move");
  scanf("%c", &ch);
  break;
    
   
  }
  else {
  int temp = array[x][y+1];
array[x][y] = temp;
y =  y+1;
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
   
  scanf("%c", &ch);
  break;
  
  
  
 }





case  'q' :

return(0);


}

}



}

}
