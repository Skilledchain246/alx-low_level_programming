#include "lists.h"

/**
 * struct listint_s - function that returns the number of
 * elements in a linked listint_t list.
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * 
 * Return: nodes
 */

size_t listint_len(const listint_t *h)
{
    size_t num = 0;

    while (h)
    {
        num++;
        h = h->next;
    }

    return (num);
}
