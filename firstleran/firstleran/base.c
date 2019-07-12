#include <stdio.h>

int main() {
	printTemperatureChange();
	return 0;
}

/**
 * print C = (5/9)(F-32) 华氏摄氏度和聂氏摄氏度对照
 */
int printTemperatureChange(){
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;//温度的下限
	upper = 300;//温度的上限
	step = 20;//步长

	fahr = lower;
	while (fahr <= upper){
		celsius = 5 * (fahr - 32) / 9;
		printf("结果%d\t%d\n", fahr, celsius);
		fahr = fahr + step;
	}
}