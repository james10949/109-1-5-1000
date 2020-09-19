main()
{
    int base, target, result = 0;
    scanf("%d", &target);
    for (base = 1; base < target; result++)
    {
        result = result + base;
    }

    printf("result=%d", result);
}