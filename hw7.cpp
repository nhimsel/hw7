#include <iostream>
using namespace std;

struct Fraction
{
    int num;
    int denom;
};

struct Fraction addFractions(struct Fraction f1, struct Fraction f2);
int GCD(int a, int b);

int main()
{
    struct Fraction f1; f1.num=1; f1.denom = 2;
    struct Fraction f2; f2.num = 3; f2.denom=4;
    struct Fraction ans = addFractions(f1,f2);
    cout << ans.num << "/"<< ans.denom << endl;
    return 0;
}

struct Fraction addFractions(struct Fraction f1, struct Fraction f2)
{
    struct Fraction ans;

    //basic fraction addition without reduction
    ans.num = f1.num*f2.denom + f2.num*f1.denom;
    ans.denom = f1.denom*f2.denom;

    //calculate the GCD and reduce the fraction
    int gcd = GCD(ans.num,ans.denom);
    ans.num/=gcd;
    ans.denom/=gcd;
    return ans;
}

int GCD(int a, int b)
{
    //using euclidian algorithm
    if (a==0) return b;
    else if (b==0) return a;
    else return GCD (b,a%b);
}