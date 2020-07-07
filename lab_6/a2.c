#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {

int row;
int column;
int i;
int j;
printf("Enter the row and column");
scanf("%d%d", &row,&column);
printf("Enter the block size");
int blocksize;
scanf("%d", &blocksize);
int searchsize;
printf("Enter the search size");
scanf("%d", &searchsize);
int x,y; //position
printf("Enter the position");
scanf("%d%d",&x,&y );
int matrix[row][column];
for(int i=0;i<=row-1;i++) {
for(int j=0;j<=column-1;j++) {
scanf("%d", &matrix[i][j]);
}
  

}
 int originalx=x; //placeholder for old x
 int originaly=y; // placeholder for old y
 int blocksizex; 
 int blocksizey;
 int finalx;
 int finaly;
 int max=INT_MAX;
 int opp = searchsize*-1;
 if(x<0 || x>row) {
   printf("Wrong");
 
 }
 
 if(y<0 || y>column) {
   printf("Wrong");
 
 }
 
 int matrix2[blocksize][blocksize]; //makes a m x m matrix
 int matrix3[blocksize+row][blocksize+column];
 
 
 for(i=0; i<=blocksize-1; i++) {
 
  for(j=0; j<=blocksize-1; j++) {
  
      if(x+i >= row || x < 0 || y < 0 || y+j >= column) {
           
           matrix2[i][j] = 0;
           printf("%d", matrix2[i][j]);
           continue;
         }
    
    matrix2[i][j] = matrix[x+i][y+j];
       printf("%d", matrix2[i][j]);
  
  }
            printf("\n");
 
 }
 

 
 int negative = -1 * searchsize;
 for( i= negative; i<=searchsize; i++) {
            x = originalx; // go to original x
            x = x + i; // go to changed x position
            
            
  for( j= negative; j<=searchsize; j++) {
  y = originaly; // go to original y
            y = y + j;// go to changed  y position
            
            
  if(x>= row || y>= column || x<0 || y<0 ) {
             
              continue;  // we do not want any numbers outside the boundaries of the matrix
         }
           
         printf("(%d, %d)", i, j);
         printf("\n");
          
     for(int k=0; k <= blocksize-1; k++ ) {

        blocksizex = x; // keep track of the search size x 
        blocksizex = blocksizex + k; // change the position 
        for(int l=0; l<= blocksize-1 ; l++) {
 
          blocksizey = y ;// keep track of the search size y
             blocksizey = blocksizey + l;
               //printf("(%d)", blocksizex);
              //printf("(%d)", blocksizey);
             if(blocksizex >= row || blocksizey >= column ) {
               matrix3[k][l] = 0;
                 continue;
             
             }
             else {
              matrix3[k][l] = matrix[blocksizex][blocksizey];
              //printf("%d", matrix[blocksizex][blocksizey]);
              
             
         }
        }
        
       
      
         //printf("\n");
      }
 
   
    int sum=0;
      if(i==0 && j==0) {
      
       sum=INT_MAX;
      
      }
       for(int h=0; h<= blocksize-1; h++) {
        
           
            if( i==0 && j==0) {
             
               break;
             }
         for(int v=0; v<= blocksize-1; v++) {
         
             
             
             sum= sum + abs(matrix2[h][v]- matrix3[h][v]);
             
             
             printf("%d", matrix3[h][v]);
         
         }
         
         printf("\n");
        
        
    }
      
    printf("\n sum=%d", sum);
    
      if(sum<max) {
      
       max =sum;
       finalx=i;
       finaly=j;
     
      
      }
    
    
     
 
      
      
  
      
      
      
      
      
 
 }
 
 
 
 
}

printf("\n(%d% d)", finalx, finaly);