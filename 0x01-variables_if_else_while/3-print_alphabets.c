/**
 * main - Entry point
 *
 * Description: Prints the alphabet in lowercase, then in uppercase.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
        char ch;

/* Blank line after the declaration */
        for (ch = 'a'; ch <= 'z'; ch++)
        {
                putchar(ch);
        }
        for (ch = 'A'; ch <= 'Z'; ch++)
        {
                putchar(ch);
        }
        putchar('\n');
        return (0);
}
