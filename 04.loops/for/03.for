#include<stdio.h>
#include<cs50.h>

void my(int n);

int main()
{
        my(3);//The input from main decides how many meow's.
}

void my(int n) {
        for(int i=0; i<n; i++)
        {
                printf("Meow\n");
        }
}


#####

void my(int n);

int main()
{
        int a=get_int("Enter a number");
        my(a);
}
void my(int n)
{
        for(int i=0; i<n; i++)
        printf("%i \n",i);
}



