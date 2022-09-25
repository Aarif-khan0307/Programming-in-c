#include<stdio.h> 
int main(){                   // to print multiplication table
   for(int a=10;a<101;a+=10){
       printf("%d\n",a);
       }
}



#include<stdio.h>               // divisibility test 
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    printf("divisibility returns :%d\n",num%97);
    return 0;
}




#include<stdio.h>               // grade system
int main(){
    int marks;
    printf("Enter the marks:");
    scanf("%d",&marks);

    if(90<=marks&& marks <=100){
        printf("you deserve A grade");
    }
    else if (80<=marks && marks <90){
        printf("you deserve B grade");
    }
    else if (70<=marks && marks <80){
        printf("you deserve C grade");
    }
    else{
        printf("you are fail ");
    }    
    return 0;
}





#include<stdio.h>                   // largest no. of 
int main (){
    int num1,num2,num3,num4;
    printf("enter the number:\n");
    scanf("%d",&num1);
    printf("enter the number:\n");
    scanf("%d",&num2);
    printf("enter the number:\n");
    scanf("%d",&num3);
    printf("enter the number:\n");
    scanf("%d",&num4);

    if(num1>num2){
        if (num1>num3){
            if(num1>num4){
                printf("%d is the bigger ",num1);
            }
            else{
                printf("%d is the bigger",num4);
            }
        }
    }
     else if (num2>num3){
        if(num2>num4){
            printf("%d is the bigger ",num2);
        }
        else{
            printf("%d is the bigger",num4);
            }
    }
    else if(num3>num4){
         printf("%d is the bigger ",num3);
         }
         else{
            printf("%d is the bigger",num4);   
         }
         return 0;
}







#include<stdio.h>                   // leap year
int main(){
    int year;
    printf("enter the year:\n");
    scanf("%d",&year);
    if (year%400==0){
        printf("%d is a leap year ",year);
    }
    else if (year%100==0){
        printf("%d is a non leap year ",year);
    }
    else if(year%4==0){
        printf("%d is a leap year ",year);
    }  
    else{
        printf("%d is a non leap year ",year);
    }  
    return 0;
}






#include<stdio.h>                       // lowercase
int main(){
    char ch;
    printf("enter the character:\n");
    scanf("%c",&ch);
    if ( ch>=97 && ch<=122 ){
        printf("%c is in lowercase ");
    }
    else {
         printf("%c is not in lowercase ");
    }    
    return 0;
}







#include<stdio.h>                //average marks
int main(){
    int english ,maths, chemistry;
    float total ;
    printf("Enter the marks of english:\n");
    scanf("%d",&english);
    printf("Enter the marks of maths:\n");
    scanf("%d",&maths);
    printf("Enter the marks of chemistry:\n");
    scanf("%d",&chemistry);
    total = (english + maths + chemistry)/3;
    if(total>=33){
        printf("you are pass well done \n");
    }
    else{
        printf("sorry you are fail \n");
    }
    return 0;
}






#include<stdio.h>                   // use of operators
#include<math.h>
    int main()
    {
        int a = 10;
        int b = 2;
        printf("the value of a+b is:%d\n",a+b);
        printf("the value of a-b is:%d\n",a-b);
        printf("the value of a*b is:%d\n",a*b);
        printf("the value of a/b is:%d\n",a/b);
        printf("the value of a to the power b is:%f\n",pow(a,b));
        printf("5 when divided by 2 leaves remainder %d\n",5%2);
        printf("-5 when divided by 2 leaves remainder %d\n",5%2);
        printf("the value of 4*a + 9*b is :%d", 4*a + 9*b);
        return 0;
}    
 





#include<stdio.h>                  //rating of customer
int main(){
    int rating;
    printf("Enter the rating :\n");
    scanf("%d",&rating);
    switch (rating)
    {
    case 1:
    printf("your rating is 1\n");
        break;
    case 2:
    printf("your rating is 2\n");
        break;
    case 3:    

    printf("your rating is 1\n");
        break;
        return 0;
    }
}







#include<stdio.h>                       // calculate the tax
int main()
{
    float tax , income;
    printf("Enter your income :\n");
    scanf("%f",&income);
    if (250000<income && income <=500000)
    {
        tax= 0.05*(income -250000);
    }
    if(500000<income && income<=1000000)
    {
        tax =0.20*(income - 500000);
    }
    if (income >1000000){
        tax=0.30*(income - 1000000);
    }
    printf( "tax you have to pay is %f\n ",tax);
    return 0;
}


