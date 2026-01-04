int expression()
{
	int a = 7;
	int b = 4;
	double c = 2.5;
	int result = a / b + c * (a - b) >= 10;//1.°ıÈ£ºÎÅÍ °è»ê(a-b) 2.°ö¼À 
	                                       //3.³ª´°¼À(Á¤¼ö ³ª´°¼ÀÀÌ¶ó ¼Ò¼öÁ¡ ¹ö¸²) 4.µ¡¼À 
	                                       //5.ºñ±³¿¬»ê 8.5>=10 -->°ÅÁşÀÌ¶ó 0 Ãâ·Â
	printf("result=%d\n", result);

	return 0;
}