//#include<stdio.h>
////나의 풀이 
//int main(){
//	int a,b,c;
//	scanf("%d %d %d",&a, &b, &c);
//	if(a+b<c)
//	printf("NO\n");
//	else if(a+c<b)
//	printf("NO\n; 
//	else if(b+c<a)
//	printf("NO\n");
//	else
//	printf("YES\n");
//		
//	return 0;
//} 

#include<stdio.h>
//강사 풀이 
int main()
{
	int a,b,c,max,tot;
	scanf("%d %d %d",&a,&b,&c);
	tot=a+b+c;
	if(a>b) max=a;
	else max=b;
	if(c>max) max=c;
	
	if((tot-max)>max) printf("YES\n");
	else printf("NO\n");
	
	return 0;
} 
