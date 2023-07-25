#include "sort.h"
<<<<<<< HEAD
/**
 * insertion_sort_list - sorts a doubly linked list of integers in asc order
 * @list: list of integers
 */
void insertion_sort_list(listint_t **list)
{
	listint_t *prevnode, *nxnode, *current = NULL;

	if (list != NULL && (*list)->next != NULL)
	{
		current = (*list)->next;
		prevnode = current->prev;
		nxnode = current->next;
		while (current != NULL)
		{
			while (prevnode != NULL && prevnode->n > current->n)
			{
				current->next = prevnode;
				current->prev = prevnode->prev;
				if (prevnode->prev != NULL)
					(prevnode->prev)->next = current;
				prevnode->prev = current;
				prevnode->next = nxnode;
				if (nxnode != NULL)
					nxnode->prev = prevnode;
				nxnode = prevnode;
				prevnode = current->prev;
				if ((*list)->prev != NULL)
					*list = (*list)->prev;
				print_list(*list);
			}
			current = nxnode;
			if (current != NULL)
			{
				nxnode = current->next;
				prevnode = current->prev;
			}
		}
	}
=======


/**
 * insertion_sort_list - implementation insertion_sort algorithm
 *
 * @list: input linked list
 * You are not allowed to modify the integer n of a node.
 * You have to swap the nodes themselves.
 * You’re expected to print the list 
 * after each time you swap two elements
 *
 * Return: FUNCTION DO NOT RETURN
 */
void insertion_sort_list(listint_t **list)
{
	size_t len, itr;
	int key;
	listint_t *in_lst, *curnt, *curs, *prev, *head;

	len = 0;
	curnt = *list;
	head = *list;
	while(curnt)
	{
		len++;
		curnt = curnt->next;
	}
	printf("LIST LEN = %ld\n",len);

	for (itr = 1; itr < len; itr++)
	{
		key = curnt->n;
		printf("KEY IS %d", key);
		prev = curnt->prev;
		while (prev != NULL && prev->n > key)
		{
			curs = prev->prev;
			if (prev->prev)
					prev->prev->next = curnt;
			else
				head = curnt;
			if (curnt->next)
			{
				curnt->next->prev = prev;
			}
			prev->next = curnt->next;
			curnt->prev = prev->prev;
			prev->prev = curnt;
			curnt->next = prev;
			

			prev = curs;
			print_list(head);
		}
	}
	*list = head;
>>>>>>> parent of f0dfb48 (UPdate)
}
