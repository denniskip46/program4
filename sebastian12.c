//"program to calcuiate are and perimeter of a rectengle"
#include<stdio.h>
int main()

{
float Area,perimeter,length,width;
printf("Enter the length");
scanf("%f",&length);
printf("Enter the width");
scanf("%f",&width);
Area=length*width;
printf("Area of a rectangle%0.2f",Area);
perimeter=2*(length*width);
printf("perimeter of a rectangle%0.2f",perimeter);	
	return 0;
}