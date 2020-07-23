Node *pairWiseSwap(struct Node *head)
{
  Node *c = head;
  while (head && head->next)
  {
    int temp = head->data;
    head->data = head->next->data;
    head->next->data = temp;
    head = head->next->next;
  }
  return c;
}