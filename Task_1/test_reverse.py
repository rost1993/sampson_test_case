import sys
import reverse

for i in range(3):
	s = input('Enter string: ')

	print('Result 1: ' + reverse.reverseString(s))
	print('Result 2: ' + reverse.reverseString2(s))
