#include "main.h"
/**
 * ev_print_func - returns the amount of identifiers.
 * @s: argument indentifier
 * @index: index of argument identifier.
 * Return: amount of identifiers.
 */
int ev_print_func(const char *s, int index)
{
	print_t pr[] = {
		{"c", print_chr}, {"s", print_str}, {"i", print_int},
		{"d", print_int}, {"b", print_bnr}, {"u", print_unt},
		{"o", print_oct}, {"x", print_hex}, {"X", print_upx},
<<<<<<< HEAD
=======
		{"#i", print_int},{"#d", print_int},{"+o", print_oct},
		{" o", print_oct},{"#u", print_unt},{"+u", print_unt},
		{" u", print_unt},{"+x", print_hex},{" x", print_hex},
		{"%", print_prg}, {"l", print_prg},{"h", print_prg},
		{" %", print_prg},
>>>>>>> 2b3a59b6009ed4bd921bf9e91be2366e26012d99
		{NULL, NULL},
	};
	int i = 0, j = 0, first_index;

	first_index = index;
	while (pr[i].type_arg)
	{
		if (s[index] == pr[i].type_arg[j])
		{
			if (pr[i].type_arg[j + 1] != '\0')
				index++, j++;
			else
				break;
		}
		else
		{
			j = 0;
			i++;
			index = first_index;
		}
	}
	return (j);
}
