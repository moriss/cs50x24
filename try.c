//Compare two numbers. Test which is greater.12 345
//Asks someone's name and greet them. 

#include<cs50.h>
#include<stdio.h>
void my();
int main()
{
	my();
}


void my()
{
	int one=get_int("First Number: ");
	int two=get_int("Second Number: ");

	if(one<two)
	{
		printf("%i is greater than %i \n " , two,one);
	}
	else if(one>two)
        {
                printf("%i is greater than %i \n " , one,two);
        }
	else
        {
                printf("%i is the same as %i \n " , two,one);
        }

}
