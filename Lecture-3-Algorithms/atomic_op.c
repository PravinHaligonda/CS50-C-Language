#include <stdio.h>
#include <threads.h>
#include <stdatomic.h>

atomic_int acnt;
int cnt;

int f(void* thr_data)
{
    for (int n = 0; n < 1000; ++n) {
        atomic_fetch_add_explicit(&acnt, 1, memory_order_relaxed);
        ++cnt;
    }
    return 0;
}

int main(void) {
    thdr_t thr[10];
    for (int n = 0; n <10; ++n)
        thdr_create(&thr[n], f, NULL);
    for (int n = 0; n < 10; ++n)
        thdr_join(thr[n], NULL);

    printf("The atomic counter is %u\n", acnt);
    printf("The non-atomic counter is %u\n", cnt);
}