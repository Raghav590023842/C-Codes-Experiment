#include<stdio.h>
int main()
{
	int len,bre;
	printf("Enter the Length of Rectangle: %d", len);
	scanf("%d",&len);
	
	printf("Enter the Breath of Rectangle: %d", bre);
	scanf("%d",&bre);
	
	int area;
	area = len*bre;
	int peri;
	peri = (2*(len+bre));
	
	printf("The Area of Rectangle is %d The Perimeter of Rectangle is %d\n", area,peri);
	return 0;
}
