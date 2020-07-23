void display(Node *head)
{
  while (head)
  {
    cout << head->data << " ";
    head = head->next;
  }
}