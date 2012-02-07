#include <stdio.h>

int main(void)
{
  int a;
  int *pa;

  a = 0;
  pa = &a;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\n", a, &a, pa, *pa);

  *pa = 1;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\n", a, &a, pa, *pa);

  int b = 2, *pb;

  pb = pa;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  pb = &b;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  *pb = *pa;

  printf("\na = %d; &a = %p; pa = %p; *pa = %d\nb = %d; &b = %p; pb = %p; *pb = %d\n", a, &a, pa, *pa, b, &b, pb, *pb);

  char c; /* キャラクタ型の変数 */
  char *d; /* キャラクタ用ポインタ型の変数 */
  char e[] = "abc"; /* キャラクタの配列型(長さ4)の変数 */
  char f[] = {'a', 'b', 'c'}; /* キャラクタの配列型(長さ3)の変数 */
  char g[][8] ={"Mercury", "Venus"}; /* キャラクタの配列(長さ8)の配列(長さ2)型の変数 */
  char *h[] = {"Mercury", "Venus"}; /* キャラクタ用ポインタの配列(長さ2)型の変数 */
  char **i = h; /* キャラクタ用ポインタのポインタ型の変数 */
  
  return 0;
}
