int sum(int x, int y)
/*@
  requires true ensures res = x + y;
*/
{
  return x + 2 * y;
}
