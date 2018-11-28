int increment(int n)
/*@
  requires n >= 0 ensures res = n;
*/
{
  if (n ==0) return 0;
  else {
    return 1 + 2 * increment(n-1);
  }
}
