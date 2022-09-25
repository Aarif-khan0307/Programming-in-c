#include<stdio.h>                // addition
int main()
{
    int a,b;
    printf("Enter the value of a\n");
    scanf("%d",&a);

    printf("Enter the value of b\n");
    scanf("%d",&b);

    printf("sum of a and b is %d",a+b);
    return 0;
}


#include<stdio.h>                    // area of circle 
int main()
{
    int r = 10;
    float pi = 3.14;
    int height = 5;
    printf("the area of circle is %f\n",pi*r*r);
    printf("the volume of the cyclinder is %f\n",pi*r*r*height);
    return 0;
}



#include<stdio.h>                           // area of rectangle
int main()
{
    int length=15,breadth=10;
     int area= length*breadth;
    printf("The area of rectangle is %d ",length*breadth);
    return 0;
}


#include<stdio.h>                   // area of rectangle
int main()
{
    int length,breadth;
    int area= length*breadth;
    printf("Enter the value of length\n");
    scanf("%d",&length);
    printf("Enter the value of breadth\n");
    scanf("%d",&breadth);
    printf("The area of rectangle is %d ",length*breadth);
    return 0;
}



#include<stdio.h>               // conversion of temperature 
int main()
{
    float celsius = 37,far;
    far = (celsius*9/5) +32;
    printf("The conversion of celsius temperature into fahrenheit is %f",(celsius*9/5) +32);
    return 0;

}



#include<stdio.h>                   // hello world
int main()
{

    printf("hello world");

    return 0;
}


 
#include<stdio.h>                           // library function
int main()
{
    int a = 10;
    float b = 20.6;
    char c = 'l';
    int e =20;
    int s = 62+5;
    printf("the value of a is %d \n", a);
    printf("the value of b is  %f \n",b);
    printf("the value of c is %c \n",c);
    printf("sum of a and e is %d \n",a +e );
    printf("multiplication of e and s is %d \n",e*s);
    return 0;

} 



#include<stdio.h>                   //   calculate simple interest 
int main()
{
    int amount = 200,rate =5, year=5;
     float simpleInterest= (amount*rate*year)/100;
    printf("the simpleInterest is %f",simpleInterest);
    return 0;
}