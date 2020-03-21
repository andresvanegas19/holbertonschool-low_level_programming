/**
 * sort - sorting the 
 * @h: is the pointer to the header of the node
 */

void sort(struct node **h)
{
	int i, j, a;

	struct node *temp1;
	struct node *temp2;

	for (temp1 = *h; temp1 != NULL; temp1 = temp1->next)
	{
		for (temp2 = temp1->next; temp2 != NULL; temp2 = temp2->next)
		{
			if (temp2->data < temp1->data)
			{
				a = temp1->data;
				temp1->data = temp2->data;
				temp2->data = a;
			}
		}
	}
}
