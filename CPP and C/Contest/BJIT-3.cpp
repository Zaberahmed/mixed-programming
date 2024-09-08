#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a[3] = {1, 2, 3};
    int b[3] = {3, 4, 5};
    int c[3] = {4, 1, 6};
    int out[10];                // taking another array where everything will be sorted.
    char hash[10][3];           // taking a hash array for 3 characters.
    for (int i = 0; i < 3; i++) // taking input from array a.
    {
        out[i] = a[i];
        hash[out[i]][0] = 1; // hashing by setting the value of the first(A) element as 1.
    }
    for (int i = 0; i < 3; i++) // taking input from array b.

    {
        out[i + 3] = b[i];
        hash[out[i + 3]][1] = 1; // hashing by setting the value of the second(B) element as 1.
    }
    for (int i = 0; i < 3; i++) // taking input from array c.
    {
        out[i + 6] = c[i];
        hash[out[i + 6]][2] = 1; // hashing by setting the value of the third(C) element as 1.
    }

    for (int i = 0; i < 9; i++) // sorting
    {
        for (int j = i + 1; j < 8; j++)
        {
            if (out[i] > out[j])
            {
                int temp = out[i];
                out[i] = out[j];
                out[j] = temp;
            }
        }
    }
    // for (int i = 0; i < 9; i++)
    //     cout << out[i] << " ";

    string s[10]; // for showing the output

    for (int i = 0; i < 9; i++)
    {
        if (hash[out[i]][0] == 1) // if it belongs to array A
        {
            s[i] += "A-";           // then add "A-" first.
            s[i] += (out[i] + '0'); // then the number itself.
            hash[out[i]][0] = 0;    // finally resetting the hash value.
        }
        if (hash[out[i]][1] == 1) // if it belongs to array B
        {
            s[i] += "B-";           // then add "B-" first.
            s[i] += (out[i] + '0'); // then the number itself.
            hash[out[i]][1] = 0;    // finally resetting the hash value.
        }
        if (hash[out[i]][2] == 1) // if it belongs to array C
        {
            s[i] += "C-";           // then add "C-" first.
            s[i] += (out[i] + '0'); // then the number itself.
            hash[out[i]][2] = 0;    // finally resetting the hash value.
        }
    }
    for (int i = 0; i < 9; i++) // finally showing the output of the value.
        cout << s[i] << " ";
}