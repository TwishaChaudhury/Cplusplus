#include <bits/stdc++.h>

using namespace std;

inline bool IsLowerChar(char c)
{
    return c >= 'a' && c <= 'z';
}

int main()
{
    string in;
    set<string> words;

    while (cin >> in)
    {
        int size = in.size();

        string present = "" ;
        for (int i = 0; i < size; ++i)
        {
            char c = tolower(in[i]);
            if (IsLowerChar(c))
                present += c;
            else if (present != "")
            {
                words.insert(present);
                present = "";
            }
        }
        if (present != "")
            words.insert(present);
    }

    for (set<string>::iterator it = words.begin(); it!= words.end(); ++it)
        cout << *it << '\n';
}
