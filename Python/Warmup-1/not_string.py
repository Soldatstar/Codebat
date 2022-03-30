
#Given a string, return a new string where "not " has been added to the front.
#However, if the string already begins with "not", return the string unchanged.

def not_string(str):
  str0 = str.split()
  if str0[0] == 'not':
    return str
  else:
    return "not " + str
