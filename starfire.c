#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main()
{   
    int max; 
    int min;
    int lvl;

    printf("                                                         STARFIRE - Number guessing game                                                        \n");
    printf("################################################################################################################################################\n");
    do
    { 
        printf("Set your difficulty level (1-low , 2-high , 3-unbeatable , 4-devil , 5-IMPOSSIBLE) : ");
        scanf("%d" , &lvl);
        if (lvl ==1)
    {
        max = 10;
        min = 0; 
    }
    else if (lvl ==2)
    {
        max = 100;
        min = 0;
    }
    else if (lvl ==3)
    {
        max = 1000;
        min = 0;
    }
    else if (lvl ==4)
    {
        max = 10000;
        min = 0;
    }
    else if (lvl ==5)
    {
        max = 10000;
        min = 0;
    }
    } while (lvl!=1 && lvl!=2 && lvl!=3 && lvl!=4 && lvl!=5);
    


    int guess = 0;
    int attempts = 0;
    int tilt = 0;    
    int i =0;
    int tigit =0;
    int yigit =0;
    int uigit =0;
    srand(time(0));
    int num = rand() % (max -min +1) + min;
    
        if (lvl==5)
        {
            do
            {
                    printf("Whats your guess : ");
                    scanf("%d" , &guess);

                                if (i ==1)
                                {
                                    if (num<1000)
                                    {
                                        printf("The number has less than 4 digits\n");
                                        tigit++;
                                    }
                                    else if (num>5000)
                                    {
                                        printf("The number is greater than 5000\n");
                                        yigit++;
                                    }
                                    else
                                    {
                                        printf("The number is between 1000 and 5000\n");
                                        uigit++;
                                    }
                                }
                                    
                                else if (i==2 && tigit ==1)
                                {
                                    if (num<500)
                                    {
                                        printf("The number is less than 500\n");
                                    }
                                    else
                                    {
                                        printf("The number is between 500 and 1000\n");
                                    }
                                    
                                }
                                else if (i==2 && yigit ==1)
                                {
                                    if (num<7500)
                                    {
                                        printf("The number is less than 7500\n");
                                    }
                                    else
                                    {
                                        printf("The number is between 7500 and 10000\n");
                                    }
                                    
                                }
                                else if (i==2 && uigit ==1)
                                {
                                    if (num>2500)
                                    {
                                        printf("The number is greater than 2500\n");
                                    }
                                    else
                                    {
                                        printf("The number is between 2500 and 5000\n");
                                    }
                                    
                                }
                                                                       
                                
                                else if (guess%2 !=0 && num%2==0)
                                {
                                    printf("The number is divisible by 2\n");                                   
                                }
                                else if(guess%5 !=0 && num%5 ==0)
                                {
                                    printf("The number is divisible by 5\n");
                                }
                                else if(num <= 5000)
                                {
                                    printf("The number is in the first half\n");
                                    i++;
                                }
                                else if(num >= 5000)
                                {
                                    printf("The number is in the second half\n");
                                    i++;
                                }
                                
                                tilt++;
                                attempts++;
            }while (tilt <= 3);
            do
            {
                    printf("Whats your guess : ");
                    scanf("%d" , &guess);
                                
                                if (num < guess)
                                {
                                    printf("Lower\n");                                   
                                }
                                else if(num > guess)
                                {
                                    printf("Higher\n");
                                    
                                }
                                else
                                {
                                    printf("Congrats\n");
                                }
                                attempts++;
            }while (guess != num);
        }else{
        

            do
            {
                    printf("Whats your guess : ");
                    scanf("%d" , &guess);
                                
                                if (num < guess)
                                {
                                    printf("Lower\n");                                   
                                }
                                else if(num > guess)
                                {
                                    printf("Higher\n");
                                    
                                }
                                else
                                {
                                    printf("Congrats\n");
                                }
                                attempts++;
            }while (guess != num);
        }

    printf("No of attempts taken : %d" ,attempts);












}
