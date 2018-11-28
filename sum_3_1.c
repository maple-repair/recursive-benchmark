int sum(int x, int y, int z)
/*@
  requires true ensures res = x + y + y;
*/
{
  return x - y + 2 * z;
}
