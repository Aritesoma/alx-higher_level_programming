#include "lists.h"
/**
 * check_cycle - cycle snakes and ladder
 * @list: pointer to head
 * Return: 1 on success, 0 otherwise.
 */
int check_cycle(listint_t *list)
{
	listint_t *snakes;
	listint_t *ladder;

	if (list == NULL)
		return (0);
	snakes = list;
	ladder = list;
	while (ladder->next != NULL && ladder->next->next != NULL)
	{
		snakes = snake->next;
		ladder = ladder->next->next;
		if (snakes == ladder)
		{
			snakes = list;
			while (snakes != ladder)
			{
				snakes = snakes->next;
				ladder = ladder->next;
			}
			return (1);
		}
	}
	return (0);
}
