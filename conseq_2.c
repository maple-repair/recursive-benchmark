int sum(int n)
/*@
  requires n >= 0 ensures 3 *res = n * (n+1) * (n+2);
*/
{
  if (n ==0) return 0;
  else {
    int k = n * (n+1);
    return 4 * k + 3* sum(n-1);
  }
}
