#include <iostream>
using namespace std;
int main()
{
	42;//42被称为一个字面值常量
	//字面值常量的形式决定了数据类型
	
	//整型的字面值有 十进制 八进制  十六进制
	20;// 十进制
	024;// 八进制
	0x14;// 十六进制

	-42;//字面值还是42 负号不在字面值中，仅仅对字面值取负而已

	//浮点型字面值表现为小数或者以科学计数法表示指数  指数部分e或者E表示
	3.14159;
	3.14159E0; 
	0.;
	0e0;
	.001;

	//字符和字符串字面值
	'a';//单引号括起来的一个字符为字符字面值
	"hello";//双引号括起来的0个或多个字符为字符串字面值

	//转义序列 均以反斜杠 \ 作为开始
	cout << "\n111"; //换行符 下一行输出111
	//cout << "\v";   //纵向制表符，没啥用
	cout << "\\";  // 打印反斜线
	cout << "hello\vqqq";//回车符，让光标回到开头，qqq覆盖前面的111
	/*
	\t 横向制表符
	\b 退格符
	\?  问号
	\f  进纸符
	\a  报警符
	\"	双引号
	\ ' 单引号
	*/

	//泛化转义字符 \x后跟1或者多个十六进制数字，\后跟1-3个八进制数字
	cout << "\n hello \x4do \115!";

	//指定字面值类型
	L'a';//宽字符型字面值，wchar_t
	u8"hi";//utf-8字符串字面值
	42ULL; //无符号整型字面值，unsigned long long
	1E-3F;//单精度浮点型， float
	3.14L;//扩展精度浮点型，long double

	/*
	* 前缀
	* u  char16_t
	* U  char32_t
	* L  wchar_t
	* u8 char
	* 
	* 后缀
	* u or U unsigned
	* l or L long
	* ll or LL long long 
	* f or F float
	* l or L long double
	*/

	//布尔字面值和指针字面值
	bool t = false; // false or true 都是布尔字面值
	nullptr;//是指针字面值
	
	return 0;
}