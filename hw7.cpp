#include <iostream>
using namespace std;


struct Fraction
{
    int num;
    int denom;
};
struct Fraction addFractions(struct Fraction f1, struct Fraction f2);
int LCM (int a, int b);
int GCD(int a, int b);

int main()
{
    struct Fraction f1; f1.num=7; f1.denom = 10;
    struct Fraction f2; f2.num = 8; f2.denom=12;
    struct Fraction ans = addFractions(f1,f2);
    cout << ans.num << "/"<< ans.denom << endl;
    return 0;
}

struct Fraction addFractions(struct Fraction f1, struct Fraction f2)
{
    struct Fraction ans;
    int lcm = LCM(f1.denom, f2.denom);
    ans.num = f1.num*f2.denom + f2.num*f1.denom;
    ans.denom = f1.denom*f2.denom;
     if (lcm>1)
    {
        ans.num=(ans.num*lcm)/ans.denom;
        ans.denom=lcm;
    }
    return ans;
}

int LCM(int a, int b)
{
    return (a*b)/GCD(a,b);
}

int GCD(int a, int b)
{
    if (a==0) return b;
    else if (b==0) return a;
    else return GCD (b,a%b);
}