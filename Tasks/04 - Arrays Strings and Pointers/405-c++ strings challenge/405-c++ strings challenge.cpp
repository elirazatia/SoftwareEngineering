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

    return 0;
}