#include <iostream>
#include <algorithm>
#include <vector>

int strlen(const char* p) {
  int count = 0;
  while (*p) {
    ++count;
    ++p;
  }
  return count;
}

// int strlen2(const char a[]) {
//   int count = 0;
//   while (a[count]) {
//     ++count;
//   }
//   return count;
// }

// int strlen3(const char* p) {
//   int n = 0;
//   while (p[n]) {
//     ++n;
//   }
//   return n;
// }

// int *f() {
//   int x = 7;
//   return &x;
// }

// std::vector<int>& ff() {
//   std::vector<int> x (7);
//   return x;
// }

bool is_palindromes(const std::string &s) {
  // palindromes using string
  int first = 0;
  int last = s.length() - 1;
  while (first < last) {
    if (s[first] != s[last])
      return false;
    ++first;
    --last;
  }
  return true;
}

bool is_palindromes2(const char s[], int n) {
  // palindromes using array
  int first = 0;
  int last = n - 1;
  while (first < last) {
    if (s[first] != s[last])
      return false;
    ++first;
    --last;
  }
  return true;
}

std::istream &read_word(std::istream& is, char* buffer, int max) {
  is.width(max);
  is >> buffer;

  return is;
}

bool is_palindromes3(const char* first, const char* last) {
  // palindromes using pointer
  while (first < last) {
    if (*first != *last)
      return false;
    ++first;
    --last;
  }
  return true;
}

int main() {
  // double ad[10];
  // double *p = &ad[5];

  // *p = 7;
  // p[2] = 6;
  // p[-3] = 9;
  // for (double *d = &ad[0]; d < &ad[10]; ++d) {
  //   std::cout << *d << std::endl;
  // }
  // for (double *d = &ad[10]; d >= &ad[0]; --d) {
  //   std::cout << *d << std::endl;
  // }

  // 18.6.2
  // char lots[1000];
  // std::cout << strlen(lots) << '\n';

  // std::cout << strlen2(lots) << '\n';

  // char ac[10];
  // // ac = new char[20];
  // // &ac[0] = new char[10];

  // char ad[10];
  // ac = ad;

  // 18.6.3 Array initialization
  // char ac[] = "beorn";
  // std::cout << strlen3(ac) << '\n';

  // 18.6.4
  // int *p = nullptr;
  // *p = 7;

  // int *p;
  // *p = 9;

  // int a[10];
  // int *p = &a[10];
  // *p = 11;
  // a[10] = 12;

  // int *p = new int{7};
  // delete p;
  // *p = 13;

  // std::vector<int>& p = ff();
  // p[4] = 15;
  // for (auto v : p) {
  //   std::cout << v << '\n';
  // }

  // 18.7 palindromes
  // std::string str1 = "anna";
  // std::string str2 = "petep";
  // std::string str3 = "malayalam";
  // std::string str4 = "ah ha";
  // std::cout << is_palindromes(str1) << '\n';
  // std::cout << is_palindromes(str2) << '\n';
  // std::cout << is_palindromes(str3) << '\n';
  // std::cout<< is_palindromes(str4) << '\n';

  // std::string str1 = "anna";
  // std::string str2 = "petep";
  // std::string str3 = "malayalam";
  // std::string str4 = "ah ha";
  // std::cout << is_palindromes(str1) << '\n';
  // std::cout << is_palindromes(str2) << '\n';
  // std::cout << is_palindromes(str3) << '\n';
  // std::cout << is_palindromes(str4) << '\n';

  // palindromes using array
  // constexpr int max = 128;
  // for (char s[max]; read_word(std::cin, s, max);) {
  //   std::cout << s << " is ";
  //   if (!is_palindromes2(s, strlen(s)))
  //     std::cout << "not";
  //   std::cout << "palindromes\n";
  // }

  // palindromes using pointers
  constexpr int max = 128;
  for (char s[max]; read_word(std::cin, s, max);) {
    std::cout << s << " is ";
    if (!is_palindromes3(&s[0], &s[strlen(s)-1]))
      std::cout << "not";
    std::cout << "palindromes\n";
  }

  return 0;
}