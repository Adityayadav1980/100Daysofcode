/*Q28: Write a program to print the product of even numbers from 1 to n.*/

/*
Sample Test Cases:
Input 1:
4
Output 1:
8 (2 * 4)

Input 2:
6
Output 2:
48 (2 * 4 * 6)

*/
#include <stdio.h>
int main()
{
    int input,i=2,product = 1;
    printf("Enter the number : ");
    scanf("%d",&input);
    while (i<=input)
    {
        product = product*i;
        i = i + 2; 
    }
    printf("product = %d", product);
    return 0;
}