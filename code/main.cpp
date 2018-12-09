#include"founction.h"

//窗口尺寸
#define Win_L 1000
#define Win_H 600

int main(void)
{
	ege::setinitmode(ege::INIT_ANIMATION);
	// 图形初始化
	ege::initgraph(Win_L, Win_H);
	setcaption("佩奇大战恶魔"); //修改窗口名称
	// 随机数初始化，如果需要使用随机数的话
	ege::randomize();
	// 程序主循环
	mainloop();
	// 关闭绘图设备
	ege::closegraph();
	return 0;
}

