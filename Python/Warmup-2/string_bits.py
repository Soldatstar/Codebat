#Given a string, return a new string made of every other char starting with the first, so "Hello" yields "Hlo".

def string_bits(str):
  newStr = ""
  for i in range(0,len(str),2):
    newStr =  newStr + str[i]
  return newStr
