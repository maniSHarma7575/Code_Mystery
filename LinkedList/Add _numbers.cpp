struct Node *reverse(struct Node *head)
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
struct Node *addTwoLists(struct Node *first, struct Node *second)
{
  first = reverse(first);
  second = reverse(second);
  struct Node *res;
  int temp = first->data + second->data;
  int carry = temp / 10;
  struct Node *result;
  res = new Node(temp % 10);
  result = res;
  first = first->next;
  second = second->next;
  while (first && second)
  {
    temp = first->data + second->data + carry;
    carry = temp / 10;
    res->next = new Node(temp % 10);
    first = first->next;
    second = second->next;
    res = res->next;
  }
  while (first)
  {
    temp = first->data + carry;
    carry = temp / 10;
    res->next = new Node(temp % 10);
    first = first->next;
    res = res->next;
  }
  while (second)
  {
    temp = second->data + carry;
    carry = temp / 10;
    res->next = new Node(temp % 10);
    second = second->next;
    res = res->next;
  }
  if (carry != 0)
  {
    res->next = new Node(carry);
  }
  return reverse(result);
}