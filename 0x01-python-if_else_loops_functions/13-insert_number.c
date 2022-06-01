#include "lists.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * insert_node - inserts a number in an ordered linked list
 * @head: double pointer to the linked list
 * @number: number to insert in the new node
 *
 * Return: address of the new node, or NULL
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *newno = NULL;
	listint_t *temp = NULL;

	if (!head)
		return (NULL);

	newno = malloc(sizeof(listint_t));
	if (!newno)
		return (NULL);
	newno->n = number;
	newno->next = NULL;

	if (!*head || (*head)->n > number)
	{
		newno->next = *head;
		return (*head = newno);
	}
	else
	{
		while (current && current->n < number)
		{
			temp = current;
			current = current->next;
		}
		temp->next = newno;
		newno->next = current;
	}

	return (newno);
}
