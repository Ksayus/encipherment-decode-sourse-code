#ifndef PASSWORD_TXT
#define PASSWORD_TXT

const char* one_dimensional_encryption_word = "1.һά����";
const char* two_dimensional_encryption_word = "2.��ά����";
const char* fence_encryption_word = "3.դ������";


const char* mode_encryption_1 = "1.����ģʽ";
const char* mode_encryption_2 = "2.����ģʽ";

extern int bigword[78] = { 'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z' };

extern int smallword[78] = { 'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z' };

extern char two_dimension_bigword[6][40] = { "ABCDEFGHIJKLMABCDEFGHIJKLMABCDEFGHIJKLM",
									  "NOPQRSTUVWXYZNOPQRSTUVWXYZNOPQRSTUVWXYZ",
									  "ABCDEFGHIJKLMABCDEFGHIJKLMABCDEFGHIJKLM",
									  "NOPQRSTUVWXYZNOPQRSTUVWXYZNOPQRSTUVWXYZ",
									  "ABCDEFGHIJKLMABCDEFGHIJKLMABCDEFGHIJKLM",
									  "NOPQRSTUVWXYZNOPQRSTUVWXYZNOPQRSTUVWXYZ" };

extern char two_dimension_smallword[6][40] = { "abcdefghijklmabcdefghijklmabcdefghijklm",
										"nopqrstuvwxyznopqrstuvwxyznopqrstuvwxyz",
										"abcdefghijklmabcdefghijklmabcdefghijklm",
										"nopqrstuvwxyznopqrstuvwxyznopqrstuvwxyz",
										"abcdefghijklmabcdefghijklmabcdefghijklm",
										"nopqrstuvwxyznopqrstuvwxyznopqrstuvwxyz" };

extern int privacy_key = 114514;

#endif // !PASSWORD