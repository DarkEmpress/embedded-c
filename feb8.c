# include <stdio.h>
#include <math.h>
//QUESTION 1
/*
int main()
{
    float initial_velocity, initial_height,acc_due_to_gravity,time, displacement;
    printf("enter initial velocity, initial height, acceleration due to gravity, time: ");
    scanf("%f, %f, %f, %f",&initial_velocity, &initial_height, &acc_due_to_gravity, &time);
    displacement=initial_height+initial_velocity*time+1/2+acc_due_to_gravity*pow(time,2);
    printf("%.2f",displacement);

    return 0;
}
*/

//QUESTION 2
/*
int main(){
    int bev;
    printf("enter the code for desired beverage: ");
    scanf("%d",&bev);
    if(bev>0 && bev<5){
        switch (bev)
        {
        case 1:{
            printf("coffee");
            break;
        }
        case 2:{
            printf("tea");
            break;
        }
        case 3:{
            printf("hot chocolate");
            break;
        }
        case 4:{
            printf("lemonade");
            break;
        }
        }
    }
    else{
        printf("enter a valid choice");
    }
    return 0;
}
*/

//QUESTION 3
/*
int main(){
    int t,s;
    printf("enter the number of students: ");
    scanf("%d",&t);
    char name[20];
    //score 0-100 loop
    
    while(t!=0){
        int total=0;
        for(int i=0;i<t;i++){
            printf("enter name: ");
            scanf("%s",&name);
            printf("enter the number of subjects: ");
            scanf("%d",&s);
            int sub=1;
            for(int j=0;j<s;j++){
                int score;
                printf("enter the score in sub %d: ", sub);
                sub++;
                scanf("%d",&score);
                total=total+score;
            }
            int avg=total/s;
            if(avg>60){
                printf("yeyyy you passed\n");
            }
            else{
                printf("shit you failed\n");
            }
            
        }
        printf("enter the next set of students:");
        scanf("%d",&t);
    }
}*/

//You've been tasked with developing a program to analyse data from a temperature sensor array deployed in a research facility. The array is a 2D grid representing temperature readings at different locations within the facility. Your program needs to calculate the sum of all temperature readings and the sum of the temperatures along the diagonal of the grid. 
/*int main(){
    int arr[8][8];
    int i,j;
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            printf("%d \t",arr[i][j]);
        }
        printf("\n");
    }
    int sum=0;
    for (i=0;i<4;i++){
        for(j=0;j<4;j++){
            sum=sum+arr[i][j];
        }
    }
    int diag_sum=0;
    for (i=0;i<4;i++){
        diag_sum=diag_sum+arr[i][i]+arr[i][3-i] ;
    }

    printf("sum= %d\nsum of diagonals=%d",sum,diag_sum);
}*/

//You are tasked with designing a system to monitor patients' vital signs in a hospital. Write a C program to implement this system. Create two functions named temperature and oxygen level, which prompt the user to input the patient's temperature (in degrees Celsius) and oxygen level (in percentage), respectively. Then, in the main function, check to display an alert message stating “critical” if either the temperature exceeds 38.0 degrees Celsius or the oxygen level drops below 90.0%; else, display “normal”. 
/*int temperature(){
    int temp;
    printf("Enter the current temperature in Fahrenheit:\n");
    scanf( "%d" , &temp );  // read input from user
    return temp;
}
int oxygen_level(){
    int oxy;
    printf("Enter the current oxygen level in percentage:\n");
    scanf( "%d" , &oxy );  // read input from user
    return oxy;
}
int main(){
    int temp,oxy;
    temp=temperature();
    oxy=oxygen_level();
    if(temp>38 || oxy<90){
        printf("critical");
    }
    else{
        printf("normal");
    }
}*/
int main(){
    int a=4;
    printf("%lu",sizeof(a));
}