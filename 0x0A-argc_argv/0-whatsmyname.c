#include <stdio.h>
/**
 * main - prints the program name
 * @argc: the counter of the argv
 * @argv: value of string
 * 
 * Return: 1 0r 0
 */
int main(int argc, char const *argv[]) {
    (void)argc;
    printf("%s/n", argv[0]);
    return 0;
}
