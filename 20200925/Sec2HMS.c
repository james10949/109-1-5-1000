/*
Code By SJ Project : CSJ
Serial : B10813180
Name : Sec2HMS.c
Copyright SJ Project 2020 All Rights Reserved
*/

main()
{
	int hh, mm, ss;
	printf("請輸入準備轉換的秒數：");
	scanf("%d", &ss);
	for (mm = 0; ss >= 60; mm++)
	{
		ss = ss - 60;
	}
	for (hh = 0; mm >= 60; hh++)
	{
		mm = mm - 60;
	}
	printf("hh:mm:ss = %02d:%02d:%02d", hh, mm, ss);
}