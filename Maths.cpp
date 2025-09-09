#include <bits/stdc++.h>
using namespace std;

void extraction()
{
    int number = 7893;

    while (number > 0)
    {
        int digit = number % 10;

        cout << digit << endl;

        number = number / 10;
    }
}

void countDigits()
{
    int number = 47832;
    int count = 0;

    while (number > 0)
    {
        count++;
        number /= 10;
    }

    cout << count;
}

void revDigits()
{
    int number = 7893;
    int rev = 0;

    while (number > 0)
    {
        int digit = number % 10;

        // cout << digit << endl;

        rev = rev * 10 + digit;

        number = number / 10;
    }

    cout << rev;
}

void countWithLog()
{
    int number = 47832;

    int digits = log10(47832) + 1;

    cout << digits;
}

// palindrome is the number whose reverse is exactly same the original one
void palindromeCheck()
{

    int num = 1331;

    int dup = num;
    int rev = 0;

    while (num > 0)
    {
        int digits = num % 10;

        rev = rev * 10 + digits;
        num = num / 10;
    }

    cout << rev << endl;
    cout << dup << endl;

    if (rev == dup)
    {
        cout << "it is a palindrome";
    }
    else
    {
        cout << "its not a palindrome";
    }
}

// amstrong numbers: 137 = 1^3 + 3^3 + 7^3 = 137

int intPow(int base, int pow)
{
    int result = 1;

    while (pow != 0)
    {
        result *= base;
        pow--;
    }
    return result;
}

void amstrongNumberCheck()
{

    int num = 153;

    int dup = num;

    int totalDigits = 0;

    int an = 0;

    int temp = num;

    while (temp > 0)
    {
        totalDigits++;

        temp /= 10;
    }

    while (num > 0)
    {
        int digits = num % 10;

        num /= 10;

        an += intPow(digits, totalDigits);
    }

    if (dup == an)
    {
        cout << "it is an amstrong number";
    }
    else
    {
        cout << "its not an amstrong number";
    }
}

void printAllDivisions()
{

    int number = 12;

    cout << "enter the number:";
    cin >> number;

    for (int i = 1; i <= number; i++)
    {
        if (number % i == 0)
        {
            cout << i << " ";
        }
    }
}

void mathemeticlObservation()
{
    int number = 12;

    vector<int> vec;

    for (int i = 1; i <= sqrt(number); i++)
    {
        if (number % i == 0)
        {
            vec.push_back(i);
            if (number / i != i)
            {
                vec.push_back(number / i);
            }
        }
    }
    sort(vec.begin(), vec.end());

    for (auto it : vec)
    {
        cout << it << endl;
    }
}

void primeCheck()
{
    // int number = 11;
    // int count = 0;
    // for (int i = 1; i <= number; i++)
    // {
    //     if (number % i == 0)
    //     {
    //         count++;
    //     }
    // }
    // if (count == 2)
    //     {
    //         cout << "it is a prime number";
    //     }
    //     else{
    //         cout<<"its not a prime number";
    //     }

    int number = 11;
    int count = 0;

    for (int i = 1; i * i <= number; i++)
    {
        if (number % i == 0)
        {
            count++;

            if (number / i != i)
            {
                count++;
            }
        }
    }
    if (count == 2)
    {
        cout << "it is a prime number";
    }
    else
    {
        cout << "its not a prime number";
    }
}

//  GCD/HCF (greatest common divisor/highest common factor)
void gcd()
{
    int n1 = 12, n2 = 24;
    int gcd = 0;

    for (int i = 1; i <= min(n1, n2); i++)
    {
        if (n1 % i == 0 && n2 % i == 0)
        {
            gcd = i;
        }
    }
    cout << "gcd is: " << gcd;
}

// EQUELIDEAN ALGORITH
// gcd(n1,n2) = gcd(n1%n2, n2)           n1 should always be the bigger value
void eqAlgo()
{

    int n1 = 14, n2 = 8;

    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
            n1 = n1 % n2;
        else
            n2 = n2 % n1;
    }
    if (n1 == 0)
        cout << n2 << endl;
    else
        cout << n1 << endl;
}

int main()
{
    // countDigits();

    // countWithLog();

    // revDigits();

    // palindromeCheck();

    // amstrongNumberCheck();

    // mathemeticlObservation();

    // printAllDivisions();

    // primeCheck();

    // gcd();

    eqAlgo();
    return 0;
}
