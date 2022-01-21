//C++语言包含了一个全面的标准库
//我们使用标准库里面的 iostream 库进行输入和输出
//用来从io设备中读出和写入操作
#include <iostream>

int main()
{
	int v;
	std::cout << "输出" << std::endl;// << 是输出运算符
	std::cin >> v;// >> 是输入运算符
	std::cout << "输出v的结果：" << v << std::endl;
	/*
	* cout 、 cin和endl被定义在名为std的命名空间namespace中
	* 命名空间可以防止我们名字定义冲突以及使用库相同名字导致冲突
	* 必须显示的说明我们的名字来自std
	* 使用作用域运算符(::)
	*/
	return 0;
}