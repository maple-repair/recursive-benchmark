int sum(int n)
/*@
  requires n >= 0 ensures 3 *res = n * (n+1) * (n+2);
*/
{
  if (n ==0) return 0;
  else {
    int k, h;
    k = n * (n+1);
    h = sum(n-1);
    return -h + k;
  }
}
