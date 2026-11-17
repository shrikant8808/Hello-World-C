#include <stdio.h>

int main (void){
 int Maths, Physics, Total;
 float percentage;
 char Grade;
 
 printf("Enter Maths Marks:");
 scanf("%d",&Maths);
 
 printf("Enter Physics Marks:");
 scanf("%d",&Physics);
 
 //Calculate Total 
 Total = Maths + Physics;
 
 // Calculate Percentage 
 percentage =(Total/200.0)*100;
 
 printf("Maths Marks = %d\n", Maths);
 printf("Physics Marks = %d\n", Physics);
 printf("Total Marks = %d\n",Total);
 printf("percentage = %.2f%%", percentage);
 
 if (percentage>=90){
 Grade = 'A';
 }
 else if (percentage>=75){
 Grade = 'B';
 }
 else if (percentage>=60){
 Grade = 'C';
 }
 else if (percentage>=40){
 Grade = 'D';
 } 
 else{
 printf("Fail");
 }
 
 printf("Grade = %c\n", Grade);
 
 return 0;
 }
