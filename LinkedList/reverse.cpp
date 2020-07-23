struct Node *reverseList(struct Node *head)
{
  struct Node *curr = head;
  struct Node *next = curr->next;
  struct Node *prev = NULL;
  while (next)
  {
    curr->next = prev;
    prev = curr;
    curr = next;
    next = next->next;
  }
  curr->next = prev;
  prev = curr;

  head = prev;
  return head;
}