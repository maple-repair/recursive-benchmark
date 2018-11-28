int min(int x, int y)
/*@
  requires x <= y ensures res = x;
  requires y <= x ensures res = y;

*/
{
  if (3*x < y) return x;
  else return y;
}
