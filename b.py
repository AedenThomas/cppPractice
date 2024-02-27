# Question 41
# Paul and Mary wants to send each other messages discretely, without anyone else knowing what they're talking about. So Paul came up with a plan and developed a certain algorithm which takes a large number and converts it to a meaningful message. But to determine this large number, Mary needs to decode a message which Paul will be sending before!
# To convey his message, Paul will be sending a string of alphabets and a pattern. Mary needs to decode this string and pattern to form a large unique number so that she can put it up as an input to the defined algorithm to extract the secret message.
# The starting index of the string is 1. The unique number is the list of all indices of the pattern found in the string. Unique number is a integer without any space or comma between the various indices.
# To make it even more safe, Paul has introduced wildcard characters(#) in the pattern. It stands for any one character.
# The character can be different in its occurrence l.e. 'a# can be 'aa' or 'ab' or ...
# 'az' where # maps to 'a', 'b'or.. '2' respectively.
# You goal is to help Mary to find the Unique Number. In case there is no pattern formed, return 0 as unique number.
# Input
# First line will have a string on length 'N'.
# String can contain alphabets from [a-2]
# Second line will have a pattern of length
# •M'. hattern will be formed will alphabets between [a-z] and any number of '#*
# Constraints
# 0 <N<= 10'3
# 0 <M <= 10*3
# Output
# Unique number in one line.
# Sample Input 1: abcdefabe
# abc
# Sample Output 1:
# 17
# Explanation:
# Pattern abc is found in the
# string abcdefabe at two indices i.e 1 and
# 7. Hence unique number = 17
# Sample Input 2: abcdabghabd
# ab#
# Sample Ouput 2:
# 159
# Explanation:
# Pattern ab# is found in the string abcdabghabd at three indices - 1,5 and 9.
# Hence unique number = 159

# def getUniqueLargeNumber (input_string, pattern):

# Take a deep breath and work on this step by step and give the code in python

import re
def getUniqueLargeNumber(input_string, pattern):
    pattern = pattern.replace('#', '.{1}')
    
    matches = [match.start() + 1 for match in re.finditer(f'(?={pattern})', input_string)]
    
    return int(''.join(map(str, matches))) if matches else 0

# Sample Inputs
print(getUniqueLargeNumber('abcdefabc', 'abc'))  # Sample Output 1
print(getUniqueLargeNumber('abcdabghabd', 'ab#'))  # Sample Output 2
