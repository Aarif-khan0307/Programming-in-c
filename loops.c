// //numbers between 100 and 200

// #include<stdio.h>
// int main(){
//     int a=100 ;
//     while(a>=100 && a<=200){
//         printf("%d\n",a);
//         a++;
//     }
// }






// #include<stdio.h>            // initilizing with zero
// int main(){
//     int a =0;
//     while(a<200){
//         if(a>100){
//             printf("the numbers are:%d\n",a);
//         }
//         a++;
//     } return 0;
// }






// //  program to print first natural numbers using do while loop 

// #include<stdio.h>
// int main(){
//     int a =1;
//     do{
//         printf("the value of a is:%d\n",a);
//         a++;
//     }
//     while(a<10);
// }




// //program to print first natural numbers using for loops

// #include<stdio.h>
// int main(){
//     for( int i=1;i<10;i++){
//         printf("The number is :%d\n",i);
//     }
// }






// //numbers between 10 and 20 using for loop

// #include<stdio.h>
// int main(){
//     for(int i=0;i<20;i++){
//         if(i>10){
//             if(i==15){
//                 continue;
//             }
//             printf("the numbers are :%d\n",i);
//         } 
//     }
// }





// //program to print numbers in reverse order

// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for( int i=n;i;i--){
//         if(i==5){
//             break;
//         }
//         printf("the numbers are:%d\n",i);
//     }
// }



// //program to print multiplication of n 
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(int i=1;i<=10;i++){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
// }



// //program to print multiplication of n  in reverse order
// #include<stdio.h>
// int main(){
//     int n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(int i=10;i>=1;i--){
//         printf("%d x %d = %d\n",n,i,n*i);
//     }
// }


// //program to print multiplication of n by using while loop 
// #include<stdio.h>
// int main(){
//     int n,i=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=10){
//         printf("%d X %d = %d\n",n,i,n*i);
//         i++;
//     }
// }



// #include<stdio.h>               //program to print multiplication of n by using do  while loop 
// int main(){
//     int n,i=1;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     do{
//         printf("%d X %d = %d\n",n,i,n*i);
//         i++;
//     }
//     while(i<=10);
// }    



// //sum of the natural  numbers using while loop
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n;
//     printf("enter the number of elements to be added :");
//     scanf("%d",&n);
//     while(i<=n){
//         sum +=i;
//         i++;
//     }printf("sum of natural numbers is %d :",sum);
// }    





// //sum of the natural  numbers using while loop
// #include<stdio.h>
// int main(){
//     int i,sum=0,n;
//     printf("enter the number of elements to be added :");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         sum+=i;
//     }printf("sum is %d",sum);
// }     


// #include<stdio.h>       //sum of the natural  numbers using  do while loop
// int main(){
//     int i=1,sum=0,n;
//     printf("enter the number of elements to be added :");
//     scanf("%d",&n);
//     do{
//         sum +=i;
//         i++;
//     }while(i<=n);
//     printf("sum is :%d ",sum);
// }    



// //sum of numbers in table of 8 (8*1 to 8*10)
// #include<stdio.h>
// int main(){
//     int i=1,sum=0,n=8;
//     for(i;i<=10;i++){
//         n=8*i;
//         sum+=n;
//     }printf("sum is : %d ",sum);
// }



// // program to wrrite factorial using for loop
// #include<stdio.h>
// int main(){
//     int i=1,factorial=1,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     for(i;i<=n;i++){
//         factorial*=i;
//     }printf("factorial of %d is :%d",n,factorial);
// }



// // program to wrrite factorial using while loop
// #include<stdio.h>
// int main(){
//     int i=1,factorial=1,n;
//     printf("enter the value of n:");
//     scanf("%d",&n);
//     while(i<=n){
//         factorial*=i;
//         i++;
//     }printf("factorial of %d is :%d",n,factorial);
// }   



// // program to find a given number is prime or not
// #include<stdio.h>
// int main(){
//     int i,n,prime=0;
//     printf("enter the number :");
//     scanf("%d",&n);
//     for(i=2;i<n;i++){
//         if(n%i==0){
//             printf("this is not a prime number");
//             prime=1;
//             break;
//         } 
//     }       
//     if(prime==0){
//         printf("this is  a prime number");
//     }    
// }



