# Function reverse string
# Without using variables
def reverseString(s):
	return s[::-1]

# With use variable
def reverseString2(s):
	s_temp = ''

	for c in s:
		s_temp = c + s_temp

	return s_temp
