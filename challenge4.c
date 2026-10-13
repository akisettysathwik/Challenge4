#include <stdio.h>
int main(){
    
    float expense,total=0;
    float smalltotal=0,mediumtotal=0,largetotal=0;
    float average;
    int validcount=0,smallcount=0,mediumcount=0,largecount=0;

    while (expense != 0)
    {
        printf("Enter your expenses: ");
        scanf("%f",&expense);

        if(expense < 0){
            printf("Invalid value\n");}
             
else{
 validcount++;
 total = total + expense;}

 if (expense < 100){

    smallcount++;
    smalltotal = smalltotal+expense;}

 else if (expense < 500){
    mediumcount++;
    mediumtotal = mediumtotal+expense;}

 else{
    largecount++;
    largetotal = largetotal+expense;}
 }
 printf("Number of valid expenses: %d\n", validcount-1);
 printf("Total expense: %f\n",total);
 printf("Small count: %d\n",smallcount);
 printf("Small total: %f\n",smalltotal);
 printf("Medium count: %d\n",mediumcount);
 printf("Medium total: %f\n",mediumtotal);
 printf("Large count: %d\n",largecount);
 printf("Large total: %f\n",largetotal);

 if (validcount>0){
    average = total/validcount;
    printf("Average expense: %f\n",average);}
 else{
    printf("no valid expenses entered\n");}

return 0;
}