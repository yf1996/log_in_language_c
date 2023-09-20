#include <stdio.h>
#include "log.h"

int addition_func(int *p_a, int *p_b, int *p_res)
{
    if (NULL == p_a || NULL == p_b || NULL == p_res)
    {
        Log_e("param is NULL, p_a:%p, p_b:%p, p_res:%p", p_a, p_b, p_res);
        return -1;
    }
    return 0;
}

int main(void)
{
    int a = 1;
    int b = 2;
    int result;
    int ret = -1;

    Log_e("param is NULL, p_a:%p, p_b:%p, p_res:%p", &a, &b, &result);

    ret = addition_func(&a, &b, &result);
    if (1 > ret)
    {
        Log_e("addition_func error");
        return -1;
    }

    Log_d("%d+%d=%d", a, b, ret);
    return 0;
}