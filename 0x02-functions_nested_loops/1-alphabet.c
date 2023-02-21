#include <stdio.h>
/**
 * main - run the entire program
 * Return: always 0
 */
void print_alphabet(void)
{
char i;

for(i = 'a'; i <= 'z'; i++) 
	putchar(i);
	putchar('\n');
}
int main(void)
{
print_alphabet();
	
	return (0);

}

