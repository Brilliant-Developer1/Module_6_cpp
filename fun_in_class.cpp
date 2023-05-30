// #include<bits/stdc++.h>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <cctype>
#include <cerrno>
#include <cfloat>
#include <ciso646>
#include <climits>
#include <clocale>
#include <cmath>
#include <complex>
#include <csetjmp>
#include <csignal>
#include <cstdarg>
#include <cstddef>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <ctime>
#include <cwchar>
#include <cwctype>
#include <deque>
#include <exception>
#include <fstream>
#include <functional>
#include <iomanip>
#include <ios>
#include <iosfwd>
#include <iostream>
#include <istream>
#include <iterator>
#include <limits>
#include <list>
#include <locale>
#include <map>
#include <memory>
#include <new>
#include <numeric>
#include <ostream>
#include <queue>
#include <random>
#include <regex>
#include <set>
#include <sstream>
#include <stack>
#include <stdexcept>
#include <streambuf>
#include <string>
#include <strstream>
#include <tuple>
#include <typeinfo>
#include <type_traits>
#include <unordered_map>
#include <unordered_set>
#include <utility>
#include <valarray>
#include <vector>

using namespace std;

class Person
{
public:
    string name;
    int age;
    int mark_1;
    int mark_2;
    Person(string n, int a, int m_1, int m_2)
    {
        name = n;
        age = a;
        mark_1 = m_1;
        mark_2 = m_2;
    }

    void hello()
    {
        cout << "Hello" << endl;
    }
    int total()
    {
        int ans = mark_1 + mark_2;
        return ans;
    }
};

int main()
{
    Person ruhul("Rohula Amin", 27, 78, 41);

    ruhul.hello();
    cout << ruhul.total() << endl;
    cout << ruhul.name << endl;
    cout << ruhul.age << endl;

    return 0;
}