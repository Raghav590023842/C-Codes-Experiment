//1.WAP to take check if the triangle is valid or not.
// If the validity is established, 
// do check if the triangle is isosceles, equilateral, right angle, or scalene. 
// Take sides of the triangle as input from a user.

#include<stdio.h>
int main()
{
	int s1,s2,s3;
	printf("Enter Length of First Side:");
	scanf("%d",&s1);
	printf("Enter Length of Second Side:");
	scanf("%d",&s2);
	printf("Enter Length of Third Side:");
	scanf("%d",&s3);
	
	if (s1+s2>s3 && s2+s3>s1 && s1+s3>s2)
	{
		printf("Triangle is Valid!\n");
		if (s1==s2==s3)
		{
			printf("It is an equilateral triangle.");
		}
		else if (s1!=s2 && s2!=s3 && s1!=s3)
		{
			printf("It is a Scalene triangle.");
		}
		else {
			printf("It is an Isosceles triangle.");
		}
	}
	else
	{
			printf("It is not a valid Triangle!");
		}
	return 0;
}
