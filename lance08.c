int lance08(int a)
{
    int b;

    if(a%2==0)
        a++;
    a+=10;
    b=1+(rand()% a);

    return b;
}
