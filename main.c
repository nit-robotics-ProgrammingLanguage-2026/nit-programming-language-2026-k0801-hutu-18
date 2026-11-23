#include <stdio.h>

int main(void)
{
    int a, b, c;
  {
    int a, b, c;
    int *p, *q, *r; /* TODO: 整数型ポインタ変数 p, q, r を宣言 */

    p = &a;
    q = &b;
    r = &c;   /* TODO: p, q, r にそれぞれ a, b, c のアドレスを代入 */

    scanf("%d", p);/* TODO: p を使って a に scanf で値を読み込む */

    *q = 5;/* TODO: p, q, r の間接参照 (*) だけを使って、b に 5 を代入し、a+b を c に代入 */

    *r = *p + *q;
    
    printf("%d,%d,%d", a, b, c);
    return 0;
}
