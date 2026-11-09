#include <stdio.h>
int main(void)
{
    int a, b;
    printf("Entrez deux entiers : ");
    scanf("%d %d", &a, &b);
    printf("La somme de %d et %d est %d\n", a, b, a + b);
    return 0;
}
