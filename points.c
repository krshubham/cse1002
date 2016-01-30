#include<stdio.h>
int main()
{
int n,i,pa,pb,p1=0,p2=1,n1,j,y1,y2,a=0,b=1;
printf("Enter the set of points you want to enter: ");
scanf("%d",&n);
printf("Enter in the format x,y: \n");
int *arr = (int*)malloc(sizeof(int)*n*2);
for(i=1;i<=n;i++){
scanf("%d,%d",&pa,&pb);
arr[p1] = pa;
arr[p2] = pb;
p1+=2;
p2+=2;
}
printf("Enter the number of boundary points");
scanf("%d",&n1);
int *arrboundary = (int*)malloc(sizeof(int)*n1*2);
printf("Enter the boundary points in the format [y1,y2]");
for(j=1;j<=n1;j++){
printf("Hello");
scanf("[%d,%d]",&y1,&y2);
}
for(i=0;i<2*n1;i++){
arrboundary[a] = p1;
arrboundary[b] = p2;
for(i=1 ; i<2*n;i+=2){
if(arr[i]>p1 && arr[i] < p2){
printf("%d,%d",arr[i-1],arr[i-1]);
}
}
}

return 0;
}
