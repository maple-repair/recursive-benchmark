int max(int x, int y)
/*@
  requires x >= y ensures res = x;
  requires y >= x ensures res = y;

*/
{
  if (x > 2*y) return x;
  else return y;
}
