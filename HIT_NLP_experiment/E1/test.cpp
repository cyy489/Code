#include <iostream>
#include <clocale>//c->ctype,cmath;locale->local environment
using std::cout;
using std::endl;
using std::wcin;
using std::wcout;
wchar_t s[50045];
int main()
{   
    freopen("test.in","r",stdin);
    freopen("test.out","w",stdout);
	setlocale(LC_ALL, "chs");//输出wchar_t类型的必要条件
	wcin >> s;
    wcout << s[0] << endl;
 
return 0;
}
