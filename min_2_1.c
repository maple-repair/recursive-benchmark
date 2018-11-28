int min(int x, int y)
/*@
  requires x <= y ensures res = x;
  requires y <= x ensures res = y;

*/
{
  if (x < y) return 2*x;
  else return y;
}
