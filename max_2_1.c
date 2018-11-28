int max(int x, int y)
/*@
  requires x >= y ensures res = x;
  requires y >= x ensures res = y;

*/
{
  if (x > y) return x + 2;
  else return y;
}
