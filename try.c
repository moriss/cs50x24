//Complete all possible types of loops (A(FOR) B(WHILE) C(DO WILE)) from 1 through to 6.
//Create 3 versions of each code instruction (v1. v2. and v3) BUT DON'T MOVE TO V2 EETC UNTIL YOU ARE VERY COMFORTABLE WITH V1
// v2 and v3 require more sophisticated features such as fault testing etc. check with chat.
//If unsure about last peice of code, repeat attempt 
// Push your work to git at the end


//Type your code here
//3 Calculate users WAGE  including time and a half for hours over 40 3456 v1
//A function With input but no output
//TO BE SOLVED

#include<stdio.h>
#include<cs50.h>
#include<string.h>
void my(int h, int r);
int main()
{
	int hours=get_int("How many hours do you work?");
	int rate = get_int("What is your hourly rate?");
	my(hours, rate);
}

void my(int h, int r)
{
	if (h > 40)
	{
		int overtime = h - 40;
		int pay = (h * r) + (overtime * r * 0.5);//overtime is time and a half.
	}
	else
	{
		int pay = (h * r);
	}
	printf("%i \n " , pay);
}

// 6  Creat an ADD function 6 v1
//  4B COUNTDOWN from n to 0 456  v1
// 4a Create COUNT_UP TO count from 0 to n 456 v1 
//  6 Test if user entered Y_OR_N 6 v1
// 2  COMPARE two numbers. Test which is greater. 23456 v1
// 3 Asks someone's name and GREET them. 345 v1
//  2 Test if user entered the strings YES_OR_NO 23456 v1  
// 4b Create CHAR_COUNTING to print n numbers of a char in a row.456 V1 
// 2b Build a LOOP2 that builds a wall of hashes 4 wide + 4 high 23456 V1
// 5 use SWTICH to categorise the user's number into small,medium or large 56 v1
// 3B Create COUNT_UP TO count from 0 to n 3456 BC v1

//3 Calculate users WAGE  including time and a half for hours over 40 3456 v1

//NEXT LEVELS AND BEYOND!
//Before moving onto next levels, you asked chat to give you more 'baseline' tasks to add
//to level 1 before moving forward.Here they are:
//Factorials
	//Permutations
	//combinations
	//probability
	//arrangements
//So the above fall under Factorials and need looking at first. 
//THEN;
// 4 Test if a number is PRIME or not. 456 V1
//Use a loop to test divisibility up to √n. Adds logic and useful math.

// 5 Use MODULUS to check if number is EVEN or ODD. 456 V1
//This is a classic one-liner that helps reinforce understanding of %.

// 6 Create a function to REVERSE a string. 456 V1
//Great for building comfort with arrays, pointers (optionally), and loops.

// 6 Build a basic PASSWORD CHECKER that checks length and a symbol. 456 V1
//Teaches conditionals, string manipulation, and basic validation.

// 5 Sum the DIGITS of a number. 456 V1
//Input an integer, break it into digits, and add them. Focus on division and loops.

// 3 Create a basic LOGIN function. 3456 V1
//Prompt for username and password, check against fixed values.

 // 4 Create a simple CALCULATOR using switch. 456 V1
//Use user input and switch to perform +, –, *, or /.

// 4 Use scanf to read a line of TEXT into an array. 45 V1
//Helpful if you move beyond get_string() or are practicing lower-level I/O.





//#Short cuts ^ = Control,  M - Alt
