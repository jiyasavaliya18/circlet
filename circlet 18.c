#include<stdio.h>
int main(){
	
	int r, c, s;
	
	for(r=1; r<=5; r++){
	
		for(c=1; c<=r; c++){
			printf("%d",c);
		}
	
   for(s=r; s<=4; s++){
   	printf(" ");
   }
   
      	for(c=r; c>=1; c--){
   		printf("%d",c);
	   }
	   
	   printf("\n");
   }


}
