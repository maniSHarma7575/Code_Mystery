int count(struct node *head, int search_for)
{
  int c = 0;
  while (head)
  {
    if (head->data == search_for)
    {
      c++;
    }
    head = head->next;
  }
  return c;
}