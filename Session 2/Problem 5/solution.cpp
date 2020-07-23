#include <iostream>
#include<cstring>

using namespace std;

int main()
{
    char word[1000];
    cin>>word;
    int len = strlen(word);
    const char nearestVowels[50] = "aaaeeeeiiiiioooooouuuuuuuu";
    char newWord[1000];
    int index=0;
    for(int i=0;i<len;i++)
    {
        char vowel;
        vowel = nearestVowels[word[i]-'a'];
        newWord[index]=vowel;
        index++;
    }
    cout<<newWord;
    return 0;
}