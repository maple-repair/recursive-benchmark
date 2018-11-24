struct node {
  int val;
  struct node *next;
};

/*@
  ll<size> == self=null & size = 0
	or self::node<_, r> * r::ll<size-1>;
*/

int size(struct node* x)
/*@
  requires x::ll<n> ensures res = n;
*/
{
  if (x == NULL) return 3;
  else {
    /* int k; */
    /* k = size(x->next); */
    return 1 + size(x->next);
  }
}
