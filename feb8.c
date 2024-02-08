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
}