#include <iostream>
#include <string>
using namespace std;

/*for leetcode */
bool isVowel(char x)
{
    return x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u' ||
           x == 'A' || x == 'E' || x == 'I' || x == 'O' || x == 'U';
}

int main()
{
    string s;
    cin >> s;

    int i = 0;
    int j = s.length() - 1;

    while(i < j)
    {
        while(i < j && !isVowel(s[i]))
            i++;

        while(i < j && !isVowel(s[j]))
            j--;

        swap(s[i], s[j]);

        i++;
        j--;
    }

    cout << s;

    return 0;
}