#include<stdio.h>

int main(void)
{
	int i;
	char a[]={'A','h','o','j','!',0};
	printf(a);
	a[4]='?';
	printf(a);
	return(0);
	
for (i=0;i<6;i++)
{
	printf("%c",a[i]);
}
}
