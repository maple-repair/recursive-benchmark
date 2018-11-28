int min(int x, int y, int z)
/*@
  requires x <= y & x <= z ensures res = x;
  requires y <= x & y <= z ensures res = y;
  requires z <= x & z <= y ensures res = z;
*/
{
  if (x < y & x < z) return x;
  else if (y < z) return y;
  else return 2*z+3;
}
