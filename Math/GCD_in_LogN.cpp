// Link : #
/*
find the gcd of 2 number a,b in O(log N)
*/
//Euclidean algorithms
int GCD(int a,int b)
{
    if(a==0)
        return abs(b);
    GCD(abs(a)%abs(b).abs(a));
}
