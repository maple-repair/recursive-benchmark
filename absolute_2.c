int abs(int x)
/*@
  requires x >= 0 ensures res = x;
  requires x < 0 ensures res = -x;
*/
{
  if (x >= 0) return x;
  else return x;
}
