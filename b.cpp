#include <iostream>
#include <map>
#include <vector>
#include <algorithm>

using namespace std;

void findPairs(int x[], int N)
{
    string s = "";
    for (int i = 0; i < N; i++)
    {
        s += to_string(x[i]);
    }

    map<string, int> pairs;

    for (int i = 0; i < s.length() - 1; i++)
    {
        string pair = s.substr(i, 2);
        if (pairs.find(pair) != pairs.end())
        {
            pairs[pair]++;
        }
        else
        {
            pairs[pair] = 1;
        }
    }
    vector<string> repeating_pairs;
    for (auto const &pair : pairs)
    {
        if (pair.second > 1)
        {
            repeating_pairs.push_back(pair.first);
        }
    }

    sort(repeating_pairs.begin(), repeating_pairs.end());

    for (auto const &pair : repeating_pairs)
    {
        cout << stoi(pair.substr(0, 1)) << " " << stoi(pair.substr(1, 1)) << endl;
    }
}

int main()
{
    int N;
    cin >> N;

    int x[N];
    for (int i = 0; i < N; i++)
    {
        cin >> x[i];
    }

    findPairs(x, N);

    return 0;
}