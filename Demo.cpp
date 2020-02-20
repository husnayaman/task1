#include <iostream>
using namespace std;

// Function to print numbers divisible by 3
void div_3(int value)
{
  cout << "Category: Three" << endl;
  for (int i = 1; i <= value; i++) {

    // Numbers that are divisible by 3
    if (i % 3 == 0)
      cout << i << " ";
  }
}

// Function to print numbers divisible by 8
void div_8(int value)
{

  cout << "\n\nCategory: Eight" << endl;
  for (int i = 1; i <= value; i++) {

    // Numbers that are not divisible by 8
    if (i % 8 == 0)
      cout << i << " ";
  }
}

// Function to print numbers divisible by 3 and 8
void div_3_8(int value)
{

  cout << "\n\nCategory: Three and Eight" << endl;
  for (int i = 1; i <= value; i++) {

    // Numbers that are not divisible by 3 and 8
    if (i % 3 == 0 && i % 8 == 0)
      cout << i << " ";
  }
}

// Driver code
int main()
{
  // input goes here
  int value = 200;

  // Calling function
  div_3(value);
  div_8(value);
  div_3_8(value);

  return 0;
}
