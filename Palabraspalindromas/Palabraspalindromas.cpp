#include <iostream>
#include <string>

bool is_palindrome(const std::string& word)
{
    for (int i = 0; i < word.length() / 2; ++i)
    {
        if (word[i] != word[word.length() - 1 - i])
        {
            return false;
        }
    }

    return true;
}

int main()
{
    std::string text;
    std::cout << "Texto: ";
    std::getline(std::cin, text);

    int count = 0;
    std::string word;

    for (char c : text)
    {
        if (isalpha(c))
        {
            word += c;
        }
        else
        {
            if (is_palindrome(word))
            {
                ++count;
            }

            word = "";
        }
    }

    if (is_palindrome(word))
    {
        ++count;
    }

    // Print the number of palindrome words
    std::cout << "Numero de palabras palindromas: " << count << std::endl;

    return 0;
}