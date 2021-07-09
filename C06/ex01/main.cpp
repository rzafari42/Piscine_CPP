
int main(void)
{
    uintptr_t raw;
    Data init;
    Data *res;

    init.str = "Hi";
    raw = serialize(&init);
    res = deserialize(raw);
    printres(res, &init);

    return 0;
}