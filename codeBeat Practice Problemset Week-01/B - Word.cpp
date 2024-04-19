#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int uppercasecount = 0;
    int lowercasecount = 0;

    for (char c : s)
    {
        if (isupper(c))
        {
            uppercasecount++;
        }
        else
        {
            lowercasecount++;
        }
    }

    if (uppercasecount > lowercasecount)
    {
        for (char& c : s)
        {
            c = toupper(c);
        }
    }
    else
    {
        for (char& c : s)
        {
            c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
