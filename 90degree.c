#include<stdio.h>
main(){
int N,i,j;
printf("enter order of the matrix:");
scanf("%d",&N);
int in[N][N],out[N][N];
printf("enter elements of a matrix:");
for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		scanf("%d",&in[i][j]);
	}
}
for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		out[j][N-1-i]=in[i][j];
	}
}
for(i=0;i<N;i++){
	for(j=0;j<N;j++){
		printf("%d  ",out[i][j]);
	}
	printf("\n");
}
}