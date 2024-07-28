#include <iostream>
#include <list>
#include <string>
using namespace std;

int main() {
    list<string> words = {
            "grace",
            "ozona",
            "left",
            "slower",
            "palisade",
            "blue",
            "asked",
            "know",
            "parking",
            "hazel"
    };

    string letters, input;
    srand(time(nullptr));
    auto it = words.begin();
    advance(it, rand() % words.size());


    string word = *it;
    int attempts = 5;
    bool won = false;

    do {
        cout << "\n" << "Insert a letter" << endl;
        cin >> input;

        if (letters.find(input.at(0)) == string::npos)
            letters += input.at(0);

        for (char c : word)
            letters.find(c) != string::npos ? cout << c : cout << "_" ;


        if (word.find(input.at(0)) == string::npos) {
            attempts --;
            cout << "\n" << "Attempts left: " << attempts << endl;
        }


    } while (attempts);

    return 0;
}
