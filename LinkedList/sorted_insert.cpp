Node *sortedInsert(Node *head, int x)
{
  struct Node *temp;
  temp = new Node(x);
  if (x < head->data)
  {
    struct Node *traverse = head;
    temp->next = head;
    while (traverse->next != head)
    {
      traverse = traverse->next;
    }
    traverse->next = temp;
    return temp;
  }
  else
  {
    struct Node *traverse = head;
    while (traverse->next != head && !(traverse->data <= x && traverse->next->data > x))
    {
      traverse = traverse->next;
    }
    temp->next = traverse->next;
    traverse->next = temp;
    return head;
  }
}