/* Write a function Boolean isValidURL(String url).*/



#include <iostream>
#include <regex>
using namespace std;

// Function to check the URL.
bool isValidURL(string str)
{

// Regex to check valid domain name.
const regex pattern("^(?!-)[A-Za-z0-9-]+([\\-\\.]{1}[a-z0-9]+)*\\.[A-Za-z]{2,6}$");

// If the URL is empty return false
if (str.empty())
{
	return false;
}

// Return true if the domain name
// matched the ReGex
if(regex_match(str, pattern))
{
	return true;
}
else
{
	return false;
}
}

// Driver Code
int main()
{

// Test Case 1:
string str1 = "citybuild.org";
cout << isValidURL(str1) << endl;



// Test Case 2:
string str2 = "-citybuild.org";
cout << isValidURL(str2) << endl;


return 0;
}


