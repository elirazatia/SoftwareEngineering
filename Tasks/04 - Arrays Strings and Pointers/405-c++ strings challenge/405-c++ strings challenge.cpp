#include <iostream>
#include <string.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    // Challenge 1 - "Web Scraping"
    // Find the quoted number that follows the title attribute
    string input =
        "<HTML>\n" \
        "  <BODY>\n" \
        "    <P>Welcome to COMP1000</P>\n" \
        "    <BR>\n" \
        "    <P><a title=\"42\">Hover over here to see a special number</a></P>\n"
        "  </BODY>\n" \
        "</HTML>\n";

    string match = "title=\"";
    cout << input << endl;
    cout << "Searching for " << match << endl;

    size_t titleLocation = input.find(match);
    cout << "Location: " << titleLocation << endl;

    string postAttributeKeyString = input.substr(titleLocation + match.size());
    size_t endQuotationLocation = postAttributeKeyString.find("\"");
    cout << postAttributeKeyString;
    string matchingAttributeValue = postAttributeKeyString.substr(0, endQuotationLocation);

    cout << "Attribute value" << matchingAttributeValue;
    //;char* matchSubstring = strpos(input, match);

    //cout << "matching for " << match << endl;
    //cout << "matching substring is " << matchSubstring;

    return 0;
    /*
    //Write solution here
    bool isDetermined = false;
    int index = 0;
    int stringLength = size(input);

    int existingAttributePointer = 0;
    char existingAttribute[64] = "";
    memset(existingAttribute, 0, sizeof(existingAttribute));

    for (char* s = &input[0]; *s != '\0'; s++) {
        printf("%c\n", *s);

        if (s[0] == '\40') {
            cout << "is character break" << endl;
            cout << "checking attribute " << existingAttribute;
            strcpy_s(existingAttribute, "");
            existingAttributePointer = 0;
        }
        else {
            cout << "is adding " << s[0];
            existingAttribute[existingAttributePointer] = s[0];
            existingAttributePointer += 1;
        }
    }

    while (index < stringLength && !isDetermined) {
        char character[1] = { input[index] };
        index += 1;

        if (strncmp(character, " ", sizeof(character))) {
            //cout << "is character break";
            //cout << existingAttribute << endl;
            strcpy_s(existingAttribute, "");
            existingAttributePointer = 0;
        }
        else {
            //cout << "is adding " << existingAttribute[existingAttributePointer];
            existingAttribute[existingAttributePointer] = character[0];
            existingAttributePointer += 1;
        }
    }

    // Challenge 2 - word count
    // Type in a sentence, and count the number of time the words "the" appears 
    getline(std::cin, input);   //Read a line (users types this in)
    istringstream iss(input);   //Create a string "stream" (sequence of words)
    string word;                //This will hold the next word
    while (iss >> word) {       //Read the next word (if there is one)
        cout << word << endl;   //Output each word in turn
    }
    */
}

