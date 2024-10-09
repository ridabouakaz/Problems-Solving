#include <iostream>
#include <cmath>
#include <string>
#include <vector>
#include <string_view>
using namespace std;
auto makeLooper(const string& str) {
    size_t index = 0;
    return [str, index]() mutable -> char {
        char currentChar = str[index];
        index = (index + 1) % str.length();
        return currentChar;
        };
}
int main()
{
    makeLooper("abc");
}
/*Description:

The makeLooper() function (or make_looper in your language) takes a string (of non-zero length) as an argument. It returns a function.
The function it returns will return successive characters of the string on successive invocations.
It will start back at the beginning of the string once it reaches the end.

For example:

auto abc = makeLooper("abc");
abc(); // should return 'a' on this first call
abc(); // should return 'b' on this second call
abc(); // should return 'c' on this third call
abc(); // should return 'a' again on this fourth call

Different loopers should not affect each other, so be wary of unmanaged global state.
Iterators
Algorithms*/
//          ／＞　　フ
//　　　　　| 　n　n 彡
//　 　　　／`ミ＿xノ
//　　 　 /　　　 　 |
//　　　 /　 ヽ　　 ﾉ
//　 　 │　　|　|　|
//　／￣|　　 |　|　|
//　| (￣ヽ＿_ヽ_)__)
//　＼二つ
// ITS CAT FOR YOU