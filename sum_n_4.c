int sum(int n)
/*@
  requires n >= 0 ensures 2 * res = n * (n+1);
*/
{
  if (n == 0) return 0;
  else {
    int k;
    k = sum(n-1);
    return 2 * n + 3*k;
  }
}

