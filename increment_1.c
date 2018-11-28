int increment(int n)
/*@
  requires n >= 0 ensures res = n;
*/
{
  if (n ==0) return 3;
  else {
    return 1 +  increment(n-1);
  }
}
