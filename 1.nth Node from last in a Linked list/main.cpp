
/* struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

//Function to find the data of nth node from the end of a linked list.
int getNthFromLast(Node *head, int n)
{
      Node *p,*x;
      p = head;
      x = head;
      
      while(x!=0)
      {
          if(n==0)
          {
              break;
          }
          x = x->next;
          n--;
      }      
          if(n>0)
          {
            return -1;
          }
      while(x!=0)
      {
          p = p->next;
          x = x->next;
      }
      return p->data;            // Your code here
}

