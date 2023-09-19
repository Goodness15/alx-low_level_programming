#include "maint.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The source string.
 * Return: The integer value, or 0 if no numbers were found.
 */
int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int started_reading_digits = 0;

	while (*s)
	{
		/* Check for sign */
		if (*s == '-')
		{
			sign *= -1;
		}

		/* Check for digit */
		if (*s >= '0' && *s <= '9')
		{
			if (!started_reading_digits)
				started_reading_digits = 1;
			/* Convert digit and update result */
			result = result * 10 + (*s - '0');
		}
		else if (started_reading_digits)
		{
			break;  /* If we already started reading digits, stop at first non-digit */
		}

		s++;  /* Move to the next character */
	}

	return (result * sign);
}
