#include <stdio.h>
int main(){
     
    int one = 1;
    int two = 2;
    int five = 5;
    int ten = 10;
    int twenty = 20;
    int fifty = 50;
    int hundred = 100;
    int fivehundred = 500;
   
    int count1 ;
    int count2 ;
    int count5 ;
    int count10 ;
    int count20 ; 
    int count50 ;
    int count100 ;
    int count500 ;
   
  
   
    printf("Enter the count of one rupees:- ");
    scanf("%d", &count1);    
    int value1 = one * count1;

    printf("%d", value1);
   
    printf("Enter the count of two rupees:- ");
    scanf("%d", &count2);
    int value2 = two * count2;
    printf("%d", value2);
   
    printf("Enter the count of five rupees:- ");
    scanf("%d", &count5);
    int value5 = five * count5;
    printf("%d", value5);
   
    printf("Enter the count of ten rupees:- ");
    scanf("%d", &count10);
      int value10 = ten * count10;
    printf("%d", value10);
   
    printf("Enter the count of twenty rupees:- ");
    scanf("%d", &count20);
    int value20 = twenty * count20;
    printf("%d", value20);
  
    printf("Enter the count of fifty rupees:- ");
    scanf("%d", &count50);
    int value50 = fifty * count50;
    printf("%d", value50);
   
    printf("Enter the count of hundred rupees:- ");
    scanf("%d", &count100);
    int value100 = hundred * count100;
    printf("%d", value100);
   
    printf("Enter the count of five hundred rupees:- ");
    scanf("%d", &count500);
    int value500 = fivehundred * count500; 
    printf("%d", value500);
    
    int Total = value1 + value2 + value5 + value10 + value20 + value50 + value100 + value500;
    printf("Total amount in the piggy bank: %d", Total);
    return 0;
}
