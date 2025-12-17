#include <iostream>
using namespace std;

void printNames(int i, int n){
    // base case
    if (i > n)
    {
        return;
    }

    cout << "Rishi" << endl;

    // recursive call
    printNames(i + 1, n);
}
void printNumbers(int i, int n)
{
    // base case
    if (i > n)
    {
        return;
    }
    cout << i << endl;

    // recursive call
    printNumbers(i + 1, n);
}
void printReverseNumbers(int i, int n)
{
    // base case
    if (i < 1)
    {
        return;
    }
    cout << i << endl;

    // recursive call
    printReverseNumbers(i - 1, n);
}
void printParameterized(int i, int sum){
    // base case
    if (i < 1){
        cout << sum << endl;
        return;
    }
     printParameterized(i-1, sum + i);

}
int functionalRecursion(int n){
    // base case
    if(n == 0){
        return 0;
    }
    return n + functionalRecursion(n-1);
}
int main()
{
    int n;
    cin >> n;

    cout << functionalRecursion(n) << endl;
}
