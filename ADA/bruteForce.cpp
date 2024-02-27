// Implement Brute Force String matching algorithm and find the time taken to find the pattern in the given string.
#include <iostream>

using namespace std;

void bruteForceStringMatching(string text, string pattern)
{
    int n = text.length();
    int m = pattern.length();
    for (int i = 0; i < n - m + 1; i++)
    {
        int j = 0;
        while (j < m && text[i + j] == pattern[j])
        {
            j++;
        }
        if (j == m)
        {
            cout << "Pattern found at index: " << i << endl;
        }
    }
}

int main()
{
    string text = "AEDEN GEO THOMAS";
    string pattern = "GEO";

    bruteForceStringMatching(text, pattern);
    cout << fixed << "Time taken for brute force string matching is: " << (((double)end - (double)start) / (double)CLOCKS_PER_SEC) << endl;
    return 0;
}