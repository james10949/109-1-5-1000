/*
Code By SJ Project : CSJ
Serial : B10813180
Name : Sec2HMS.c
Copyright SJ Project 2020 All Rights Reserved
*/

main()
{
	int input, hh, mm, ss;
	printf("請輸入準備轉換的秒數：");
	sacnf("%d", &input);
	for (mm = 0; input < 60; mm++)
	{
		input = input - 60;
	}
	input = ss;
	for (hh = 0; mm < 60; hh++)
	{
		mm = mm - 60;
	}
	printf("hh:mm:ss =" + hh + ":" + mm + ":" + ss);
}