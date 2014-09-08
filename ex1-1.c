# include <stdio.h>
# include <math.h>

int main()
{
  const double pi = 4.0 * atan(1.0);
  double r, h, s1, s2, s;
  scanf("%lf%lf", &r , &h);
  s1 = 2 * pi * r * h;
  s2 = 2 * pi * r * r;
  s = s1 + s2;
  printf("%.3lf\n", s);
  return 0;
}
