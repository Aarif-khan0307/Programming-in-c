#include<stdio.h>                   // odd or even
int main()
{
    int a ;
    printf("Enter a number:\n");
    scanf("%d",&a);

    if (a%2==0)
    {
    printf("%d is even\n",a );
    }
    else{
        printf("%d id odd\n",a);
    }
    return 0;
}




#include<stdio.h>                   //caste the vote under  a condition 
int main(){
    int age;
    printf("Enter the age :");
    scanf("%d",&age);

    if (age>=18){
        printf("you are able to cast the voat\n");
    }
    else{
        printf("you are not able to cast the voat\n");
    }
    if (18<=age && age <=30){
        printf("and can marry\n");
    }
    else{
        printf("and cannot marry a good girl\n");
    }
    return 0;
}