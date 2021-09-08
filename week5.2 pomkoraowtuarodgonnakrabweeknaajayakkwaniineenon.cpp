// week5.1 pomkoraowtuarod.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>

using namespace std;


/*void return1(string str)
{
    for (int a = str.length() - 1; a >= 0; a--)
    {
        cout << str[a];
    }
    cout << endl;
}*/

void return2(string str, int len)
{
    if(len>=0)
        cout << str[len];
        len--;
        return2(str, len);
}






int main()
{
    string str;
    cin >> str;
    //return1(str);
    return2(str, str.length() - 1);

}
