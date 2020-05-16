long long int floorSqrt(long long int x) 
{
    int i=1;
    while(i*i<=x)
    {
        i++;
    }
    return i-1;
}