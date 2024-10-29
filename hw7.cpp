#include <iostream>
using namespace std;


struct Fraction
{
    int num;
    int denom;
};
struct Fraction addFractions(struct Fraction f1, struct Fraction f2);

int main()
{
    struct Fraction f1; f1.num=2; f1.denom = 3;
    struct Fraction f2; f2.num = 4; f2.denom=7;
    struct Fraction ans = addFractions(f1,f2);
    cout << ans.num << endl << ans.denom << endl;
    return 0;
}

struct Fraction addFractions(struct Fraction f1, struct Fraction f2)
{
    struct Fraction ans;
    ans.num = f1.num*f2.denom + f2.num*f1.denom;
    ans.denom = f1.denom*f2.denom;
    return ans;
}