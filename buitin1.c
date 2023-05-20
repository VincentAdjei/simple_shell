#include "shell.h"

int _myhistory(info_t *info)
{
	print_list_str(info->history); /** Modified function call */
	return (0);
}

int unset_alias(info_t *info, char *str)
{
	char *p, c;
	int ret;

	p = _strchr(str, '=');
	if (!p)
		return (1);
	c = *p;
	*p = 0;
	ret = delete_node_at_index(&(info->alias),
/** Modified function call */
	get_node_index(info->alias, node_starts_with(info->alias, str, '\0')));
	*p = c;
		return (ret);
}
	int set_alias(info_t *info, char *str)
{
	char *p;

	p = _strchr(str, '=');
	if (!p)
	return (1);
	if (!*++p)
	return (unset_alias(info, str));

	unset_alias(info, str);
		return (add_node_end(&(info->alias), str, 0) == NULL);
}

int print_alias(list_t *node)
{
	char *p = NULL, *a = NULL;

	if (node)
{
	p = _strchr(node->str, '=');
	for (a = node->str; a <= p; a++)
	_putchar(*a);
	_putchar('\'');

	_puts(p + 1);
	_puts("'\n");
}
	return (0);
}
