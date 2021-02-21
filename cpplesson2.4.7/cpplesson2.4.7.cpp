/*Вводится одно натуральное четырёхзначное число.Догадайтесь по двум открытым тестам, какую надо написать программу, чтобы она прошла все оставшиеся закрытые наборы исходных данных.

Sample Input 1:

1234
Sample Output 1 :

-22
Sample Input 2 :

9876
Sample Output 2 :

22
*/

#include <iostream>
using namespace std;
int main()
{
    int x, a, b, c, d;
    cin >> x;
    a = x / 100;
    b = x / 10 % 10;
    c = x % 10;
    d = b * 10 + c;
    cout << a - d;
    return 0;
}