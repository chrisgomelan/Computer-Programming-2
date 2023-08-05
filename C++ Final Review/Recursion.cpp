#include<iostream>
#include <algorithm>
#include <conio.h>
#include <stack>
#include <map>
#include<set>
#include<string>
#include <cstddef>
using namespace std;

// Recursive function to calculate the sum of array elements
int Recur1(int arr[], int size) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: return the sum of the last element and the sum of the rest of the array
  return arr[size - 1] + Recur1(arr, size - 1);
}


// Recursive function to calculate the factorial
int Recur2(int n) {
  // Factorial of 0 or 1 is 1
  if (n == 0 || n == 1)
    return 1;

  // Recursive case: factorial of n is n multiplied by factorial of (n-1)
  return n * Recur2(n - 1);
}

int Recur3(int n) {
  // Initial: Fibonacci of 0 is 0, Fibonacci of 1 is 1
  if (n == 0)
    return 0;
  else if (n == 1)
    return 1;

  // Recursive case: Fibonacci of n is the sum of the previous two Fibonacci numbers
  return Recur3(n - 1) + Recur3(n - 2);
}

int Recur4(int number) {
  // If the number is a single digit, return the number itself
  if (number >= 0 && number <= 9)
    return number;

  // Recursive case: Calculate the sum of the last digit and the sum of the rest of the digits
  return (number % 10) + Recur4(number / 10);
}

int Recur5(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the maximum
  if (start == end)
    return nums[start];

  // Recursive case: divide the array in half and find the maximum in each half,
  // then return the maximum of the two halves
  int mid = (start + end) / 2;
  int max1 = Recur5(nums, start, mid);
  int max2 = Recur5(nums, mid + 1, end);

  return (max1 > max2) ? max1 : max2;
}

int findMin(int nums[], int start, int end) {
  // Base case: when there is only one element, it is the minimum
  if (start == end)
    return nums[start];

  // Recursive case: Divide the array in half and find the minimum in each half,
  // then return the minimum of the two halves
  int mid = (start + end) / 2;
  int min1 = findMin(nums, start, mid);
  int min2 = findMin(nums, mid + 1, end);

  return (min1 < min2) ? min1 : min2;
}

// Recursive function to reverse a string
void Recur6(std::string & text, int start, int end) {
  // Base case: when start >= end, the string is fully reversed
  if (start >= end)
    return;

  // Swap characters at start and end indices
  std::swap(text[start], text[end]);

  // Recursive case: move to the next pair of characters
  Recur6(text, start + 1, end - 1);
}

int Recur7(int b, int e) {
  // Base case: Any number raised to the power of 0 is 1
  if (e == 0)
    return 1;

  // Recursive case: Calculate the power using recursion
  // by multiplying the base with the power of (exponent - 1)
  return b * Recur7(b, e - 1);
}

bool Recur8(const std::string & text, int start, int end) {
  // Base case: when start >= end, the string is a palindrome
  if (start >= end)
    return true;

  // Recursive case: check if the characters at start and end indices are equal,
  // and recursively check the remaining characters
  if (text[start] != text[end])
    return false;

  return Recur8(text, start + 1, end - 1);
}
////////////////////////////////////////////////////////////////////////
// 9 9 9 9 9 9 9 9 9 9 9 9 9 9 
///////////////////////////////////////////////////////////////////////
// Linked list node structure
struct Node {
  int data;
  Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertNode(Node*& head, int data) {
  Node* newNode = new Node;
  newNode->data = data;
  newNode->next = head;
  head = newNode;
}

// Function to print the linked list
void print_List(Node* head) {
  while (head != NULL) {
    std::cout << head->data << " ";
    head = head->next;
  }
  std::cout << std::endl;
}

// Recursive function to reverse the linked list
Node* reverse_List(Node* current, Node* previous = NULL) {
  if (current == NULL)
    return previous;

  Node* nextNode = current->next;
  current->next = previous;
  return reverse_List(nextNode, current);
}

// Function to delete the linked list to free the allocated memory
void delete_List(Node* head) {
  while (head != NULL) {
    Node* temp = head;
    head = head->next;
    delete temp;
  }
}

int Recur10(int x, int y) {
  // Base case: if either number is 0, return the other number as the GCD
  if (x == 0)
    return y;
  if (y == 0)
    return x;

  // Recursively find the GCD by calling the function with (y, x % y)
  return Recur10(y, x % y);
}

int Recur11(int nums[], int size, int element) {
  // Base case: if the array is empty, return 0
  if (size == 0)
    return 0;

  // Recursive case: if the first element matches the target element,
  // increment the count and recursively search in the rest of the array
  if (nums[0] == element)
    return 1 + Recur11(nums + 1, size - 1, element);
  else
    return Recur11(nums + 1, size - 1, element);
}

void Recur12(std::string text, int left, int right) {
  // Base case: if left and right indices are the same, we have a complete permutation
  if (left == right) {
    std::cout << text << std::endl;
    return;
  }

  // Recursive case: swap each character with the character at the left index,
  // and recursively generate permutations for the rest of the string
  for (int i = left; i <= right; i++) {
    std::swap(text[left], text[i]);
    Recur12(text, left + 1, right);
    std::swap(text[left], text[i]); // backtrack by swapping back the characters
  }
}

int Recur13(int x, int y) {
  // Base case: if either number is 0, the product is 0
  if (x == 0 || y == 0)
    return 0;

  // Recursive case: recursively add x to the product of (x, y - 1)
  // when y is positive, or recursively add (-x) to the product of (x, y + 1)
  // when y is negative
  if (y > 0)
    return x + Recur13(x, y - 1);
  else
    return -x + Recur13(x, y + 1);
}

 void Recur14(int start, int end, int & evenSum, int & oddSum) {
   // Base case: If start becomes greater than end, stop the recursion
   if (start > end)
     return;

   // Recursive case: add the current number to the appropriate sum
   if (start % 2 == 0)
     evenSum += start;
   else
     oddSum += start;

   // Recursively call the function with the next number in the range
  Recur14(start + 1, end, evenSum, oddSum);
 }

//////////////////////////////////////////////////////////////////////
// 15 15 15 15 15
/////////////////////////////////////////////////////////////////////


bool Recur16(int number, int divisor = 2) {
  // Base cases
  if (number <= 2)
    return (number == 2);
  if (number % divisor == 0)
    return false;
  if (divisor * divisor > number)
    return true;

  // Recursive case: check if the number is divisible by the next divisor
  return Recur16(number, divisor + 1);
}

// Recursive function to find the sum of all prime numbers in a range
int sumOfPrimes(int start, int end) {
  // Base case: if the start becomes greater than the end, stop the recursion
  if (start > end)
    return 0;

  // Recursive case: if the current number is prime, add it to the sum
  int sum = Recur16(start) ? start : 0;

  // Recursively call the function with the next number in the range
  return sum + sumOfPrimes(start + 1, end);
}

int main(){
	
	int choice;
	do{
	system("cls");
	
	cout << "Main Menu\n";
	cout << "1 - Find the sum of all elements in an array using recursion\n";
	cout << "2 - Calculate the factorial of a given number using recursion\n";
	cout << "3 - Implement a recursive function to get the nth Fibonacci numbe\n";
	cout << "4 - Implement a recursive function to calculate the sum of digits of a given number.\n";
	cout << "5 - Implement a recursive function to find the maximum and minimum elements in an array\n";
	cout << "6 - Reverse a string using recursions\n";
	cout << "7 - Implement a recursive function to calculate the power of a number\n";
	cout << "8 - Implement a recursive function to check if a given string is a palindrome\n";
	cout << "9 - Implement a recursive function to reverse a linked list\n";
	cout << "10 - Implement a recursive function to find the greatest common divisor (GCD) of two numbers\n";
	cout << "11 - Implement a recursive function to count the number of occurrences of a specific element in an array of integerss\n";
	cout << "12 - Implement a recursive function to generate all permutations of a given string\n";
	cout << "13 - Implement a recursive function to calculate the product of two numbers without using the multiplication operator\n";
	cout << "14 - Implement a recursive function to calculate the sum of even and odd numbers in a given range.\n";
	cout << "15 - Implement a recursive function to check if a given binary tree is a binary search tree\n";
	cout << "16 - Implement a recursive function to find the sum of all prime numbers in a given range.\n";
	cout << "17 - Exit\n";
	cout << "Enter your choice: ";
	cin >> choice;
	
	switch (choice){
	
	case 1:{
		system("cls");
		
    int size;
    cout << "Enter size of the Array: ";
    cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter any Number " << i + 1 << ": ";
        cin >> nums[i];
    }
  int s = sizeof(nums) / sizeof(nums[0]);

  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    cout << nums[i] << ' ';
  }

  // Calculate the sum of the array elements using recursion
  int sum = Recur1(nums, size);

  std::cout << "\nSum of array elements using recursion: " << sum << std::endl;
		
		getch();
		break;
	}
	
	case 2:{
		system("cls");
		
  int num;
	cout << "Input a number: ";
	cin >> num;

  // Calculate the factorial using recursion
  int fact = Recur2(num);

	cout << "Factorial of " << num << " is: " << fact << endl;		
		
		getch();
		break;
	}
	
	case 3:{
		system("cls");
		
  int n;
	cout << "Input a number: ";
	cin >> n;

  // Find the nth Fibonacci number using recursion
  int fib_num = Recur3(n);

  std::cout << "The " << n << "th Fibonacci number is: " << fib_num << std::endl;		
		
		getch();
		break;
	}
	
	 case 4:{
	 	system("cls");
	 	
  int n;
  std::cout << "Input a number: ";
  std::cin >> n;

  // Calculate the sum of digits using recursion
  int sum_digits = Recur4(n);

  std::cout << "Sum of digits of " << n << " is: " << sum_digits << std::endl;
	
	 	getch();
		break;
	 }
	 
	 case 5:{
	 	system("cls");

    int size;
    cout << "Enter size of the Array: ";
    cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter any Number " << i + 1 << ": ";
        cin >> nums[i];
    }
  int s = sizeof(nums) / sizeof(nums[0]);
  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  // Find the maximum and minimum elements using recursion
  int max = Recur5(nums, 0, size - 1);
  int min = findMin(nums, 0, size - 1);

  std::cout << "\nMaximum element: " << max << std::endl;
  std::cout << "Minimum element: " << min << std::endl;	 	
	 	
	 	getch();
		break;
	 }
	 
	 case 6:{
	 	system("cls");
	 	
  std::string text;
  std::cout << "Input a string: ";
  std::getline(std::cin, text);

  // Reverse the string using recursion
  Recur6(text, 0, text.length() - 1);

  std::cout << "Reversed string: " << text << std::endl;
	 	
	 	getch();
		break;
	 }
	 
	 case 7:{
	 	system("cls");
	 	
  int b, e;
  std::cout << "Input the base number: ";
  std::cin >> b;
  std::cout << "Input the exponent: ";
  std::cin >> e;

  // Calculate the power using recursion
  int result = Recur7(b, e);

  std::cout << b << " raised to the power of " << e << " is: " << result << std::endl;	 	
	 	
	 	getch();
		break;
	 }
	 
	 case 8:{
	 	system("cls");
	 	
  std::string text;
  std::cout << "Input a string: ";
  std::getline(std::cin, text);

  // Remove any spaces from the input string
  text.erase(std::remove(text.begin(), text.end(), ' '), text.end());

  // Check if the string is a palindrome using recursion
  bool palindrome = Recur8(text, 0, text.length() - 1);

  if (palindrome)
    std::cout << "The string is a palindrome." << std::endl;
  else
    std::cout << "The string is not a palindrome." << std::endl;	 	
	 	
	 	getch();
		break;
	 }	 
	 
	 case 9:{
	 	system("cls");
	 	
  Node* head = NULL;
  int n, data;

  std::cout << "Enter the number of elements: ";
  std::cin >> n;

  std::cout << "Enter the elements: ";
  for (int i = 0; i < n; ++i) {
    std::cin >> data;
    insertNode(head, data);
  }

  std::cout << "Original Linked List: ";
  print_List(head);

  // Reverse the linked list using recursion
  head = reverse_List(head);

  std::cout << "Reversed Linked List: ";
  print_List(head);

  // Clean up memory by deleting the linked list
  delete_List(head);
	 	
	 	getch();
		break;
	 }
	 
	 case 10:{
	 	system("cls");
	 	
  int n1, n2;
  std::cout << "Input the first number: ";
  std::cin >> n1;
  std::cout << "Input the second number: ";
  std::cin >> n2;

  // Calculate the GCD using recursion
  int result = Recur10(n1, n2);

  std::cout << "The GCD of " << n1 << " and " << n2 << " is: " << result << std::endl;	 	
	 	
	 	getch();
		break;
	 }	 
	 
	 case 11:{
	 	system("cls");
	 	
    int size;
    cout << "Enter size of the Array: ";
    cin >> size;

    int nums[size];
    for (int i = 0; i < size; i++) {
        cout << "Enter any Number " << i + 1 << ": ";
        cin >> nums[i];
    }
  int s = sizeof(nums) / sizeof(nums[0]);
  std::cout << "Array elements: " << std::endl;
  // loop through the array elements
  for (size_t i = 0; i < size; i++) {
    std::cout << nums[i] << ' ';
  }

  int element;
  std::cout << "\nCount the number of occurrences of a specific element in the said array:";
  std::cout << "\nInput an element: ";
  std::cin >> element;

  // Count the occurrences of the element using recursion
  int count = Recur11(nums, size, element);

  std::cout << "Number of occurrences of " << element << ": " << count << std::endl;	 	
	 	
	 	getch();
		break;
	 }
	 
	 case 12:{
	 	system("cls");
	 	
  std::string text;
  std::cout << "Input a string: ";
  std::cin >> text;

  std::cout << "All permutations of the string: " << std::endl;
  Recur12(text, 0, text.length() - 1);	 	
	 	
	 	getch();
		break;
	 }	 
	 
	 case 13:{
	 	system("cls");
	 	
  int n1, n2;
  std::cout << "Input the first number: ";
  std::cin >> n1;
  std::cout << "Input the second number: ";
  std::cin >> n2;

  // Calculate the product using recursion
  int result = Recur13(n1, n2);

  std::cout << "Product of " << n1 << " and " << n2 << ": " << result << std::endl;	 	
	 	
	 	getch();
		break;
	 }
	 
	 case 14:{
	 	system("cls");
	 	
   int start, end;
   std::cout << "Input the starting number: ";
   std::cin >> start;
   std::cout << "Input the ending number: ";
   std::cin >> end;

   int even_Sum = 0;
   int odd_Sum = 0;

   // Calculate the sum of even and odd numbers using recursion
   Recur14(start, end, even_Sum, odd_Sum);

   std::cout << "Sum of even numbers: " << even_Sum << std::endl;
   std::cout << "Sum of odd numbers: " << odd_Sum << std::endl;	 	
	 	
	 	getch();
		break;
	 }	 
	 
	 case 15:{
	 	system("cls");
	 		
	 	
	 	getch();
		break;
	 }
	 
	 case 16:{
	 	system("cls");
	 	
  int start, end;
  std::cout << "Input the starting number: ";
  std::cin >> start;
  std::cout << "Input the ending number: ";
  std::cin >> end;

  // Calculate the sum of prime numbers using recursion
  int sum = Recur16(start, end);

  std::cout << "Sum of prime numbers in the said range [" << start << ", " << end << "]: " << sum << std::endl;
	 	
	 	
	 	getch();
		break;
	 }	 
	 
	 	 	 	 	 
	 
	case 17:{
		
		return 0;
		
		break;
	}
	
	default: system ("cls");
	}//switch

	}while(choice);
	return 0;
}

