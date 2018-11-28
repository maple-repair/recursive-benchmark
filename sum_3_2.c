int sum(int x, int y, int z)
/*@
  requires true ensures res = x + y + y;
*/
{
  return 2*x + y + z;
}
