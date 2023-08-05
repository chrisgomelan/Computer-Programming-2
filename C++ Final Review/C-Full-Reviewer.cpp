// Computer Programming 2
#include <iostream>
#include <algorithm>
#include <conio.h>
#include <math.h>
#include <map>
#include <iomanip>
#include <string>
#include <cstring>
#include <stack>
#include <vector>
#define SZ 8
using namespace std;

void one(){
    int i;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
    }
    cout << endl;
}

void two(){
    int i,sum=0;
    cout << "\n\n Find the first 10 natural numbers:\n";
    cout << "---------------------------------------\n";
    cout << " The natural numbers are: \n";
    for (i = 1; i <= 10; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of first 10 natural numbers: "<<sum << endl;
}

void three(){
    int n,i,sum=0;
    cout << "\n\n Display n terms of natural number and their sum:\n";
    cout << "---------------------------------------\n";
	cout << " Input a number of terms: ";
	cin>> n;		
    cout << " The natural numbers upto "<<n<<"th terms are: \n";
    for (i = 1; i <= n; i++) 
    {
        cout << i << " ";
		sum=sum+i;
    }
     cout << "\n The sum of the natural numbers is: "<<sum << endl;
}

void four(){
  cout << "\n\n Find the perfect numbers between 1 and 500:\n";
  cout << "------------------------------------------------\n";
  int i = 1, u = 1, sum = 0;
  cout << "\n The perfect numbers between 1 to 500 are: \n";
  while (i <= 500) 
  {
    while (u <= 500) 
    {
      if (u < i) 
      {
        if (i % u == 0)
          sum = sum + u;
      }
      u++;
    }
    if (sum == i) {
      cout << i << "  " << "\n";
    }
    i++;
    u = 1;
    sum = 0;
  }
}

void five(){
    int num1, ctr = 0;
    cout << "\n\n Check whether a number is prime or not:\n";
	cout << "--------------------------------------------\n";
	cout << " Input a number to check prime or not: ";
	cin>> num1;	
    for (int a = 1; a <= num1; a++) 
    {
        if (num1 % a == 0) 
        {
            ctr++;
        }
    }
    if (ctr == 2) 
    {
        cout << " The entered number is a prime number. \n";
    }
    else {
        cout << " The number you entered is not a prime number. \n";
    }
}

void six(){
	int num1,num2;
    int fnd=0,ctr=0;
    cout << "\n\n Find prime number within a range:\n";
	cout << "--------------------------------------\n";
	cout << " Input number for starting range: ";
	cin>> num1;
	cout << " Input number for ending range: ";
	cin>> num2;		

	cout << "\n The prime numbers between "<<num1<<" and "<<num2<<" are:"<<endl;
    for(int i=num1;i<=num2;i++)
       {
           for(int j=2;j<=sqrt(i);j++)
               {
               if(i%j==0)
                  ctr++;
               }
               if(ctr==0&&i!=1)
               { fnd++;
                 cout<<i<<" ";
                 
               }
               ctr=0;
       }
 cout<<"\n\n The total number of prime numbers between "<<num1<<" to "<<num2<<" is: "<<fnd<<endl;
 return 1;
}

void seven(){
    int num1,factorial=1;
    cout << "\n\n Find the factorial of a number:\n";
	cout << "------------------------------------\n";
	cout << " Input a number to find the factorial: ";
	cin>> num1;
    for(int a=1;a<=num1;a++)
    {
        factorial=factorial*a;
    }
	cout<<" The factorial of the given number is: "<<factorial<<endl;
    return 0;
}

void eight(){
    int num1, ctr = 0;
    cout << "\n\n Find the last prime number occurs before the entered number:\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input a number to find the last prime number occurs before the number: ";
    cin >> num1;
    for (int n = num1 - 1; n >= 1; n--) 
    {
        for (int m = 2; m < n; m++) 
        {
            if (n % m == 0)
                ctr++;
        }
        if (ctr == 0) 
        {
            if (n == 1) 
            {
                cout << "no prime number less than 2";
                break;
            }
            cout << n << " is the last prime number before " << num1 << endl;
            break;
        }
        ctr = 0;
    }
    return 0;
}

void nine(){
    int num1, num2, gcd;
    cout << "\n\n Find the Greatest Common Divisor of two numbers:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input the first number: ";
    cin >> num1;
    cout << " Input the second number: ";
    cin >> num2;

    for (int i = 1; i <= num1 && i <= num2; i++) 
    {
        if (num1 % i == 0 && num2 % i == 0) 
        {
            gcd = i;
        }
    }
    cout << " The Greatest Common Divisor is: " << gcd << endl;
    return 0;
}

void ten(){
    int num1, num2, r, sum=0;
    cout << "\n\n Find the sum of digits of a given number:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    while (num1 > 0) 
    {
        r = num1 % 10;
        num1 = num1 / 10;
        sum = sum + r;
    }
    cout << " The sum of digits of " << num2 << " is: " << sum << endl;
}

void eleven(){
    double sum = 0, a;
    int n, i;
    cout << "\n\n Find the sum of the series 1 + 1/2^2 + 1/3^3 +.....+ 1/n^n:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; ++i) 
	{
        a = 1 / pow(i, i);
        cout << "1/" << i << "^" << i << " = " << a << endl;
        sum += a;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

void twelve(){
    int i, n, sum = 0;
    cout << "\n\n Find the sum of the series (1*1) + (2*2) + (3*3) + (4*4) + (5*5) + ... + (n*n):\n";
    cout << "------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
	{
        sum += i * i;
        cout << i << "*" << i << " = " << i * i << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

void thirteen(){
    int i, j, n, sum = 0, tsum;
    cout << "\n\n Find the sum of the series (1) + (1+2) + (1+2+3) + (1+2+3+4) + ... + (1+2+3+4+...+n):\n";
    cout << "------------------------------------------------------------------------------------------\n";
    cout << " Input the value for nth term: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
	{
        tsum = 0;
        for (j = 1; j <= i; j++) 
		{
            sum += j;
            tsum += j;
            cout << j;
            if (j < i) 
			{
                cout << "+";
            }
        }
        cout << " = " << tsum << endl;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

void fourteen(){
    float x, sum, term, fct, y, j, m;
    int i, n;
    y = 2;

    cout << "\n\n Find the sum of the series 1 - X^2/2! + X^4/4!-....:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the value of X: ";
    cin >> x;
    cout << " Input the value for nth term: ";
    cin >> n;
    sum = 1;
    term = 1;
    cout << " term 1 value is: " << term << endl;
    for (i = 1; i < n; i++) 
	{
        fct = 1;
        for (j = 1; j <= y; j++) 
		{
            fct = fct * j;
        }
        term = term * (-1);
        m = pow(x, y) / fct;
        m = m * term;
        cout << " term " << i + 1 << " value is: " << m << endl;
        sum = sum + m;
        y += 2;
    }
    cout << " The sum of the above series is: " << sum << endl;
}

void fifteen(){
    int posnum, ctr, sum, max = 0;
    int min = INT_MAX;
    int terval = -1;
    cout << "\n\n Input a positive integers to calculate some processes or -1 to terminate:\n";
    cout << "----------------------------------------------------------------------------\n";
    cout << " Input positive integer or " << terval << " to terminate: ";
    while (cin >> posnum && posnum != terval) 
    {
        if (posnum > 0) 
        {
            ++ctr;
            sum += posnum;
            if (max < posnum)
                max = posnum;
            if (min > posnum)
                min = posnum;
        }
        else 
        {
            cout << "error: input must be positive! if negative, the value will only be -1! try again..." << endl;
        }
        cout << " Input positive integer or " << terval << " to terminate: ";
    }
    cout << "\n Your input is for termination. Here is the result below: " << endl;
    cout << " Number of positive integers is: " << ctr << endl;
    if (ctr > 0) 
	{
        cout << " The maximum value is: " << max << endl;
        cout << " The minimum value is: " << min << endl;
        cout << fixed << setprecision(2);
        cout << " The average is " << (double)sum / ctr << endl;
    }
}

void sixteen(){
    int ult;
    cout << "\n\n List non-prime numbers from 1 to an upperbound:\n";
    cout << "----------------------------------------------------\n";
    cout << " Input the upperlimit: ";
    cin >> ult;
    cout << " The non-prime numbers are: " << endl;
    for (int num = 2; num <= ult; ++num) 
    {
        int mfactor = (int)sqrt(num);
        for (int fact = 2; fact <= mfactor; ++fact) 
        {
            if (num % fact == 0) 
            {
                cout << num << " ";
                break;
            }
        }
    }
    cout << endl;
    return 0;
}

void seventeen(){
    int size;
    cout << "\n\n Print a pattern like square with # character:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input the number of characters for a side: ";
    cin >> size;
    for (int row = 1; row <= size; ++row) 
    {
        for (int col = 1; col <= size; ++col) 
        {
            cout << "# ";
        }
        cout << endl;
    }
    return 0;
}

void eighteen(){
    int i, ctr, cub;

    cout << "\n\n Display the cube of the numbers upto a given integer:\n";
    cout << "----------------------------------------------------------\n";
    cout << "Input the number of terms : ";
    cin >> ctr;
    for (i = 1; i <= ctr; i++) 
    {
        cub = i * i * i;
        cout << "Number is : " << i << " and the cube of " << i << " is: " << cub << endl;
    }
}

void nineteen(){
    int j, i, n;

    cout << "\n\n Display the multipliaction table vertically from 1 to n:\n";
    cout << "-------------------------------------------------------------\n";
    cout << "Input the number upto 5: ";
    cin >> n;

    cout << "Multiplication table from 1 to " << n << endl;
    for (i = 1; i <= 10; i++) 
    {
        for (j = 1; j <= n; j++) 
        {
            if (j <= n - 1)
                cout << j << "x" << i << "=  " << i * j;
            else
                cout << j << "x" << i << "=  " << i * j;
        }
        cout << endl;
    }
}

void twenty(){
    int i, n, sum = 0;

    cout << "\n\n Display n terms of odd natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << " The odd numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i - 1 << " ";
        sum += 2 * i - 1;
    }
    cout << "\n The Sum of odd Natural Numbers upto " << n << " terms"; 

" << sum << endl";
}
	
void First20(){	
	system("cls");
    int choice;

for (int v = 1; v > 0; v++){
		  system("cls");		  
          cout << "\033[1;57H  Main Menu";
          cout << "\033[2;50H  Part I of Array Problems";
          cout << "\033[3;13H =========================================================================================================";
          cout << "\033[4;15H 1  - Write a program in C++ to find the first 10 natural numbers.";
          cout << "\033[5;15H 2  - Write a program in C++ to find the sum first 10 natural numbers.";
          cout << "\033[6;15H 3  - Write a program in C++ to display n terms of natural numbers and their sum.";
          cout << "\033[7;15H 4  - Write a program in C++ to find the perfect numbers between 1 and 500.";
          cout << "\033[8;15H 5  - Write a program in C++ to check whether a number is prime or not.";
          cout << "\033[9;15H 6  - Write a program in C++ to find a prime number within a range.";
          cout << "\033[10;15H 7  - Write a program in C++ to find the factorial of a number.";
          cout << "\033[11;15H 8  - Write a program in C++ to find the factorial of a number.";
          cout << "\033[12;15H 9  - Write a program in C++ to find the factorial of a number.";
          cout << "\033[13;15H 10 - Write a program in C++ to find the sum of the digits of a given number";
          cout << "\033[14;15H 11 - Write a program in C++ to find the sum of the series 1 + 1/2^2 + 1/3^3 + ..+ 1/n^n.";
          cout << "\033[15;15H 12 - Write a program in C++ to calculate the sum of the series(1*1)+(2*2)+(3*3)+(4*4)+(5*5)+...+(n*n).";
          cout << "\033[16;15H 13 - Write a program in C++ to calculate the series (1)+(1+2)+(1+2+3)+(1+2+3+4)+...+(1+2+3+4+...+n).";
          cout << "\033[17;15H 14 - Write a program in C++ to find the sum of series 1 - X^2/2! + X^4/4!-.... upto nth term.";
          cout << "\033[18;15H 15 - Asks the user to enter pos int in order to process count,max,min,& ave or terminate process with -1";
          cout << "\033[19;15H 16 - Write a programm in C++ to list non-prime numbers from 1 to an upperbound.";
          cout << "\033[20;15H 17 - Write a program in C++ to print a square pattern with the # character."; 
		  cout << "\033[21;15H 18 - Write a program in C++ to display the cube of the number up to an integer.";
		  cout << "\033[22;15H 19 - Write a program in C++ to display the multiplication table vertically from 1 to n.";
		  cout << "\033[23;15H 20 - Write a programm in C++ that displays the sum of n odd natural numbers.";           
          cout << "\033[24;15H 21 - Exit ";

        cout << "\033[26;60H Enter your choice: ";
        cin >> choice;
           
   system("cls");       
   switch(choice){
    	case 1:one();getch();break;
    	case 2:two();getch();break;
    	case 3:three();getch();break;
    	case 4:four();getch();break;
		case 5:five();getch();break;
		case 6:six();getch();break;
		case 7:seven();getch();break;
		case 8:eight();getch();break;
		case 9:nine();getch();break;
		case 10:ten();getch();break;
		case 11:eleven();getch();break;	
		case 12:twelve();getch();break;
		case 13:thirteen();getch();break;
		case 14:fourteen();getch();break;
		case 15:fifteen();getch();break;
		case 16:sixteen();getch();break;
		case 17:seventeen();getch();break;
		case 18:eighteen();getch();break;
		case 19:nineteen();getch();break;
		case 20:twenty();getch();break;		
    	//Last case
    	case 21:return;
		
		default: cout << "\033[4;50H Please select other options!";getch();	break;	 
    	}
	}			
}

void twenty1(){
    int i, n, sum = 0;

    cout << "\n\n Display n terms of even natural number and their sum:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    cout << "\n The even numbers are: ";
    for (i = 1; i <= n; i++) 
    {
        cout << 2 * i << " ";
        sum += 2 * i ;
    }
    cout << "\n The Sum of even Natural Numbers upto " << n << " terms: " << sum << endl;
}

void twenty2(){
    int i, n;
    float s = 0.0;
    cout << "\n\n Display n terms of harmonic series and their sum:\n";
    cout << " The harmonic series: 1 + 1/2 + 1/3 + 1/4 + 1/5 ... 1/n terms\n";
    cout << "-----------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        if (i < n) 
        {
            cout << "1/" << i << " + ";
            s += 1 / (float)i;
        }
        if (i == n) 
        {
            cout << "1/" << i;
            s += 1 / (float)i;
        }
    }
    cout << "\n The sum of the series upto " << n << " terms: " << s << 

endl;
}

void twenty3(){
    long int n, i, t = 9;
    int sum = 0;
    cout << "\n\n Display the sum of the series [ 9 + 99 + 999 + 9999 ...]\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;

    for (i = 1; i <= n; i++) 
    {
        sum += t;
        cout << t << "  ";
        t = t * 10 + 9;
    }
    cout << "\n The sum of the sarise = " << sum << endl;
}

void twenty4(){
    float x, sum, no_row;
    int i, n;
    cout << "\n\n Display the sum of the series [ 1+x+x^2/2!+x^3/3!+....]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = 1;
    no_row = 1;
    for (i = 1; i < n; i++) 
    {
        no_row = no_row * x / (float)i;
        sum = sum + no_row;
    }
    cout << " The sum  is : " << sum << endl;
}

void twenty5(){
    float x, sum, ctr;
    int i, n, m, mm, nn = 0;
    cout << "\n\n Display the sum of the series [ x - x^3 + x^5 + ......]\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input the value of x: ";
    cin >> x;
    cout << " Input number of terms: ";
    cin >> n;
    sum = x;
    m = -1;
    cout << "The values of series:" << endl;
    cout << sum << endl;
    for (i = 1; i < n; i++) {
        ctr = (2 * i + 1);
        mm = pow(x, ctr);
        nn = mm * m;
        cout << nn << endl;
        sum = sum + nn;
        m = m * (-1);
    }
    cout << "\n The sum of the series upto " << n << " term is: " << sum << endl;
}

void twenty6(){
    int n, i, sum = 0;
    int t = 1;
    cout << "\n\n Display the sum of the series 1 +11 + 111 + 1111 + .. n terms:\n";
    cout << "-------------------------------------------------------------------\n";
    cout << " Input number of terms: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        cout << t << " ";
        if (i < n) 
        {
            cout << "+ ";
        }
        sum = sum + t;
        t = (t * 10) + 1;
    }
    cout << "\n The sum of the series is: " << sum << endl;
}

void twenty7(){
    int prv = 0, pre = 1, trm, i, n;
    cout << "\n\n Display the first n terms of Fibonacci series:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input number of terms to  display: ";
    cin >> n;
    cout << " Here is the Fibonacci series upto  to " << n << " terms: "<<endl;
    cout << prv << " " << pre;
    for (i = 3; i <= n; i++) 
    {
        trm = prv + pre;
        cout << " " << trm;
        prv = pre;
        pre = trm;
    }
    cout << endl;
}

void twenty8(){
    int i, sum = 0;
    cout << "\n\n Find the number and sum of all integer between 100 and 200, divisible by 9:\n";
    cout << "--------------------------------------------------------------------------------\n";
    cout << " Numbers between 100 and 200, divisible by 9: " << endl;
    for (i = 101; i < 200; i++) 
    {
        if (i % 9 == 0) 
        {
            cout << " " << i;
            sum += i;
        }
    }
    cout << "\n The sum : " << sum << endl;
}

void twenty9(){
    int i, n1, n2, j, hcf = 1, lcm;
    cout << "\n\n LCM of two numbers:\n";
    cout << "------------------------\n";
    cout << " Input 1st number for LCM: ";
    cin >> n1;
    cout << " Input 2nd number for LCM: ";
    cin >> n2;
    j = (n1 < n2) ? n1 : n2;
    for (i = 1; i <= j; i++) {

        if (n1 % i == 0 && n2 % i == 0) {
            hcf = i;
        }
    }
    /* mltiplication of HCF and LCM = the multiplication of these two numbers.*/
    lcm = (n1 * n2) / hcf;
    cout << " The LCM of " << n1 << " and " << n2 << " is: " << lcm << endl;
}

void thirty(){
    int num, r, sum = 0, t;
    cout << "\n\n Display the number in reverse order:\n";
    cout << "-----------------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    for (t = num; num != 0; num = num / 10) 
    {
        r = num % 10;
        sum = sum * 10 + r;
    }
    cout << " The number in reverse order is : " << sum << endl;
}

void thirty1(){
    int n1, df, n2, i, ln;
    int s1 = 0;
    cout << "\n\n Find out the sum of A.P. series:\n";
    cout << "-----------------------------------------\n";
    cout << " Input  the starting number of the A.P. series: ";
    cin >> n1;
    cout << " Input the number of items for  the A.P. series: ";
    cin >> n2;
    cout << " Input  the common difference of A.P. series: ";
    cin >> df;
    s1 = (n2 * (2 * n1 + (n2 - 1) * df)) / 2;
    ln = n1 + (n2 - 1) * df;
    cout << " The Sum of the  A.P. series are : " << endl;
    for (i = n1; i <= ln; i = i + df) 
    {
        if (i != ln)
            cout << i << " + ";
        else
            cout << i << " = " << s1 << endl;
    }
}

void thirty2(){
    float g1,cr,i,n,j;
    int ntrm,gpn;
    float sum=0;
    cout << "\n\n Find the Sum of GP series:\n";
    cout << "-------------------------------\n";
    cout << " Input  the starting number of the G.P. series: ";
    cin >> g1;
    cout << " Input the number of items for  the G.P. series: ";
    cin >> ntrm;
    cout << " Input the common ratio of G.P. series: ";
    cin >> cr;
/*-------- generate G.P. series ---------------*/
     cout<<"\nThe numbers for the G.P. series:\n ";
     cout<<g1<<"  ";
     sum=g1;
     for(j=1;j<ntrm;j++)
       {
        gpn=g1*pow(cr,j);
        sum=sum+gpn;
        cout<<gpn<<"  ";
       }  
/*-------- End of G.P. series generate ---------------*/
    cout<<"\n The Sum of the G.P. series:  "<<sum<<endl;	
}

void thirty3(){
    int n, i, flg1 = 1, flg2 = 1, flg3 = 0, j;
    float sum = 0;
    cout << "\n\n Check Whether a Number can be Express as Sum of Two Prime Numbers:\n";
    cout << "------------------------------------------------------------------------\n";
    cout << " Input  a positive integer: ";
    cin >> n;
    for (i = 2; i <= n / 2; i++) 
    {
        /*---------- check for prime---------------*/
        flg1 = 1;
        flg2 = 1;
        for (j = 2; j < i; j++) 
        {
            if (i % j == 0) 
            {
                flg1 = 0;
                j = i;
            }
        }
        for (j = 2; j < n - i; j++) 
        {
            if ((n - i) % j == 0) 
            {
                flg2 = 0;
                j = n - i;
            }
        }
        if (flg1 == 1 && flg2 == 1) 
        {
            cout << n << " = " << i << " + " << n - i << endl;
            flg3 = 1;
        }
    }
    if (flg3 == 0) 
    {
        cout << n << " can not be expressed as sum of two prime numbers." << endl;
    }
}

void thirty4(){
    char str1[50];
    int i, l = 0;
    cout << "\n\n Find the length of a string:\n";
    cout << "---------------------------------\n";
    cout << " Input a string: ";
    cin >> str1;
    for (i = 0; str1[i] != '\0'; i++) {
        l++;
    }
    cout << "The string contains " << l << " number of characters." << endl;
    cout << "So, the length of the string " << str1 << " is:" << l << endl;
}

void thirty5(){
   int i,j,rows;
    cout << "\n\n display the pattern like right angle triangle using an asterisk:\n";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<"*";
	cout<<endl;
   }	
}

void thirty6(){
   int i,j,rows;
    cout << "\n\n Display the pattern using number starting from 1:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<j;
	cout<<endl;
   }	
}

void thirty7(){
   int i,j,rows;
    cout << "\n\n Display the pattern using number repeating for a row:\n";
    cout << "----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<i;
	cout<<endl;
   }	
}

void thirty8(){
   int i,j,rows,k=1;
    cout << "\n\n Display such a pattern like right angle triangle with number increased by 1:\n";
    cout << "---------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   for(i=1;i<=rows;i++)
   {
	for(j=1;j<=i;j++)
	   cout<<k++<<" ";
	cout<<endl;
   }	
}

void thirty9(){
   int i,j,spc,rows,k,t=1;
    cout << "\n\n Display such a pattern like a pyramid with numbers increased by 1:\n";
    cout << "-----------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<t++<<" ";
	cout<<endl;
    spc--;
   }
}

void forty(){
   int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid with an asterisk:\n";
    cout << "------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<"*"<<" ";
	cout<<endl;
    spc--;
   }
}

void Second20(){	
	system("cls");
    int choice;

for (int v = 1; v > 0; v++){
          system("cls");		  
          cout << "\033[1;58H  Main Menu";
          cout << "\033[2;50H  Part II of Array Problems";
          cout << "\033[3;13H =========================================================================================================";
          cout << "\033[4;15H 21  - Write a C++ program that displays the sum of the n terms of even natural numbers";
          cout << "\033[5;15H 22  - Write a program in C++ to display the n terms of a harmonic series and their sum.";
          cout << "\033[6;15H 23  - Write a program in C++ to display the sum of the series [ 9 + 99 + 999 + 9999 ...].";
          cout << "\033[7;15H 24  - Write a program in C++ to display the sum of the series [ 1+x+x^2/2!+x^3/3!+....].";
          cout << "\033[8;15H 25  - Write a program in C++ to find the sum of the series [ x - x^3 + x^5 + ......].";
          cout << "\033[9;15H 26  - Write a program in C++ to find the sum of the series 1 +11 + 111 + 1111 + .. n terms.";
          cout << "\033[10;15H 27  - Write a program in C++ to display the first n terms of the Fibonacci series.";
          cout << "\033[11;15H 28  - C++ program to find the number and sum of all integers between 100 & 200 which divisible by 9.";
          cout << "\033[12;15H 29  - Write a program in C++ to find the LCM of any two numbers using HCF.";
          cout << "\033[13;15H 30 - Write a program in C++ to display the numbers in reverse order.";
          cout << "\033[14;15H 31 -  Write a C++ program to find the sum of an A.P. series.";
          cout << "\033[15;15H 32 - Write a C++ program to find the sum of the GP series.";
          cout << "\033[16;15H 33 - Write a program in C++ to check whether a number can be expressed as the sum of two.";
          cout << "\033[17;15H 34 - Write a program in C++ to find the length of a string without using the library function.";
          cout << "\033[18;15H 35 - Write a program in C++ to display a pattern like a right angle triangle using an asterisk.";
          cout << "\033[19;15H 36 - Write a program in C++ to display the pattern like right angle triangle with number.";
          cout << "\033[20;15H 37 - Write a C++ program that makes a pattern such as a right angle triangle using numbers that repeat."; 
		  cout << "\033[21;15H 38 - C++ program to make such a pattern like a right angle triangle with the number increased by 1.";
		  cout << "\033[22;15H 39 - Write a C++ program to make such a pattern like a pyramid with numbers increased by 1.";
		  cout << "\033[23;15H 40 - Write a C++ program to make such a pattern like a pyramid with an asterisk.";           
          cout << "\033[24;15H 41 - Exit ";

        cout << "\033[26;55H Enter your choice: ";
        cin >> choice;
           
   system("cls");       
   switch(choice){
    	case 21:twenty1();getch();break;
    	case 22:twenty2();getch();break;
    	case 23:twenty3();getch();break;
    	case 24:twenty4();getch();break;
		case 25:twenty5();getch();break;
		case 26:twenty6();getch();break;
		case 27:twenty7();getch();break;
		case 28:twenty8();getch();break;
		case 29:twenty9();getch();break;
		case 30:thirty();getch();break;
		case 31:thirty1();getch();break;	
		case 32:thirty2();getch();break;
		case 33:thirty3();getch();break;
		case 34:thirty4();getch();break;
		case 35:thirty5();getch();break;
		case 36:thirty6();getch();break;
		case 37:thirty7();getch();break;
		case 38:thirty8();getch();break;
		case 39:thirty9();getch();break;
		case 40:forty();getch();break;		
    	//Last case
    	case 41:return;
		
		default: cout << "\033[4;50H Please select other options!";getch();	break;	 
    	}
	}			
}

void forty1(){
   int i,j,spc,rows,k;
    cout << "\n\n Display such a pattern like a pyramid using number with repetition :\n";
    cout << "-------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
   spc=rows+4-1;
   for(i=1;i<=rows;i++)
   {
         for(k=spc;k>=1;k--)
            {
              cout<<" ";
            }
	   for(j=1;j<=i;j++)
	   cout<<i<<" ";
	cout<<endl;
    spc--;
   }
}

void forty2(){
   int i,j,n;
    cout << "\n\n Display such a pattern like a pyramid containing odd number of asterisk in each row:\n";
    cout << "-----------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
  for(i=0;i<n;i++)
   {
     for(j=1;j<=n-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
}

void forty3(){
   int i,j,n,p,q;
    cout << "\n\n Print the Floyd's Triangle:\n";
    cout << "--------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
   for(i=1;i<=n;i++)
   {
     if(i%2==0)
     { 
	 p=1;q=0;
	 }
     else
     { 
	 p=0;q=1;
	 }
      for(j=1;j<=i;j++)
	 if(j%2==0)
	    cout<<p;
	 else
	    cout<<q;
     cout<<endl;
   }
}

void forty4(){
   int i,j,r;
    cout << "\n\n Display the pattern like a diamond:\n";
    cout << "----------------------------------------\n";
    cout << " Input number of rows (half of the diamond): ";
    cin >> r;
   for(i=0;i<=r;i++)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;
   }
   for(i=r-1;i>=1;i--)
   {
     for(j=1;j<=r-i;j++)
     cout<<" ";
     for(j=1;j<=2*i-1;j++)
       cout<<"*";
     cout<<endl;;
   }
}

void forty5(){
    int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle:\n";
    cout << "-----------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(blk=1;blk<=row-i;blk++)
        cout<<"  ";
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
}

void forty6(){
int row,c=1,blk,i,j;
    cout << "\n\n Display the Pascal's triangle lime right angle triangle:\n";
    cout << "-------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> row;
    for(i=0;i<row;i++)
    {
        for(j=0;j<=i;j++)
        {
            if (j==0||i==0)
                c=1;
            else
               c=c*(i-j+1)/j;
            cout<<c<<"   ";
        }
        cout<<endl;
    }
} 

void forty7(){
   int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the first and last number of each row is 1:\n";
    cout << "-----------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=0;i<=n;i++)
   {
     /* print blank spaces */
     for(j=1;j<=n-i;j++)
	cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
} 

void forty8(){
    int i, j;
    char alph = 'A';
    int n, blk;
    int ctr = 1;
    cout << "\n\n Display the pattern like pyramid using the alphabet:\n";
    cout << "---------------------------------------------------------\n";
    cout << " Input the number of Letters (less than 26) in the Pyramid: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        for (blk = 1; blk <= n - i; blk++)
            cout << "  ";
        for (j = 0; j <= (ctr / 2); j++) 
        {
            cout << alph++ << " ";
        }
        alph = alph - 2;
        for (j = 0; j < (ctr / 2); j++) 
        {
            cout << alph-- << " ";
        }
        ctr = ctr + 2;
        alph = 'A';
        cout << endl;
    }
}

void forty9(){
    int i, j, spc, n;
    cout << "\n\n Display the pattern like pyramid using digits:\n";
    cout << "---------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) 
    {
        spc = n - i;
        while (spc-- > 0)
            cout << " ";
        for (j = i; j < 2 * i - 1; j++)
            cout << j;
        for (j = 2 * i - 1; j > i - 1; j--)
            cout << j;
        cout << endl;
    }
}

void fifty(){
    int i, j, n;
    cout << "\n\n Display the pattern like highest numbers of columns appear in first row:\n";
    cout << "------------------------------------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    for (i = 1; i <= n;) 
    {
        cout << i;
        for (j = i + 1; j <= n;) 
        {
            cout << j;
            j = j + 1;
        }
        cout << endl;
        i = i + 1;
    }
}

void fifty1(){
    int i, j, rows;
    cout << "\n\n Display the pattern using digits with right justified:\n";
    cout << "-----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = rows; i >= 1; i--) 
    {
        for (j = 1; j <= rows - i; j++)
            cout << " ";
        for (j = 1; j <= i; j++)
            cout << j;
        cout << endl;
    }
}

void fifty2(){
    int i, j, rows, d;
    cout << "\n\n Display the pattern using digits with left justified:\n";
    cout << "----------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    d = 0;
    for (i = 1; i <= rows; i++) 
	{
        for (j = rows - d; j >= 1; j--) 
		{
            cout << j << " ";
        }
        d++;
        cout << endl;
    }
}

void fifty3(){
    int i, j, rows, d;
    cout << "\n\n Display the pattern like right angle triangle with right justified using digits:\n";
    cout << "-------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows - i; j++) 
        {
            cout << " ";
        }
        d = i;
        for (j = 1; j <= i; j++) 
        {
            cout << d;
            d--;
        }
        cout << endl;
    }
}

void fifty4(){
    int i, j, spc, n, mm, d = 1, k;
    cout << "------------------------------------------------------\n";
    cout << " Input the number of rows: ";
    cin >> n;
    //----------- space for first line ----------------------
    for (i = 1; i <= n * 2 + 2 + 5; i++) //extra 5 spaces is the margin from left
        cout << " ";
    cout << pow(2, 0) << endl;
    for (i = 1; i < n; i++) 
    {
        //----------- printing spaces from 2nd line to end -------
        for (k = 1; k <= n * 2 - d + 5; k++) 
        {
            cout << " ";
        }
        //----------- print upto middle ----------------
        for (j = 0; j < i; j++) 
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        //------------- print after middle to end -------
        for (j = i; j >= 0; j--) 
        {
            mm = pow(2, j);
            cout << mm << "  "; //print 2 spaces
        }
        d = d + 3;
        cout << endl;
    }
}

void fifty5(){
   int i,j,n;
    cout << "\n\n Display a pattern using odd number of numbers, the n numbers of columns will appear in 1st row:\n";
    cout << "----------------------------------------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> n;
    for(i=n;i>=1;i--)
   {
     /* print blank spaces */
     for(j=1;j<=n+5-i;j++)
	cout<<" ";
     /* Display number in ascending order upto middle*/
     for(j=1;j<=i;j++)
       cout<<j;
 
     /* Display  number in reverse order after middle */
       for(j=i-1;j>=1;j--)
	  cout<<j;
     cout<<endl;
   }
}

void fifty6(){
   int n,first,last;
    cout << "\n\n Find the first and last digit of a number:\n";
    cout << "-----------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
}

void fifty7(){
   int n,first,last,sum;
    cout << "\n\n Find the sum of first and last digit of a number:\n";
    cout << "------------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    first = n;
	last=n % 10;
	for(first=n;first>=10;first=first/10);
    cout<<" The first digit of "<<n<<" is: "<<first<<endl;
    cout<<" The last digit of "<<n<<" is: "<<last<<endl;
	cout<<" The sum of first and last digit of "<<n<<" is: "<<first+last<<endl;
}

void fifty8(){
    int num1, num2, r, pro=1,i;
    cout << "\n\n Find the product of digits of a given number:\n";
    cout << "--------------------------------------------------\n";
    cout << " Input a number: ";
    cin >> num1;
    num2 = num1;
    for(i=num1;i>0;i=i/10)
    {
        r = i % 10;
        pro = pro*r;
    }
    cout << " The product of digits of " << num2 << " is: " << pro << endl;
}

void fifty9(){
    int n, i, j, ctr, r;
    cout << "\n\n Find frequency of each digit in a given integer:\n";
    cout << "-----------------------------------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    for (i = 0; i < 10; i++) 
    {
        cout << "The frequency of " << i << " = ";
        ctr = 0;
        for (j = n; j > 0; j = j / 10) 
        {
            r = j % 10;
            if (r == i) 
            {
                ctr++;
            }
        }
        cout << ctr << endl;
    }
}

void sixty(){
    int n, num = 0, i;
    cout << "\n\n Print a number in words:\n";
    cout << "-----------------------------\n";
    cout << " Input any number: ";
    cin >> n;
    while (n != 0) {
        num = (num * 10) + (n % 10);
        n /= 10;
    }
    for (i = num; i > 0; i = i / 10) {

        switch (i % 10) {
        case 0:
            cout << "Zero ";
            break;
        case 1:
            cout << "One ";
            break;
        case 2:
            cout << "Two ";
            break;
        case 3:
            cout << "Three ";
            break;
        case 4:
            cout << "Four ";
            break;
        case 5:
            cout << "Five ";
            break;
        case 6:
            cout << "Six ";
            break;
        case 7:
            cout << "Seven ";
            break;
        case 8:
            cout << "Eight ";
            break;
        case 9:
            cout << "Nine ";
            break;
        }
    }
    cout << endl;
}

void Third20(){	
	system("cls");
    int choice;

for (int v = 1; v > 0; v++){
          system("cls");		  
          cout << "\033[1;58H  Main Menu";
          cout << "\033[2;50H  Part III of Array Problems";
          cout << "\033[3;13H =========================================================================================================";
          cout << "\033[4;15H 41 - Make such a pattern, like a pyramid, with a repeating number.";
          cout << "\033[5;15H 42 - Displays the pattern like a pyramid using asterisks, with odd numbers in each row.";
          cout << "\033[6;15H 43 - Print Floyd's Triangle.";
          cout << "\033[7;15H 44 - Display a pattern like a diamond.";
          cout << "\033[8;15H 45 - Display Pascal's triangle like a pyramid.";
          cout << "\033[9;15H 46 - Display Pascal's triangle like a right angle triangle.";
          cout << "\033[10;15H 47 - Displays such a pattern for n number of rows using numbers. Odd numbers will appear in each row.";
          cout << "\033[11;15H      The first and last number of each row will be 1 and the middle column will be the row number.";
          cout << "\033[12;15H 48 - Display the pyramid pattern using the alphabet.";
          cout << "\033[13;15H 49 - Print a pyramid of digits as shown below for n number of lines";
          cout << "\033[14;15H 50 - Print a pattern in which the highest number of columns appears in the first row.";
          cout << "\033[15;15H 51 - Displays the pattern w/ the highest columns in the first row & digits w/ the right justified digits.";
          cout << "\033[16;15H 52 - Dsp the patern usng dgits w/ left justfied spcing & hghest colmns apearing in frst row in descd ordr";
          cout << "\033[17;15H 53 - Display the pattern like right angle triangle with right justified digits.";
          cout << "\033[18;15H 54 - Display the pattern like pyramid, power of 2.";
          cout << "\033[19;15H 55 - Display such a pattern for n number of rows using numbers. There will be odd numbers in each row.";
          cout << "\033[20;15H      The first and last number of each row will be 1 & the middle column will be the row number.";
          cout << "\033[21;15H      N numbers of columns will appear in the 1st row.";
          cout << "\033[22;15H 56 - Find the first and last digits of a number.";
          cout << "\033[23;15H 57 - Find the sum of the first and last digits of a number."; 
		  cout << "\033[24;15H 58 - Calculate the product of the digits of any number.";
		  cout << "\033[25;15H 59 - Find the frequency of each digit in a given integer.";
		  cout << "\033[26;15H 60 - Input any number and print it in words.";           
          cout << "\033[27;15H 61 - Exit ";

        cout << "\033[29;55H Enter your choice: ";
        cin >> choice;
           
   system("cls");       
   switch(choice){
    	case 41:forty1();getch();break;
    	case 42:forty2();getch();break;
    	case 43:forty3();getch();break;
    	case 44:forty4();getch();break;
		case 45:forty5();getch();break;
		case 46:forty6();getch();break;
		case 47:forty7();getch();break;
		case 48:forty8();getch();break;
		case 49:forty9();getch();break;
		case 50:fifty();getch();break;
		case 51:fifty1();getch();break;	
		case 52:fifty2();getch();break;
		case 53:fifty3();getch();break;
		case 54:fifty4();getch();break;
		case 55:fifty5();getch();break;
		case 56:fifty6();getch();break;
		case 57:fifty7();getch();break;
		case 58:fifty8();getch();break;
		case 59:fifty9();getch();break;
		case 60:sixty();getch();break;		
    	case 61:return;		
		default: cout << "\033[4;50H Please select other options!";getch();	break;	 
    	}
	}			
}

void sixty1(){
    int sn, en, i, j, ctr, r;
    cout << "\n\n Print ASCII character with their values:\n";
    cout << "-------------------------------------------------\n";
    cout << " Input the starting value for ASCII characters: ";
    cin >> sn;
    cout << " Input the ending value for ASCII characters: ";
    cin >> en;	
	if (sn>255 || sn<0)
	sn=1;
	if(en<0 || en>255)
	en=255;
	cout << "The ASCII characters:"<<endl ;
    for (i = sn; i <=en; i++) 
    {
        cout << i<<" --> "<<char(i)<<endl;
    }
}

void sixty2(){
    int bs, ex, num=1,i;
    cout << "\n\n Find power of any number using for loop:\n";
    cout << "---------------------------------------------\n";
    cout << " Input the base: ";
    cin >> bs;
    cout << " Input the exponent: ";
	cin>>ex;
	
    for (i = 1; i <=ex; i++) 
    {
       num=num*bs;
    }
	cout <<bs<<" ^ "<<ex<<" = "<<num<<endl ;
}

void sixty3(){
    int num, i;
    cout << "\n\n Print all factors of a number:\n";
    cout << "-----------------------------------\n";
    cout << " Input a number: ";
    cin >> num;
    cout << "The factors are: ";
    for (i = 1; i <= num; i++) 
    {
        if (num % i == 0) 
        {
            cout << i << " ";
        }
    }
    cout << endl;
}

void sixty4(){
	
    int i;
    char binary[SZ + 1], onesComp[SZ + 1];
    int error = 0;
    cout << "\n\n Find one's complement of a binary value:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> binary;
    for (i = 0; i < SZ; i++) 
    {
        if (binary[i] == '1') 
        {
            onesComp[i] = '0';
        }
        else if (binary[i] == '0') 
        {
            onesComp[i] = '1';
        }
        else 
		{
            cout << "Invalid Input. Input the value of assign bits." << endl;
            error = 1;
            break;
        }
    }
    onesComp[SZ] = '\0';
    if (error == 0) 
    {
        cout << " The original binary = " << binary << endl;
        cout << " After ones complement the number = " << onesComp << endl;
    }
}

void sixty5(){
    char bn[SZ + 1], onComp[SZ + 1], twComp[SZ + 1];
    int i, carr = 1;
    int er = 0;
    cout << "\n\n Find two's complement of a binary value:\n";
    cout << "----------------------------------------------\n";
    cout << " Input a " << SZ << " bit binary value: ";
    cin >> bn;
    for (i = 0; i < SZ; i++) 
    {
        if (bn[i] == '1') 
        {
            onComp[i] = '0';
        }
        else if (bn[i] == '0') 
        {
            onComp[i] = '1';
        }
        else 
        {
            cout << "Invalid Input. Input the value of assign bits." << endl;
            er = 1;
            break;
        }
    }
    onComp[SZ] = '\0';

    for (i = SZ - 1; i >= 0; i--) 
    {
        if (onComp[i] == '1' && carr == 1) 
        {
            twComp[i] = '0';
        }
        else if (onComp[i] == '0' && carr == 1) 
        {
            twComp[i] = '1';
            carr = 0;
        }
        else 
        {
            twComp[i] = onComp[i];
        }
    }
    twComp[SZ] = '\0';
    if (er == 0) 
    {
        cout << " The original binary = " << bn << endl;
        cout << " After ones complement the value = " << onComp << endl;
        cout << " After twos complement the value = " << twComp << endl;
    }
}

void sixty6(){
    int i, j, rows;
    string b, w, t;
    b = "black";
    w = "white";
    cout << "\n\n Display checkerboard pattern with the words 'black' and 'white':\n";
    cout << "---------------------------------------------------------------------\n";
    cout << " Input number of rows: ";
    cin >> rows;
    for (i = 1; i <= rows; i++) 
    {
        for (j = 1; j <= rows; j++) 
        {
            if (j % 2 != 0) 
            {
                cout << b;
                if (j < rows) 
                {
                    cout << "-";
                }
            }
            else if (j % 2 == 0) 
            {
                cout << w;
                if (j < rows) 
                {
                    cout << "-";
                }
            }
        }
        t = b;
        b = w;
        w = t;
        cout << endl;
    }
}

void sixty7(){
    int trm;
    double num, sum, i, m;
    cout << "\n\n calculate the sum of the series 1.2+2.3+3.4+4.5+5.6+......:\n";
    cout << "----------------------------------------------------------------\n";
    cout << " Input the last integer between 1 to 98 without fraction you want to add: ";
    cin >> trm;
    for (i = 1; i <= trm; i++) 
    {
        if (i < 9) 
        {
            m = .1;
        }
        else 
        {
            m = .01;
        }
        num = i + ((i + 1) * (m));
        sum = sum + num;
        cout << num;
        if (i < trm) 
        {
            cout << " + ";
        }
    }
    cout << "\n The sum of the series =" << sum << endl;
}

void sixty8(){
    int trm, bs, r, q, i, num;
    cout << "\n\n Print the first N numbers for a specific base:\n";
    cout << " The number 11 in base 10 = 1*(10^1)+1*(10^0)=11" << endl;
    cout << " Similarly the number 11 in base 7 = 1*(7^1)+1*(7^0)=8" << endl;
    cout << "----------------------------------------------------------------\n";
    cout << " Input the number of term: ";
    cin >> trm;
    cout << " Input the base: ";
    cin >> bs;
    cout << " The numbers in base " << bs << " are: " << endl;
    for (i = 1; i <= trm; i++) 
    {
        r = i % bs;
        q = i / bs;
        num = q * 10 + r;
        cout << num << "  ";
    }
    cout << endl;
}

void sixty9(){
    int n, i, j, k, m = 0;
    cout << "\n\n Print patern........:\n";
    cout << "-----------------------------------\n";
    cout << " Input number or rows: ";
    cin >> n;
    for (i = 1; i <= n; i++) {
        if (i == 1) {
            for (j = 1; j <= i; j++) {
                cout << m << "  ";
            }
            for (k = 1; k <= n - i; k++) {
                cout << k << "  ";
            }
        }
        else {
            for (k = i - 1; k >= 1; k--) {
                cout << k << "  ";
            }
            cout << m << "  ";
            for (j = 1; j <= n - i; j++) {
                cout << j << "  ";
            }
        }
        cout << endl;
    }
    cout << endl;
}

void seventy(){
        int dec_num, rem, quot, i=1, j;
        int bin_num[100];

		cout << "\n\n Convert a decimal number to binary number:\n";
	cout << "---------------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
        quot = dec_num;
        while(quot != 0)
        {
            bin_num[i++] = quot%2;
            quot = quot/2;
        }
        cout<<" The binary number is: ";
        for(j=i-1; j>0; j--)
        {
            cout<<bin_num[j];
        }
   cout<<("\n");  
 }  

void seventy1(){
    int dec_num, r;
    string hexdec_num="";
    char hex[]={'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	cout << "\n\n Convert a decimal number to hexadecimal number:\n";
	cout << "---------------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
		
        while(dec_num>0)
        {
            r = dec_num % 16;
            hexdec_num = hex[r] + hexdec_num;
            dec_num = dec_num/16;
        }
        cout<<" The hexadecimal number is : "<<hexdec_num<<"\n"; 
	}

void seventy2(){
    int dec_num, rem, quot, i=1, j;
    int oct_num[100];
	cout << "\n\n Convert a  decimal number to octal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a decimal number: ";
	cin>> dec_num;
        quot = dec_num;
        while(quot != 0)
        {
            oct_num[i++] = quot % 8;
            quot = quot/8;
        }
		
        cout<<" The octal number is: ";
        for(j=i-1; j>0; j--)
        {
            cout<<oct_num[j];
        }
		cout<<"\n";	
} 

void seventy3(){
  long binaryNumber, decimalNumber = 0, j = 1, remainder;
	cout << "\n\n Convert a  binary number to decimal number:\n";
	cout << "-----------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber != 0) 
  {
   remainder = binaryNumber % 10;
   decimalNumber = decimalNumber + remainder * j;
   j = j * 2;
   binaryNumber = binaryNumber / 10;
  }
  cout<<" The decimal number: " << decimalNumber<<"\n";
} 

void seventy4(){
  int hex[1000];
  int i = 1, j = 0, rem, dec = 0, binaryNumber;
	cout << "\n\n Convert a binary number to hexadecimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
  while (binaryNumber > 0) 
  {
   rem = binaryNumber % 2;
   dec = dec + rem * i;
   i = i * 2;
   binaryNumber = binaryNumber / 10;
  }
   i = 0;
  while (dec != 0) 
  {
   hex[i] = dec % 16;
   dec = dec / 16;
   i++;
  }
  cout<<" The hexadecimal value: ";
  for (j = i - 1; j >= 0; j--)
  {
   if (hex[j] > 9) 
   {
    cout<<(char)(hex[j] + 55)<<"\n";
   } 
   else
   {
    cout<<hex[j]<<"\n";
   }
  }
}

void seventy5(){
        int binnum1, binaryNumber,rem, decnum=0, quot, i=1, j;
        int octnum[100];
	cout << "\n\n Convert a binary number to octal number:\n";
	cout << "---------------------------------------------\n";
	cout << " Input a binary number: ";
	cin>> binaryNumber;
        binnum1=binaryNumber;
      while(binaryNumber > 0)
        {
            rem = binaryNumber % 10;
            decnum = decnum + rem*i;
            i = i*2;
            binaryNumber = binaryNumber/10;
        }   
		i=1;
        quot = decnum;
		
        while(quot > 0)
        {
            octnum[i++] = quot % 8;
            quot = quot / 8;
        }
        cout<<" The equivalent octal value of " <<binnum1<< " is : ";
        for(j=i-1; j>0; j--)
        {
            cout<<octnum[j];
        }
 cout<<"\n";
} 

void seventy6(){
    long octal_num, decimal_num = 0;
     int i = 0;
	cout << "\n\n Convert any octal number to decimal number:\n";
	cout << "----------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
    while (octal_num != 0) 
     {
      decimal_num = (long)(decimal_num + (octal_num % 10) * pow(8, 

i++));
      octal_num = octal_num / 10;
     }
    cout<<" The equivalent decimal number: " << decimal_num << "\n";	
} 

void seventy7(){
  int octal_numvalues[] = {0, 1, 10, 11, 100, 101, 110, 111};
  long octal_num, tempoctal_num, binary_num, place;
  int rem;
	cout << "\n\n Convert any octal number to binary number:\n";
	cout << "------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;
	tempoctal_num = octal_num;
	binary_num = 0;
	place = 1;
	while (tempoctal_num != 0)
	{
	rem = (int)(tempoctal_num % 10);
	binary_num = octal_numvalues[rem] * place + binary_num;
	tempoctal_num /= 10;
	place *= 1000;
	}
  cout<<" The equivalent binary number: " << binary_num <<"\n";
} 

void seventy8(){
    int ar1[20],ar2[20],ar3[20];
    int h,i,j,k,l,x,fr,flg,rem,n1,n3;    
    float rem1,n2,n4,dno;
    char octal_num[20];
    x=fr=flg=rem=0;
    rem1=0.0;
	cout << "\n\n Convert any octal number to a hexadecimal number:\n";
	cout << "------------------------------------------------------\n";
	cout << " Input any octal number: ";
	cin>> octal_num;	
	
    for(i=0,j=0,k=0;i<strlen(octal_num);i++)
    {
        if(octal_num[i]=='.')
        {
            flg=1;
        }
        else if(flg==0)
            ar1[j++]=octal_num[i]-48;
        else if(flg==1)
            ar2[k++]=octal_num[i]-48;
    }
    x=j;
    fr=k;
    for(j=0,i=x-1;j<x;j++,i--)
    {
        rem = rem +(ar1[j] * pow(8,i));
    }
    for(k=0,i=1;k<fr;k++,i++)
    {
        rem1 = rem1 +(ar2[k] / pow(8,i));
    }
    rem1=rem+rem1;
    dno=rem1;
    n1=(int)dno;
    n2=dno-n1;
 
    i=0;
    while(n1!=0)
    {
        rem=n1 % 16;
        ar3[i] = rem;
        n1=n1 /16;
        i++;
    }
    j=0;
    while(n2!=0.0)
    {
        n2=n2 * 16;
        n3=(int)n2;
        n4=n2-n3;
        n2=n4;
        ar1[j]=n3;
        j++;
        if(j==4)
        {
            break;
        }
    }
    l=i;
    cout<<" The hexadecimal value of "<<octal_num<<" is: ";
    for(i=l-1;i>=0;i--)
    {
        if(ar3[i]==10)
           cout<<"A";
        else if(ar3[i]==11)
           cout<<"B";
        else if(ar3[i]==12)
           cout<<"C";
        else if(ar3[i]==13)
           cout<<"D";
        else if(ar3[i]==14)
           cout<<"E";
        else if(ar3[i]==15)
           cout<<"F";
        else
        cout<<ar3[i];
    }
    h=j;
    cout<<".";
    for(k=0;k<h;k++)
    {
        if(ar1[k]==10)
           cout<<"A";
        else if(ar1[k]==11)
           cout<<"B";
        else if(ar1[k]==12)
           cout<<"C";
        else if(ar1[k]==13)
           cout<<"D";
        else if(ar1[k]==14)
           cout<<"E";
        else if(ar1[k]==15)
           cout<<"F";
        else
        cout<<ar1[k];
    }
    cout<<endl;    
}

void seventy9(){
int num1,num2;
    cout << "\n\n Compare the first number with second number numbers:\n";
	cout << "---------------------------------------------------------\n";
	cout << " Input the first integer: ";
	cin>> num1;
	cout << " Input the second integer: ";
	cin>> num2;	
	
		if ( num1 == num2 )           
            cout<< num1<< " == " << num2 <<endl;  
        if ( num1 != num2 )          
            cout<< num1<<" != " << num2<<endl; 
        if ( num1 < num2 )          
            cout<< num1<< " < "<<num2<<endl; 
        if ( num1 > num2 )          
            cout<< num1<<" > "<< num2 <<endl; 
        if ( num1 <= num2 )          
            cout<<num1<<" <= "<< num2<<endl; 
        if ( num1 >= num2 )          
            cout<<num1<< " >= "<< num2<<endl; 	
}

void eighty(){
    char *array_point;
    char c1;
    int count=0, alp=0, digt=0, spcchr=0,oth=0;
    char string_array[100];    
    string str1;
    
    cout << "\n\n Count the letters, spaces, numbers and other characters:\n";
	cout << "-------------------------------------------------------------\n";
	cout << " Enter a string: ";
    getline(cin, str1);
    cout<<endl;
    strcpy(string_array, str1.c_str());
    for(array_point=string_array;*array_point!='\0';array_point++)
    {
        c1=*array_point;
        count++;
		if (isalpha(c1))
		{
		    alp++;
		}
		else
		if (isdigit(c1))
		{
		    digt++;
		}
		else
        if (isspace(c1))
        {
            spcchr++;
        }
        else
        {
            oth++;;
        }
    }
        cout <<" The number of characters in the string is: "<<count<<endl;      
        cout<<" The number of alphabets are: "<<alp<<endl;
        cout<<" The number of digits are: "<<digt<<endl; 
        cout<<" The number of spaces are: "<<spcchr<<endl;
        cout<<" The number of other characters are: "<<oth<<endl<<endl;        
     return 0;
}

void Fourth20(){	
	system("cls");
    int choice;

for (int v = 1; v > 0; v++){
          system("cls");		  
          cout << "\033[1;58H  Main Menu";
          cout << "\033[2;50H  Part IV of Array Problems";
          cout << "\033[3;13H ===============================================================================================";
          cout << "\033[4;15H 61 - Prints all ASCII characters with their values.";
          cout << "\033[5;15H 62 - Find the power of any number using a for loop.";
          cout << "\033[6;15H 63 - Enter any number and print all factors of the number.";
          cout << "\033[7;15H 64 - Find the one's complement of a binary number.";
          cout << "\033[8;15H 65 - Find the one's complement of a binary number.";
          cout << "\033[9;15H 66 - Create a checkerboard pattern with the words black and white.";
          cout << "\033[10;15H 67 - Calculate the sum of the series 1.2+2.3+3.4+4.5+5.6+.......";
          cout << "\033[11;15H 68 - Print the first N numbers for a specific base.";
          cout << "\033[12;15H 69 - Produce square mtrix w/ 0's down the main diagonal,";
          cout << "\033[13;15H      1's in the entries just above & below the main diagonal, 2's above & below that, etc.";
          cout << "\033[14;15H 70 - Convert a decimal number to a binary number.";
          cout << "\033[15;15H 71 - Convert a decimal number to a hexadecimal number.";
          cout << "\033[16;15H 72 - Convert a decimal number to an octal number.";
          cout << "\033[17;15H 73 - Convert a binary number to a decimal number.";
          cout << "\033[18;15H 74 - Convert a binary number to a hexadecimal number";
          cout << "\033[19;15H 75 - Convert a binary number to an octal number";
          cout << "\033[20;15H 76 - Convert an octal number to a decimal number.";
          cout << "\033[21;15H 77 - Convert an octal number to a binary number."; 
		  cout << "\033[22;15H 78 - Convert an octal number to a hexadecimal number.";
		  cout << "\033[23;15H 79 - Compare two numbers";
		  cout << "\033[24;15H 80 - Count the letters, spaces, numbers and other characters in an input string.";           
          cout << "\033[25;15H 81 - Exit ";

        cout << "\033[27;53H Enter your choice: ";
        cin >> choice;
           
   system("cls");       
   switch(choice){
    	case 61:sixty1();getch();break;
    	case 62:sixty2();getch();break;
    	case 63:sixty3();getch();break;
    	case 64:sixty4();getch();break;
		case 65:sixty5();getch();break;
		case 66:sixty6();getch();break;
		case 67:sixty7();getch();break;
		case 68:sixty8();getch();break;
		case 69:sixty9();getch();break;
		case 70:seventy();getch();break;
		case 71:seventy1();getch();break;	
		case 72:seventy2();getch();break;
		case 73:seventy3();getch();break;
		case 74:seventy4();getch();break;
		case 75:seventy5();getch();break;
		case 76:seventy6();getch();break;
		case 77:seventy7();getch();break;
		case 78:seventy8();getch();break;
		case 79:seventy9();getch();break;
		case 80:eighty();getch();break;		
    	case 81:return;		
		default: cout << "\033[4;50H Please select other options!";getch();	break;	 
    	}
	}			
}

//82
void three_largest(int arr[], int arr_size){
   int i, first, second, third;
  
    if (arr_size < 3)
    {
        cout << "Invalid Input";
    }
  
    third = first = second = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
        if (arr[i] > first)
        {
            third = second;
            second = first;
            first = arr[i];
        }
         else if (arr[i] > second)
        {
            third = second;
            second = arr[i];
        }
  
        else if (arr[i] > third)
            third = arr[i];
    }
  
      cout << "\nThree largest elements are: " <<first <<", "<< second <<", "<< third;
}

//83
void second_largest(int nums[], int arr_size){
   int i, first_element, second_element;
 
    /* There should be atleast two elements */
    if (arr_size < 2)
    {
        cout<< " Invalid Input ";
        return;
    }
 
    first_element = second_element = INT_MIN;
    for (i = 0; i < arr_size ; i ++)
    {
  
        if (nums[i] > first_element)
        {
            second_element = first_element;
            first_element = nums[i];
        }
 

        else if (nums[i] > second_element && nums[i] != first_element)
        {
            second_element = nums[i];
        }
    }
    if (second_element == INT_MIN)
     {
        cout<< "No second largest element";
     }
    else
     { 
        cout<< "\nThe second largest element is: " <<second_element;
     }
}

//84
void kLargest(int nums[], int n, int k){
   sort(nums, nums+n, greater<int>());
    cout << "\nLargest " << k << " Elements: ";
    for (int i = 0; i < k; i++)
        cout << nums[i] << " ";
}

//85
int find_Second_Smallest(int array_num[], int n) {
  int smallest_num, second_smallest_num;
  if (array_num[0] < array_num[1]) {
    smallest_num = array_num[0];
    second_smallest_num = array_num[1];
  } else {
    smallest_num = array_num[1];
    second_smallest_num = array_num[0];
  }
for (int i = 0; i < n; i++) {
if (smallest_num > array_num[i]) {
second_smallest_num = smallest_num;
smallest_num = array_num[i];
} else if (array_num[i] < second_smallest_num && array_num[i] > smallest_num) {
second_smallest_num = array_num[i];
}
}
  return second_smallest_num;
}

//86
void find_greater_elements(int nums[], int n){
    cout << "\nElements which have at-least two greater elements: ";
    for (int i=0; i<n; i++)
    {
        int ctr = 0;
        for (int j=0; j<n; j++)
            if (nums[j] > nums[i])
                ctr++;
 
        if (ctr >= 2)
            cout << nums[i] << " ";
    }
}

//87
void most_occurred_number(int nums[], int size){
  int max_count = 0;
  cout << "\nMost occurred number: ";
  for (int i=0; i<size; i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count>max_count)
      max_count = count;
  }

  for (int i=0;i<size;i++)
  {
   int count=1;
   for (int j=i+1;j<size;j++)
       if (nums[i]==nums[j])
           count++;
   if (count==max_count)
       cout << nums[i] << endl;
  }
 }

//88
void next_greater(int nums[], int n){
    stack<int> data_stack;
 
    data_stack.push(nums[0]);
 
   for (int i=1; i<n; i++)
    {
        int next_element = nums[i];
 
        if (data_stack.empty() == false)
        {
            int array_element = data_stack.top();
            data_stack.pop();
 
         while (array_element < next_element)
            {
                cout << array_element << ": " << next_element
                     << endl;
                if (data_stack.empty() == true)
                   break;
                array_element = data_stack.top();
                data_stack.pop();
            }
 
           if (array_element > next_element)
                data_stack.push(array_element);
           }
 
          data_stack.push(next_element);
         }
 
     } 
     
//89
void swap_elements(int *a, int *b){
    int t = *a;
    *a = *b;
    *b = t;
}
 
void array_wave(int nums[], int n){
    sort(nums, nums+n);
 
    for (int i=0; i<n-1; i += 2)
        swap_elements(&nums[i], &nums[i+1]);
}

//90
int smalest_missing_num(int nums[], int start_pos, int end_pos){
    if (start_pos  > end_pos)
        return end_pos + 1;
 
    if (start_pos != nums[start_pos])
        return start_pos;
 
    int mid = (start_pos + end_pos) / 2;
 
    if (nums[mid] == mid)
        return smalest_missing_num(nums, mid + 1, end_pos);
 
    return smalest_missing_num(nums, start_pos, mid);
}

//91
void replace_elements(int nums[], int n){
    if (n <= 1)
      return;
 
    int prev_element = nums[0];
    nums[0] = nums[0] * nums[1];
 
    for (int i=1; i<n-1; i++)
    {
        int curr_element = nums[i];
 
        nums[i] = prev_element * nums[i+1];
 
        prev_element = curr_element;
    }
 
    nums[n-1] = prev_element * nums[n-1];
}

//92
void zig_zag_array(int nums[], int n){
    bool ans = true;
 
    for (int i=0; i<=n-2; i++)
    {
        if (ans) 
        {
            if (nums[i] > nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        else  
        {
            if (nums[i] < nums[i+1])
                swap(nums[i], nums[i+1]);
        }
        ans = !ans; 
    }
}

//93
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
 
void segregateEvenOdd(int nums[], int size){
    int left_num = 0, right_num = size-1;
    while (left_num < right_num)
    {
         while (nums[left_num]%2 == 0 && left_num < right_num)
            left_num++;
 
        while (nums[right_num]%2 == 1 && left_num < right_num)
            right_num--;
 
        if (left_num < right_num)
        {
            swap(&nums[left_num], &nums[right_num]);
            left_num++;
            right_num--;
        }
    }
}

//94
void segregatedEvenOdd(int nums[], int n){
    int ctr = 0;  
 
    for (int i = 0; i < n; i++) {
        if (nums[i] == 0)
            ctr++;
    }
 
   for (int i = 0; i < ctr; i++)
        nums[i] = 0;
 
   for (int i = ctr; i < n; i++)
        nums[i] = 1;
}

//95
void rearrange_max_min(int nums[], int n){
    int temp[n];
    int small_num=0, large_num=n-1;
    int result = true;
 
    for (int i=0; i<n; i++)
    {
        if (result)
            temp[i] = nums[large_num--];
        else
            temp[i] = nums[small_num++];
 
        result = !result;
    }
 
     for (int i=0; i<n; i++)
        nums[i] = temp[i];
}

//96
void sort_012_num(int nums[], int n){
    int i = 0;
    int j = n - 1;
    int mid_num = 0;
 
    while (mid_num <= j)
    {
        switch (nums[mid_num])
        {
        case 0:
            swap(&nums[i++], &nums[mid_num++]);
            break;
        case 1:
            mid_num++;
            break;
        case 2:
            swap(&nums[mid_num], &nums[j--]);
            break;
        }
    }
}

//97
void revOfString(const string& a){
}

//98
void segregateElements(int nums[], int n){
    // Array to store result
    int result[n];

    int j = 0; // index of result
    for (int i = 0; i < n ; i++)
        if (nums[i] >= 0 )
            result[j++] = nums[i];
    if (j == n || j == 0)
        return;
 
    for (int i = 0 ; i < n ; i++)
        if (nums[i] < 0)
            result[j++] = nums[i];
 
    // Copy contents to nums[]
    memcpy(nums, result, sizeof(result));
} 

//99
int getOddOccurrence(int nums[], int n){
    for (int i = 0; i < n; i++) {
         
        int ctr = 0;
         
        for (int j = 0; j < n; j++)
        {
            if (nums[i] == nums[j])
                ctr++;
        }
        if (ctr % 2 != 0)
            return nums[i];
    }
    return -1;
}

//100
int count_occurrences(int arr[], int n, int x){
    int result = 0;
    for (int i=0; i<n; i++)
        if (x == arr[i])
          result++;
    return result;
}

void Fifth20(){	
	system("cls");
    int choice;

for (int v = 1; v > 0; v++){
          system("cls");		  
          cout << "\033[1;58H  Main Menu";
          cout << "\033[2;50H  Part V of Array Problems";
          cout << "\033[3;13H =======================================================================================================";
          cout << "\033[4;15H 81 - Find the largest element of a given array of integers";
          cout << "\033[5;15H 82 - Find the largest three elements in an array";
          cout << "\033[6;15H 83 - Find the second largest element in an array of integers";
          cout << "\033[7;15H 84 - Find the k largest elements in a given array of integers";
          cout << "\033[8;15H 85 - Find the second smallest elements in a given array of integers";
          cout << "\033[9;15H 86 - Find all elements in an array of integers that have at least two significant elements.";
          cout << "\033[10;15H 87 - Find the most frequent element in an array of integers.";
          cout << "\033[11;15H 88 - Find the nxt more powerful element of every elment of a given array of integers";
          cout << "\033[12;15H      Ignore those elements that have no greater element.";
          cout << "\033[13;15H 89 - Sort a given unsorted array of integers, in wave form";
          cout << "\033[14;15H 90 - Find the smallest element missing from a sorted array.";
          cout << "\033[15;15H 91 - Update every array elment by multiplication of the next & prvious values of a given arr of integers";
          cout << "\033[16;15H 92 - Rearrange the elements of a given array of integers in a zig-zag pattern.";
          cout << "\033[17;15H 93 - Separate even and odd nmbers in an array of integers. Put all even numbers first,& then odd nmbers";
          cout << "\033[18;15H 94 - Separate 0s and 1s from a given array of values 0 and 1";
          cout << "\033[19;15H 95 - Rearrange a given sorted array of positive integers";
          cout << "\033[20;15H 96 - Sort a given array of 0s, 1s and 2s. In the final array put all 0s first, then all 1s & all 2s last";
          cout << "\033[21;15H 97 - create and display an original three-digit numbers using 1, 2, 3, 4. "; 
          cout << "\033[22;15H      Also count how many three-digit numbers are there.";
		  cout << "\033[23;15H 98 - Move all negative elements of an array of integers to the end of the array";
		  cout << "\033[24;15H      This is done without changing the order of the positive and negative elements of the array";
		  cout << "\033[25;15H 99 - Find a number that occurs an odd number of times in a given array of positive integers";
		  cout << "\033[26;15H      In the array, all numbers occur an even number of times";
		  cout << "\033[27;15H 100 - Count the number of occurrences of a given number in a sorted array of integers";           
          cout << "\033[28;15H 101 - Exit ";

        cout << "\033[30;53H Enter your choice: ";
        cin >> choice;
           
   system("cls");       
   switch(choice){
    	case 81:getch();break;
				  
    	case 82:{
		        int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			   three_largest(nums, n);
			   
			   getch();break; }
			
		case 83:{
		        int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    second_largest(nums, n);
			   
			   getch();break; }
			
		case 84:{
			    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    int k = 4;
			    kLargest(nums, n, k);
			    
			    getch();break; }
		
		case 85:{
				  int n = 7;
				  int array_num[7] = {5,6,7,2,3,4,12};
				  int s = sizeof(array_num) / sizeof(array_num[0]);
				  cout << "Original array: ";
				  for (int i=0; i < s; i++)
				  cout << array_num[i] <<" ";
				  int second_smallest_num = find_Second_Smallest(array_num, n);
				  cout<<"\nSecond smallest number: "<< second_smallest_num;
				
				getch();break; }
			
		case 86:{
			    int nums[] = {7, 12, 9, 15, 19, 32, 56, 70};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    find_greater_elements(nums, n);
			   			
				getch();break; }
		
		case 87:{
			    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    most_occurred_number(nums, n);
			    
			    getch();break; }
    	
		case 88:{
			    int nums[] = {4, 1, 5, 9, 12, 9, 22, 45, 7};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    cout << "\nNext Greater Element:\n";
			    next_greater(nums, n);
			    
			    getch();break; }
		
		case 89:{
			    int nums[] = {4, 5, 9, 12, 9, 22, 45, 7};
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    array_wave(nums, n);
			    cout << "\nWave form of the said array: ";
			    for (int i=0; i<n; i++)
			    cout << nums[i] << " ";
			    
			    getch();break; }
			
		case 90:{
			    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
			    int result;
				int n = sizeof(nums)/sizeof(nums[0]);
				cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    result = smalest_missing_num(nums, 0, n-1);
			    cout << "\nSmallest missing element is " << result;
			    
			    getch();break; }
					
		case 91:{
			    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    replace_elements(nums,n);
			    cout << "\nNew array elements: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			  
			    getch();break; }
		
		case 92:{
			    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    zig_zag_array(nums, n);
			    cout << "\nNew array elements: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" "; 
				  
				 getch();break; }
		
		case 93:{
			    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10};
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    segregateEvenOdd(nums, n);
			 
			    printf("\nArray after divided: ");
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";

				getch();break; }			
		
		case 94:{
				int nums[] = {0, 1, 0, 0 , 1, 1, 1, 0, 1, 0};
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    segregatedEvenOdd(nums, n);
			 
			    printf("\nArray after divided: ");
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			      
   				getch();break; }
   				
   				
   		case 95:{
			    int nums[] = {0, 1, 3, 4, 5, 6, 7, 8, 10}; 
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    rearrange_max_min(nums, n);
			 
			    printf("\nArray elements after rearranging: ");
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			     
			    getch();break; }
		
		case 96:{
			    int nums[] = {0, 1, 2, 2, 1, 1, 0, 0, 1}; 
			    int n = sizeof(nums)/sizeof(nums[0]);
			   	cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    sort_012_num(nums, n);
			 
			    printf("\nArray elements after rearranging: ");
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    
			    getch();break; }
		
		case 97:{
			    string str;
			    cout << "\n\n Create and display the unique three-digit number using 1, 2, 3, 4:\n";
				cout << "-------------------------------------------------------------------\n";
				cout<<" The three-digit numbers are: "<<endl;
					int amount = 0;
					cout<<" ";
					for(int i = 1; i <= 4; i++)
					{
						for(int j = 1; j <= 4; j++)
						{
							for(int k = 1; k <= 4; k++)
							{
								if(k != i && k != j && i != j)
								{
									amount++;
									cout<<i <<j<<k<<" ";
								}
							}
						}
					}
					cout<<endl<<" Total number of the three-digit-number is: "<< amount<<endl<<endl;
					
					getch();break;
			}
			
			
		case 98:{
			    int nums[] = {0, 9, -7, 2, -12, 11, -20}; 
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    segregateElements(nums, n);
			 
			    printf("\nArray elements after rearrange: ");
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    
			    getch();break; }
		
		case 99:{
			    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    cout << "\nNumber which occurs odd number of times: " << getOddOccurrence(nums, n);
			 
			    getch();break; }  
     	
     	case 100:{
			    int nums[] = {5, 7, 8, 8, 5, 8, 7, 7}; 
			    int n = sizeof(nums)/sizeof(nums[0]);
			    cout << "Original array: ";
			    for (int i=0; i < n; i++) 
			    cout << nums[i] <<" ";
			    int x = 7;
			    cout <<"\nNumber of occurrences of 7 : " << count_occurrences(nums, n, x);
			    
			    getch();break; }
		
		case 101: return;
		}
	}
}


//Main Menu
int main(){
//Declaration & Initialization
    system("cls");
	int choice;
	
for (int v = 1; v > 0; v++){
    system("cls");
    cout << "\033[2;59H Main Menu ";
    cout << "\033[3;48H ===================================== ";
    cout << "\033[4;50H 1 - Part I Array Questions";
    cout << "\033[5;50H 2 - Part II Array Questions ";
    cout << "\033[6;50H 3 - Part III Array Questions ";
    cout << "\033[7;50H 4 - Part IV Array Questions ";
    cout << "\033[8;50H 5 - Part V Array Questions ";
    cout << "\033[9;50H 0 - Exit ";
    cout << "\033[11;54H Enter your choice: ";
    cin >> choice;
        
    system ("cls");
    switch (choice){    
		case 1: First20();  break;
        case 2: Second20(); break; 
        case 3: Third20();  break;
        case 4: Fourth20(); break;
        case 5: Fifth20();  break;
		case 0: exit(0);				
		default: cout << "\033[4;50H Please select other options!";getch();	break;			
     }	
   }
  return 0;
}  
